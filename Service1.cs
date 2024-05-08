using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration;
using System.Data;
using System.Diagnostics;
using System.Linq;
using System.Runtime.InteropServices;
using System.ServiceProcess;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using OPCAutomation;
using DLLNOVOWrapper;
using System.Timers;
using Newtonsoft.Json;
using System.IO;



namespace PSOptimization
{
    public partial class Service1 : ServiceBase
    {
        
        public static OPCServer server;
        ModelWrapp model = new ModelWrapp();
        extInputs inputsFromOPC = new extInputs();
        //private Timer modelTimer;
        OPCBrowser opcbrowser;
        OPCGroup Group0;
        public Service1()
        {

            InitializeComponent();
            //modelTimer = new Timer();
            //modelTimer.Elapsed += new ElapsedEventHandler(ModelTimer_Tick);
            //modelTimer.Interval = 1000; //1000ms = 1sekunda
        }
        protected override void OnStart(string[] args)
        {
            WriteToLog("testic");
            try
            {
                WriteToLog("testic");
                //string filePath = AppDomain.CurrentDomain.BaseDirectory + "modelParameters.json";
                //ModelParameters parameters;

                //// Check if the JSON file exists. If not, create it with default parameters.
                //if (!File.Exists(filePath))
                //{
                //    parameters = new ModelParameters(); // Already initialized with default values
                //    WriteModelParametersToJson(parameters, filePath);
                //}
                //else
                //{
                //    // If the file exists, read parameters from it.
                //    parameters = ReadModelParametersFromJson(filePath);
                //}



                InitializeOpcServer();
                //model.initialize();

                //var inputs = new AppConfig()
                //{
                //    Amplitude = config.Amplitude,

                //};
                //modelTimer.Start();

            }
            catch (Exception ex)
            {
                WriteToLog($"OnStart Exception: {ex.Message}");
                this.Stop();
            }
        }
        //public class ModelParameters
        //{
        //    public double Amplitude { get; set; } = 1;
        //    public double SetDown { get; set; } = 40;
        //    public double ResetDown { get; set; } = 65;
        //    public double IfDown { get; set; } = 25;
        //    public double ElseDown { get; set; } = 0;
        //    public double SetUp { get; set; } = 85;
        //    public double ResetUp { get; set; } = 60;
        //    public double IfUp { get; set; } = -25;
        //    public double ElseUp { get; set; } = 0;
        //    public List<double> TableData { get; set; } = new List<double> { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 90, 90, 90, 90, 90, 90, 90, 90 };
        //    public List<double> BreakPoints { get; set; } = new List<double> { 0, 900, 1800, 2700, 3600, 4500, 5400, 6300, 7200, 8100, 9000, 9900, 10800, 11700, 12600, 13500, 14400, 15300, 16200, 17100, 18000, 18900, 19800, 20700, 21600, 22500, 23400, 24300, 25200, 26100, 27000, 27900, 28800, 29700, 30600, 31500, 32400, 33300, 34200, 35100, 36000, 36900, 37800, 38700, 39600, 40500, 41400, 42300, 43200, 44100, 45000, 45900, 46800, 47700, 48600, 49500, 50400, 51300, 52200, 53100, 54000, 54900, 55800, 56700, 57600, 58500, 59400, 60300, 61200, 62100, 63000, 63900, 64800, 65700, 66600, 67500, 68400, 69300, 70200, 71100, 72000, 72900, 73800, 74700, 75600, 76500, 77400, 78300, 79200, 80100, 81000, 81900, 82800, 83700, 84600, 85500, 86400 };
        //    public List<double> Tf1 { get; set; } = new List<double> { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
        //    public List<double> Tf2 { get; set; } = new List<double> { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1 };
        //}


        //public static void WriteModelParametersToJson(ModelParameters parameters, string filePath)
        //{
        //    string json = JsonConvert.SerializeObject(parameters, Formatting.Indented);
        //    File.WriteAllText(filePath, json);
        //}
        //public static ModelParameters ReadModelParametersFromJson(string filePath)
        //{
        //    string json = File.ReadAllText(filePath);
        //    return JsonConvert.DeserializeObject<ModelParameters>(json);
        //}

        //Array arrayOPCItemIDs; // = new string[size];
        //Array arrayClientHandles; // = new int[size];
        //Array arrayServerHandles;
        //Array arrayErrors;

    

   
        private void InitializeOpcServer()
        {
            try
            {
                server = new OPCServer();
                server.Connect("Matrikon.OPC.Simulation.1", "localhost");
                server.OPCGroups.Add("Group0");
                Group0 = server.OPCGroups.GetOPCGroup("Group0");

                // Adding items*flexible approach
                string[] itemNames = { "Random.Int1", "Random.Int2" }; // Consider moving item names to configuration
                foreach (var itemName in itemNames)
                {
                    Group0.OPCItems.AddItem(itemName, Group0.OPCItems.Count + 1);
                }

                WriteToLog("OPC Items added successfully.");
                Group0.DataChange += Group0_DataChange;
                Group0.IsSubscribed = true;
                Group0.IsActive = true;
            }
            catch (Exception ex)
            {
                WriteToLog($"Error initializing OPC server: {ex.Message}");
            }
        }

        //private void ModelTimer_Tick(object sender, EventArgs e)
        //{
        //    // Example of model interaction logic
        //    inputsFromOPC.Level = 50; // Adjust these values as necessary
        //    inputsFromOPC.Protok = 4;
        //    inputsFromOPC.PumpStatus = 0; // This might be dynamic
        //    inputsFromOPC.Vrijeme = 21000;
        //    inputsFromOPC.watchdogRead = 1;

        //    model.setExternalInputs(inputsFromOPC);
        //    model.step();

        //    model.getExternalOutputs();
        //}
        private void Group0_DataChange(int TransactionID, int NumItems, ref Array ClientHandles, ref Array ItemValues, ref Array Qualities, ref Array TimeStamps)
        {

          
        }

        protected override void OnStop()
        {
            //modelTimer.Stop();
        }

        public void WriteToLog(string Message)
        {
            try
            {
                string logFilePath = ConfigurationManager.AppSettings["logFilePath"];
                string Timestamp = DateTime.Now.ToString("dd-MM-yyyy, HH:mm:ss");
                System.IO.File.AppendAllText(logFilePath, $"{Timestamp}: {Message}{Environment.NewLine}");
            }
            catch (Exception e)
            {
                // Use EventLog for critical errors that prevent using the file log
                EventLog.WriteEntry($"Error in WriteToLog: {e.Message}", EventLogEntryType.Error);
            }
        }
    }
}
