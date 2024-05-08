using System;
using System.Configuration;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Windows.Forms;
using DLLNOVOWrapper;
using OPCAutomation;

namespace PSOwinForm
{
    public partial class ERGA : Form
    {
        private Timer timer;
        private static OPCServer server;
        private OPCGroup Group0;
        private OPCGroup Group1;
        private OPCGroup Group2;
        private OPCGroup Group3;
        private ModelWrapp inputs = new ModelWrapp();
        private extInputs inputsFromOPC = new extInputs();
        private string opcServerName;
        private string opcServerHost;
        private string opcServerGroup;
        private string opcServerGroupWrite;
        private string opcStartStopGroup;
        private string btnScadaGroup;
        private bool isTimerRunning = false;
        private bool optimizacijaStart = false;
        private int brojanjeMinuta = 900;

        private Timer watchdogTimer;
        private bool watchdogToggle = false; 
        private bool shouldToggleToHigh = true; 
        private int secondsCounter = 0; 

        public ERGA()
        {
            InitializeComponent();
            InitializeConfiguration();
            InitializeOpcServer();
            ReadInitialOPCValues();
            inputs.initialize();
           
            InitializeWatchdogTimer();
            UpdateOptimizationStatusLabel(); // Initial label update
            StartTimer();
        }

        private void InitializeConfiguration()
        {
            // Učitavanje konfiguracijskih postavki iz datoteke konfiguracije aplikacije.(App.config)
            opcServerName = ConfigurationManager.AppSettings["opcServerName"];
            opcServerHost = ConfigurationManager.AppSettings["opcServerHost"];
            opcServerGroup = ConfigurationManager.AppSettings["opcServerGroup"];
            opcServerGroupWrite = ConfigurationManager.AppSettings["opcServerGroupWrite"];
            opcStartStopGroup = ConfigurationManager.AppSettings["opcStartStopGroup"];
            btnScadaGroup = ConfigurationManager.AppSettings["btnScadaGroup"];
        }
        private void StartTimer()
        {
            if (timer == null)
            {
                timer = new Timer();
                timer.Interval = 1000; // tick every second
                timer.Tick += Timer_Tick;
            }
            timer.Start();
            isTimerRunning = true;
        }
        private void StopTimer()
        {
            if (timer != null)
            {
                timer.Stop();
            }
            isTimerRunning = false;
        }
        private void UpdateOptimizationStatusLabel()
        {
            string statusText = $"Optimizacija u radu: {optimizacijaStart}";
            if (lblOptimizationStatus.InvokeRequired)
            {
                lblOptimizationStatus.Invoke(new Action(() => lblOptimizationStatus.Text = statusText));
            }
            else
            {
                lblOptimizationStatus.Text = statusText;
            }
        }
        private void ReadInitialOPCValues()
        {
            try
            {
                inputsFromOPC.Level = Convert.ToDouble(Group0.OPCItems.Item(ConfigurationManager.AppSettings["LevelItemID"]).Value);
                inputsFromOPC.Protok = Convert.ToDouble(Group0.OPCItems.Item(ConfigurationManager.AppSettings["ProtokItemID"]).Value);
                inputsFromOPC.PumpStatus = Convert.ToInt32(Group0.OPCItems.Item(ConfigurationManager.AppSettings["PumpStatusItemID"]).Value);
                inputsFromOPC.watchdogRead = Convert.ToInt32(Group0.OPCItems.Item(ConfigurationManager.AppSettings["WatchdogItemID"]).Value);
            }
            catch (Exception ex)
            {
                WriteToLog("Error reading initial OPC values: " + ex.Message);
            }
        }

        private bool isTerminated = false; // Flag to check if terminate and initialize have been executed

        private void Timer_Tick(object sender, EventArgs e)
        {

            // Calculate the total seconds from the start of the day
            TimeSpan timeOfDay = DateTime.Now.TimeOfDay;
            int totalSecondsToday = (int)timeOfDay.TotalSeconds;
            inputsFromOPC.Vrijeme = totalSecondsToday; // Update this every second regardless of optimization state

            // Update countdown label every second
            UpdateCountdownLabel();
            UpdatePumpStatusLabel(inputs.pumpStatus); // Update label sa novim statusom pupme
            // Perform optimization-related tasks only if optimization is active
            if (optimizacijaStart)
            {

                isTerminated = false; // Reset the flag when optimization is active

                // Decrement the countdown and perform optimization logic
                if (brojanjeMinuta > 0)
                {
                    brojanjeMinuta--;
                }
                else
                {
                    brojanjeMinuta = 900; // Reset the countdown after it reaches 0
                    WriteToLog($"Model odlucio da pumpa treba biti: {inputs.pumpStatus}");
                    WriteToLog($"Status optimizacije: {inputs.nlpStatus}");
                  
                }

                try
                {
                    inputs.setExternalInputs(inputsFromOPC);
                    inputs.step();
                    inputs.getExternalOutputs();
                    UpdateOPC(inputs.pumpStatus);
                }
                catch (Exception ex)
                {
                    HandleTimerExceptions(ex);
                }
            }
            else if (!isTerminated)
            {
                inputs.terminate();
                ReadInitialOPCValues();
                inputs.initialize();
                isTerminated = true; // Set the flag to true after terminate and initialize have been called+
            }
        }

        private void EnsureServerConnection()
        {
            if (server != null && server.ServerState != (int)OPCServerState.OPCRunning)
            {
                try
                {
                    server.Connect(opcServerName, opcServerHost);
                    WriteToLog("Reconnected to OPC server.");
                }
                catch (Exception ex)
                {
                    WriteToLog($"Failed to reconnect to OPC server: {ex.Message}");
                }
            }
        }

        private void UpdateCountdownLabel()
        {
            string countdownText = $"Vrijeme do iduće odluke: {brojanjeMinuta / 60:D2}:{brojanjeMinuta % 60:D2}";
            if (lblCountdown.InvokeRequired)
            {
                lblCountdown.Invoke((MethodInvoker)delegate {
                    lblCountdown.Text = countdownText;
                });
            }
            else
            {
                lblCountdown.Text = countdownText;
            }
        }

        private void HandleTimerExceptions(Exception ex)
        {
            Invoke((MethodInvoker)delegate {
                WriteToLog($"Error in timer: {ex.Message}\n");
                WriteToLog($"Stack trace: {ex.StackTrace}\n");
                if (ex.InnerException != null)
                {
                    WriteToLog($"Inner HandleTimerExceptions exception: {ex.InnerException.Message}\n");
                }
            });
        }
        private void InitializeOpcServer()
        {
            try
            {
                // Povezivanje s OPC serverom i postavljanje grupa i stavki za komunikaciju.
                server = new OPCServer();
                server.Connect(opcServerName, opcServerHost);
                WriteToLog("Povezan na opc server: " + server.ServerState);
                server.OPCGroups.Add(opcServerGroup);
                server.OPCGroups.Add(opcServerGroupWrite);
                server.OPCGroups.Add(opcStartStopGroup);
                server.OPCGroups.Add(btnScadaGroup);
                Group0 = server.OPCGroups.GetOPCGroup(opcServerGroup);
                Group1 = server.OPCGroups.GetOPCGroup(opcServerGroupWrite);
                Group2 = server.OPCGroups.GetOPCGroup(opcStartStopGroup);
                Group3 = server.OPCGroups.GetOPCGroup(btnScadaGroup);

                Group0.OPCItems.AddItem(ConfigurationManager.AppSettings["LevelItemID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["LevelItemCH"]));
                Group0.OPCItems.AddItem(ConfigurationManager.AppSettings["ProtokItemID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["ProtokItemCH"]));
                Group0.OPCItems.AddItem(ConfigurationManager.AppSettings["PumpStatusItemID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["PumpStatusItemCH"]));
                Group0.OPCItems.AddItem(ConfigurationManager.AppSettings["WatchdogItemID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["WatchdogItemCH"]));

                Group1.OPCItems.AddItem(ConfigurationManager.AppSettings["StatusPumpeItemID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["StatusPumpeCH"]));
                Group1.OPCItems.AddItem(ConfigurationManager.AppSettings["WatchdogWriteItemID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["WatchdogWriteItemCH"]));

                Group2.OPCItems.AddItem(ConfigurationManager.AppSettings["opcStartStopID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["opcStartStopCH"]));

                Group3.OPCItems.AddItem(ConfigurationManager.AppSettings["btnScadaONID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["btnScadaONCH"]));
                Group3.OPCItems.AddItem(ConfigurationManager.AppSettings["btnScadaOFFID"],
                Convert.ToInt32(ConfigurationManager.AppSettings["btnScadaOFFCH"]));


                // Read initial state
                var startStopState = Convert.ToBoolean(Group2.OPCItems.Item(ConfigurationManager.AppSettings["opcStartStopID"]).Value);
                optimizacijaStart = startStopState;
                UpdateOptimizationStatusLabel(); // Update the label with the initial state



                Group0.IsSubscribed = true;
                Group0.IsActive = true;
                Group0.DataChange += Group0_DataChange;
                Group1.IsSubscribed = true;
                Group1.IsActive = true;
                Group1.DataChange += Group1_DataChange;
                Group2.IsSubscribed = true;
                Group2.IsActive = true;
                Group2.DataChange += Group2_DataChange;
                Group3.IsSubscribed = true;
                Group3.IsActive = true;
                Group3.DataChange += Group3_DataChange;

            }
            catch (Exception ex)
            {
                WriteToLog("Error initializing OPC Server: " + ex.Message);
            }

        }

        private void Group3_DataChange(int TransactionID, int NumItems, ref Array ClientHandles, ref Array ItemValues, ref Array Qualities, ref Array TimeStamps)
        {
            try
            {
                for (int i = 1; i < NumItems+1; i++)
                {
                    int clientHandle = (int)ClientHandles.GetValue(i);
                    object itemValue = ItemValues.GetValue(i);

                    switch (clientHandle)
                    {
                        case 1:
                                WriteToLog("Optimizacija upaljenja na SCADI");
                            break;

                        case 2:
                                WriteToLog("Optimizacija ugašena na SCADI");
                            break;
                    }
                }
            }
            catch (Exception ex)
            {
                WriteToLog("Error in Group3_DataChange: " + ex.Message);
            }
        }

        private void Group0_DataChange(int TransactionID, int NumItems, ref Array ClientHandles, ref Array ItemValues, ref Array Qualities, ref Array TimeStamps)
        {
            try
            {
                // Obrada promjena podataka u OPC grupi 0, ažuriranje internih ulaza iz OPC-a.
                for (int i = 1; i <= NumItems; i++)
                {
                    int clientHandle = Convert.ToInt32(ClientHandles.GetValue(i));
                    object itemValue = ItemValues.GetValue(i);
                    switch (clientHandle)
                    {
                        case 1:
                            inputsFromOPC.Level = Convert.ToDouble(itemValue);
                            break;
                        case 2:
                            inputsFromOPC.Protok = Convert.ToDouble(itemValue);
                            break;
                        case 3:
                            inputsFromOPC.PumpStatus = Convert.ToInt32(itemValue);
                           
                            break;
                        case 4:
                            inputsFromOPC.watchdogRead = Convert.ToInt32(itemValue);
                            break;
                    }
                }
            }
            catch (Exception ex)
            {
                WriteToLog("Error on Group0_DataChange: " + ex.Message);
            }

        }

        private void InitializeWatchdogTimer()
        {
            watchdogTimer = new Timer();
            watchdogTimer.Interval = 1000; // Tick every second
            watchdogTimer.Tick += WatchdogTimer_Tick;
            watchdogTimer.Start();
        }

        private void WatchdogTimer_Tick(object sender, EventArgs e)
        {
            try
            {            
                secondsCounter++;

                int currentWatchdogValue = Convert.ToInt32(Group0.OPCItems.Item(ConfigurationManager.AppSettings["WatchdogItemID"]).Value);
                EnsureServerConnection();
                if (shouldToggleToHigh && secondsCounter >= 10)
                {
                    secondsCounter = 0;
                    shouldToggleToHigh = false;
                    Group1.OPCItems.Item(ConfigurationManager.AppSettings["WatchdogWriteItemID"]).Write(true);
                }
                else if (!shouldToggleToHigh && secondsCounter >= 10)
                {
                    secondsCounter = 0;
                    shouldToggleToHigh = true;
                    Group1.OPCItems.Item(ConfigurationManager.AppSettings["WatchdogWriteItemID"]).Write(false);
                }
            }
            catch (Exception ex)
            {
                WriteToLog("Error on WatchdogTimer_Tick: " + ex.Message);
            }
        }

        private void UpdatePumpStatusLabel(double status)
        {
            // InvokeRequired since this method may be called from a different thread
            if (lblPumpStatus.InvokeRequired)
            {
                lblPumpStatus.Invoke(new Action(() =>
                {
                    lblPumpStatus.Text = $"Odluka o paljenju pumpe: {status}";
                }));
            }
            else
            {
                lblPumpStatus.Text = $"Odluka o paljenju pumpe: {status}";
            }
        }

        private void Group1_DataChange(int TransactionID, int NumItems, ref Array ClientHandles, ref Array ItemValues, ref Array Qualities, ref Array TimeStamps)
        {
            try
            {
                // Obrada promjena podataka u OPC grupi 1, ažuriranje statusa pumpe na OPC serveru.
                for (int i = 1; i <= NumItems; i++)
                {
                    int clientHandle = Convert.ToInt32(ClientHandles.GetValue(i));
                    object itemValue = ItemValues.GetValue(i);

                    if (clientHandle == 1)
                    {
                        bool statusPumpe = Convert.ToBoolean(itemValue);
                       // WriteToLog($"Status pumpe updated on OPC server to: {statusPumpe}");
                        //WriteToLog($"Status optimizacije: {inputs.nlpStatus}");
                    }
                }
            }
            catch (Exception ex)
            {
                WriteToLog("Error on Group1_DataChange: " + ex.Message);
            }


        }
        private void Group2_DataChange(int TransactionID, int NumItems, ref Array ClientHandles, ref Array ItemValues, ref Array Qualities, ref Array TimeStamps)
        {
            try
            {
                for (int i = 1; i <= NumItems; i++)
                {
                    int clientHandle = Convert.ToInt32(ClientHandles.GetValue(i));
                    object itemValue = ItemValues.GetValue(i);

                    if (clientHandle == Convert.ToInt32(ConfigurationManager.AppSettings["opcStartStopCH"]))
                    {
                        bool newOptimizationStart = Convert.ToBoolean(itemValue);
                        // Check for transition from false to true
                        if (newOptimizationStart && !optimizacijaStart)
                        {
                            brojanjeMinuta = 900; // Reset the countdown
                            WriteToLog("Optimization started and timer reset.");
                        }
                        // Check for transition from true to false
                        else if (!newOptimizationStart && optimizacijaStart)
                        {
                            WriteToLog("Optimization stopped.");
                        }
                        optimizacijaStart = newOptimizationStart;
                        UpdateOptimizationStatusLabel();
                    }
                }
            }
            catch (Exception ex)
            {
                WriteToLog("Error on Group2_DataChange: " + ex.Message);
            }
        }

        private void UpdateOPC(double statusPumpe )
        {
            try
            {
                EnsureServerConnection();
                // Ažuriranje stavki na OPC serveru prema vanjskim izlazima modela
                Group1.OPCItems.Item(ConfigurationManager.AppSettings["StatusPumpeItemID"]).Write(Convert.ToBoolean(statusPumpe));
                //WriteToLog("Poslana komanda za pumpu na OPC: " + statusPumpe.ToString());
            }
            catch (Exception ex)
            {
                WriteToLog("Error on UpdateOPC: " + ex.Message);
            }

        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            try
            {
                if (isTimerRunning)
                {
                    StopTimer();
                   // btnStart.Text = "Start";
                    optimizacijaStart = false; // Ensure the optimization stops
                    //Group2.OPCItems.Item(ConfigurationManager.AppSettings["opcStartStopID"]).Write(false);
                    UpdateOptimizationStatusLabel(); // Update the label to reflect the new state
                }
                else
                {
                    StartTimer();
                    //btnStart.Text = "Stop";
                    //optimizacijaStart = true; // Start the optimization
                    brojanjeMinuta = 900; // Reset the countdown when starting
                    UpdateOptimizationStatusLabel(); // Update the label to reflect the new state
                }
            }
            catch (Exception ex)
            {
                WriteToLog("Error on btnStart_Click: " + ex.Message);
               
            }
            // Toggle the running state of the timer and optimization
         
        }

        private void WriteToLog(string message)
        {
            // Zapisivanje poruka u log datoteku s vremenom događaja.
            string logFilePath = ConfigurationManager.AppSettings["logFilePath"];
            string timestamp = DateTime.Now.ToString("dd-MM-yyyy HH:mm:ss");

            try
            {
                string directoryPath = Path.GetDirectoryName(logFilePath);
                if (!Directory.Exists(directoryPath))
                {
                    Directory.CreateDirectory(directoryPath);
                }
                string logEntry = $"{timestamp}: {message}{Environment.NewLine}";
                File.AppendAllText(logFilePath, logEntry);
            }
            catch (Exception ex)
            {
                WriteToLog(ex.Message);
            }
        }

    }
}
