namespace PSOwinForm
{
    partial class ERGA
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(ERGA));
            this.lblCountdown = new System.Windows.Forms.Label();
            this.lblPumpStatus = new System.Windows.Forms.Label();
            this.lblOptimizationStatus = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // lblCountdown
            // 
            this.lblCountdown.AutoSize = true;
            this.lblCountdown.Location = new System.Drawing.Point(35, 29);
            this.lblCountdown.Name = "lblCountdown";
            this.lblCountdown.Size = new System.Drawing.Size(44, 16);
            this.lblCountdown.TabIndex = 2;
            this.lblCountdown.Text = "label1";
            // 
            // lblPumpStatus
            // 
            this.lblPumpStatus.AutoSize = true;
            this.lblPumpStatus.Location = new System.Drawing.Point(35, 79);
            this.lblPumpStatus.Name = "lblPumpStatus";
            this.lblPumpStatus.Size = new System.Drawing.Size(143, 16);
            this.lblPumpStatus.TabIndex = 3;
            this.lblPumpStatus.Text = "Pump Status: Unknown";
            // 
            // lblOptimizationStatus
            // 
            this.lblOptimizationStatus.AutoSize = true;
            this.lblOptimizationStatus.Location = new System.Drawing.Point(38, 135);
            this.lblOptimizationStatus.Name = "lblOptimizationStatus";
            this.lblOptimizationStatus.Size = new System.Drawing.Size(44, 16);
            this.lblOptimizationStatus.TabIndex = 4;
            this.lblOptimizationStatus.Text = "label1";
            // 
            // ERGA
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.ClientSize = new System.Drawing.Size(255, 271);
            this.Controls.Add(this.lblOptimizationStatus);
            this.Controls.Add(this.lblPumpStatus);
            this.Controls.Add(this.lblCountdown);
            this.Cursor = System.Windows.Forms.Cursors.Default;
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "ERGA";
            this.Text = "ERGA  Optimizacija";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label lblCountdown;
        private System.Windows.Forms.Label lblPumpStatus;
        private System.Windows.Forms.Label lblOptimizationStatus;
    }
}

