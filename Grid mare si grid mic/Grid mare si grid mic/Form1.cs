using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Grid_mare_si_grid_mic
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            int i = 0;
            System.Drawing.Graphics Desen;
            Desen = this.CreateGraphics();
            System.Drawing.Pen Creion_gri_d;
            Creion_gri_d = new System.Drawing.Pen(System.Drawing.Color.LightGray);
            System.Drawing.Pen Creion_gri;
            Creion_gri = new System.Drawing.Pen(System.Drawing.Color.Gray);
            Desen.Clear(this.BackColor);

            // linii verticale
            while (i <= this.Width)
            {
                if (i % 50 == 0)
                    Desen.DrawLine(Creion_gri, i, 0, i, this.Height);
                else
                    Desen.DrawLine(Creion_gri_d, i, 0, i, this.Height);
                i += 10;
            }
            // linii orizontale
            i = 0;
            while (i <= this.Height)
            {
                if (i % 50 == 0)
                    Desen.DrawLine(Creion_gri, 0, i, this.Width, i);
                else
                    Desen.DrawLine(Creion_gri_d, 0, i, this.Width, i);
                i += 10;
            }
        }
    }
}
