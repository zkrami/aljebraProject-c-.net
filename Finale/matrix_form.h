#pragma once

#include "grid.h"
#define square ( (int) numericUpDown2->Value == (int)numericUpDown1->Value)
#define BIG_WIDTH 90 ;
#define SMALL_WIDTH 60 ;
#define BIG_HEIGT 60;
#define SMALL_HEIGT 40
;
namespace Finale {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;
	using namespace  MetroFramework::Controls;
	using namespace  MetroFramework::Animation;
	using namespace  MetroFramework::Components;
	using namespace  MetroFramework::Drawing;
	using namespace  MetroFramework::Fonts;
	using namespace  MetroFramework::Interfaces;
	using namespace  MetroFramework::Native;
	using namespace MetroFramework;
	
	

	/// <summary>
	/// Summary for matrix_form
	/// </summary>
	public ref class matrix_form : public MetroForm
	{
	public:
		matrix_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~matrix_form()
		{
			if (components)
			{
				delete components;
			}
		}


	public : Boolean ok_transpose;

	private : Boolean hover ;


private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage2;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage14;
private: MetroFramework::Controls::MetroButton^  metroButton1;
private: MetroFramework::Controls::MetroGrid^  metroGrid3;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage5;
private: MetroFramework::Controls::MetroTabControl^  metroTabControl2;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage6;
private: MetroFramework::Controls::MetroButton^  metroButton6;
private: MetroFramework::Controls::MetroButton^  metroButton5;
private: MetroFramework::Controls::MetroGrid^  metroGrid9;
private: MetroFramework::Controls::MetroGrid^  metroGrid8;
private: MetroFramework::Controls::MetroGrid^  metroGrid7;
private: MetroFramework::Controls::MetroGrid^  metroGrid6;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage7;
private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
private: MetroFramework::Controls::MetroButton^  metroButton8;
private: MetroFramework::Controls::MetroButton^  metroButton7;
private: MetroFramework::Controls::MetroGrid^  metroGrid14;
private: MetroFramework::Controls::MetroGrid^  metroGrid13;
private: MetroFramework::Controls::MetroGrid^  metroGrid11;
private: MetroFramework::Controls::MetroGrid^  metroGrid10;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage8;
private: MetroFramework::Controls::MetroButton^  metroButton12;
private: MetroFramework::Controls::MetroButton^  metroButton9;
private: MetroFramework::Controls::MetroLabel^  metroLabel5;
private: MetroFramework::Controls::MetroTextBox^  metroTextBox5;
private: MetroFramework::Controls::MetroGrid^  metroGrid16;
private: MetroFramework::Controls::MetroGrid^  metroGrid15;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage9;
private: MetroFramework::Controls::MetroButton^  metroButton13;
private: MetroFramework::Controls::MetroLabel^  metroLabel10;
private: MetroFramework::Controls::MetroButton^  metroButton10;
private: MetroFramework::Controls::MetroLabel^  metroLabel6;
private: MetroFramework::Controls::MetroTextBox^  metroTextBox6;
private: MetroFramework::Controls::MetroGrid^  metroGrid18;
private: MetroFramework::Controls::MetroGrid^  metroGrid17;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage4;

private: MetroFramework::Controls::MetroTabControl^  metroTabControl3;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage10;
private: MetroFramework::Controls::MetroGrid^  metroGrid5;
private: MetroFramework::Controls::MetroButton^  metroButton4;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage11;
private: MetroFramework::Controls::MetroButton^  metroButton11;
private: MetroFramework::Controls::MetroGrid^  metroGrid19;
private: MetroFramework::Controls::MetroGrid^  metroGrid12;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage12;
private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
private: MetroFramework::Controls::MetroGrid^  metroGrid21;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage13;
private: MetroFramework::Controls::MetroGrid^  metroGrid26;
private: MetroFramework::Controls::MetroGrid^  metroGrid25;
private: MetroFramework::Controls::MetroGrid^  metroGrid24;
private: MetroFramework::Controls::MetroGrid^  metroGrid23;
private: MetroFramework::Controls::MetroGrid^  metroGrid22;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage3;
private: MetroFramework::Controls::MetroLabel^  metroLabel8;
private: MetroFramework::Controls::MetroLabel^  metroLabel7;
private: MetroFramework::Controls::MetroButton^  metroButton2;
private: MetroFramework::Controls::MetroGrid^  metroGrid4;
private: MetroFramework::Controls::MetroTabPage^  Transpose;
private: MetroFramework::Controls::MetroButton^  metroButton3;
private: MetroFramework::Controls::MetroGrid^  metroGrid2;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage1;
private: MetroFramework::Controls::MetroTextBox^  metroTextBox4;
private: MetroFramework::Controls::MetroLabel^  metroLabel4;
private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
private: MetroFramework::Controls::MetroLabel^  metroLabel3;
private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
private: MetroFramework::Controls::MetroLabel^  metroLabel2;
private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
private: MetroFramework::Controls::MetroLabel^  metroLabel1;
public: MetroFramework::Controls::MetroGrid^  metroGrid1;
private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
private: MetroFramework::Controls::MetroTabControl^  metroTabControl1;
private: MetroFramework::Controls::MetroLabel^  metroLabel12;
private: MetroFramework::Controls::MetroLabel^  metroLabel11;
private: MetroFramework::Controls::MetroLabel^  metroLabel13;
private: MetroFramework::Controls::MetroLabel^  metroLabel20;
private: MetroFramework::Controls::MetroLabel^  metroLabel19;
private: MetroFramework::Controls::MetroLabel^  metroLabel18;
private: MetroFramework::Controls::MetroLabel^  metroLabel17;
private: MetroFramework::Controls::MetroLabel^  metroLabel16;
private: MetroFramework::Controls::MetroLabel^  metroLabel15;
private: MetroFramework::Controls::MetroLabel^  metroLabel14;
private: MetroFramework::Controls::MetroLabel^  metroLabel22;
private: MetroFramework::Controls::MetroLabel^  metroLabel21;
private: MetroFramework::Controls::MetroLabel^  metroLabel23;
private: MetroFramework::Controls::MetroLabel^  metroLabel24;
private: MetroFramework::Controls::MetroLabel^  metroLabel25;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage15;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage16;

private: MetroFramework::Controls::MetroLabel^  metroLabel27;
private: MetroFramework::Controls::MetroLabel^  metroLabel9;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: MetroFramework::Controls::MetroButton^  metroButton14;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage17;
private: MetroFramework::Controls::MetroButton^  metroButton15;
private: MetroFramework::Controls::MetroGrid^  metroGrid20;
private: MetroFramework::Controls::MetroTextBox^  metroTextBox7;
private: MetroFramework::Controls::MetroLabel^  metroLabel26;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage18;
private: MetroFramework::Controls::MetroGrid^  metroGrid29;
private: MetroFramework::Controls::MetroGrid^  metroGrid28;
private: MetroFramework::Controls::MetroGrid^  metroGrid27;
private: MetroFramework::Controls::MetroLabel^  metroLabel30;
private: MetroFramework::Controls::MetroLabel^  metroLabel29;
private: MetroFramework::Controls::MetroLabel^  metroLabel28;
private: MetroFramework::Controls::MetroLabel^  metroLabel31;
private: MetroFramework::Controls::MetroLabel^  metroLabel32;


private: System::ComponentModel::IContainer^  components;


	public: 


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(matrix_form::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle112 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle113 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle114 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle115 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle116 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle117 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle118 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle119 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle120 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle121 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle122 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle123 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle124 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle125 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle126 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle127 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle128 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle129 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle130 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle131 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle132 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle133 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle134 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle135 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle136 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle137 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle138 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle139 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle140 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle141 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle142 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle143 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle144 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle145 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle146 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle147 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle148 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle149 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle150 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle151 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle152 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle153 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle154 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle155 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle156 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle157 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle158 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle159 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle160 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle161 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle162 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle163 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle164 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle165 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle166 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle167 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle168 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle169 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle170 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle171 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle172 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle173 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle174 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle175 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle176 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle177 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle178 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle179 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle180 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle181 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle182 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle183 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle184 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle185 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle186 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle187 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle188 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle189 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle190 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle191 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle192 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle193 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle194 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle195 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle196 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle197 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle198 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle199 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle200 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle201 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle202 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle203 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle204 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle205 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle206 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle207 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle208 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle209 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle210 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle211 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle212 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle213 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle214 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle215 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle216 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle217 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle218 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle219 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle220 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle221 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle222 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->metroTabPage2 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->metroTabPage14 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid3 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage5 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroTabControl2 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage15 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->metroTabPage6 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel25 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel24 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton6 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid9 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid8 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid7 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid6 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage7 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel23 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel22 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel21 = (gcnew MetroFramework::Controls::MetroLabel());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroButton8 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton7 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid14 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid13 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid11 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid10 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage8 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton12 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton9 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox5 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroGrid16 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid15 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage9 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton13 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton10 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox6 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroGrid18 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid17 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage4 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel9 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTabControl3 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage16 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->metroTabPage10 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroGrid5 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTabPage11 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton11 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid19 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid12 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage12 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel13 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroGrid21 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage13 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton14 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLabel27 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel20 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel19 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel18 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel17 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel16 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel15 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel14 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroGrid26 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid25 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid24 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid23 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid22 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage3 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid4 = (gcnew MetroFramework::Controls::MetroGrid());
			this->Transpose = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid2 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage1 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel31 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox7 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel26 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel12 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel11 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox4 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroGrid1 = (gcnew MetroFramework::Controls::MetroGrid());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroTabControl1 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage17 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton15 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid20 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage18 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel30 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel29 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel28 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroGrid29 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid28 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid27 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroLabel32 = (gcnew MetroFramework::Controls::MetroLabel());
			this->menuStrip1->SuspendLayout();
			this->metroTabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->metroTabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid3))->BeginInit();
			this->metroTabPage5->SuspendLayout();
			this->metroTabControl2->SuspendLayout();
			this->metroTabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->metroTabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid6))->BeginInit();
			this->metroTabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid10))->BeginInit();
			this->metroTabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid15))->BeginInit();
			this->metroTabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid17))->BeginInit();
			this->metroTabPage4->SuspendLayout();
			this->metroTabControl3->SuspendLayout();
			this->metroTabPage16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->metroTabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid5))->BeginInit();
			this->metroTabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid12))->BeginInit();
			this->metroTabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid21))->BeginInit();
			this->metroTabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid22))->BeginInit();
			this->metroTabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid4))->BeginInit();
			this->Transpose->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid2))->BeginInit();
			this->metroTabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->metroTabControl1->SuspendLayout();
			this->metroTabPage17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid20))->BeginInit();
			this->metroTabPage18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid27))->BeginInit();
			this->SuspendLayout();
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L" Matrix |*.matrix";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Matrix | *.matrix";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->saveToolStripMenuItem, 
				this->loadToolStripMenuItem});
			this->fileToolStripMenuItem->ForeColor = System::Drawing::Color::LightGray;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->fileToolStripMenuItem->Text = L"&FILE";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->BackColor = System::Drawing::SystemColors::Control;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &matrix_form::saveToolStripMenuItem_Click);
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->loadToolStripMenuItem->Text = L"Open";
			this->loadToolStripMenuItem->Click += gcnew System::EventHandler(this, &matrix_form::loadToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(2, 12);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(48, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// metroTabPage2
			// 
			this->metroTabPage2->Controls->Add(this->pictureBox1);
			this->metroTabPage2->HorizontalScrollbarBarColor = true;
			this->metroTabPage2->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->HorizontalScrollbarSize = 248;
			this->metroTabPage2->Location = System::Drawing::Point(4, 47);
			this->metroTabPage2->Name = L"metroTabPage2";
			this->metroTabPage2->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage2->TabIndex = 8;
			this->metroTabPage2->Text = L"Start";
			this->metroTabPage2->VerticalScrollbarBarColor = true;
			this->metroTabPage2->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->VerticalScrollbarSize = 10;
			this->metroTabPage2->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage2_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1242, 603);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &matrix_form::pictureBox1_Click);
			// 
			// metroTabPage14
			// 
			this->metroTabPage14->Controls->Add(this->metroButton1);
			this->metroTabPage14->Controls->Add(this->metroGrid3);
			this->metroTabPage14->HorizontalScrollbarBarColor = true;
			this->metroTabPage14->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage14->HorizontalScrollbarSize = 1233;
			this->metroTabPage14->Location = System::Drawing::Point(4, 47);
			this->metroTabPage14->Name = L"metroTabPage14";
			this->metroTabPage14->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage14->TabIndex = 6;
			this->metroTabPage14->Text = L"Reduced";
			this->metroTabPage14->VerticalScrollbarBarColor = true;
			this->metroTabPage14->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage14->VerticalScrollbarSize = 10;
			this->metroTabPage14->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage14_Enter);
			// 
			// metroButton1
			// 
			this->metroButton1->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton1->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton1->Location = System::Drawing::Point(3, 15);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(118, 35);
			this->metroButton1->TabIndex = 12;
			this->metroButton1->Text = L"Save";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &matrix_form::metroButton1_Click_2);
			// 
			// metroGrid3
			// 
			this->metroGrid3->AllowUserToAddRows = false;
			this->metroGrid3->AllowUserToDeleteRows = false;
			this->metroGrid3->AllowUserToResizeRows = false;
			this->metroGrid3->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle112->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle112->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle112->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle112->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle112->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle112->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle112->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle112;
			this->metroGrid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid3->ColumnHeadersVisible = false;
			dataGridViewCellStyle113->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle113->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle113->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle113->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle113->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle113->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle113->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid3->DefaultCellStyle = dataGridViewCellStyle113;
			this->metroGrid3->EnableHeadersVisualStyles = false;
			this->metroGrid3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid3->Location = System::Drawing::Point(3, 66);
			this->metroGrid3->Name = L"metroGrid3";
			this->metroGrid3->ReadOnly = true;
			this->metroGrid3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle114->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle114->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle114->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle114->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle114->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle114->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle114->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid3->RowHeadersDefaultCellStyle = dataGridViewCellStyle114;
			this->metroGrid3->RowHeadersVisible = false;
			this->metroGrid3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid3->RowTemplate->Height = 40;
			this->metroGrid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid3->Size = System::Drawing::Size(1107, 537);
			this->metroGrid3->TabIndex = 11;
			this->metroGrid3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid3_CellContentClick_1);
			// 
			// metroTabPage5
			// 
			this->metroTabPage5->Controls->Add(this->metroTabControl2);
			this->metroTabPage5->HorizontalScrollbarBarColor = true;
			this->metroTabPage5->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage5->HorizontalScrollbarSize = 70996;
			this->metroTabPage5->Location = System::Drawing::Point(4, 47);
			this->metroTabPage5->Name = L"metroTabPage5";
			this->metroTabPage5->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage5->TabIndex = 5;
			this->metroTabPage5->Text = L"Operations";
			this->metroTabPage5->VerticalScrollbarBarColor = true;
			this->metroTabPage5->VerticalScrollbarHighlightOnWheel = true;
			this->metroTabPage5->VerticalScrollbarSize = 10;
			this->metroTabPage5->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage5_Click);
			this->metroTabPage5->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage5_Enter);
			// 
			// metroTabControl2
			// 
			this->metroTabControl2->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->metroTabControl2->Controls->Add(this->metroTabPage15);
			this->metroTabControl2->Controls->Add(this->metroTabPage6);
			this->metroTabControl2->Controls->Add(this->metroTabPage7);
			this->metroTabControl2->Controls->Add(this->metroTabPage8);
			this->metroTabControl2->Controls->Add(this->metroTabPage9);
			this->metroTabControl2->Location = System::Drawing::Point(1, 1);
			this->metroTabControl2->Name = L"metroTabControl2";
			this->metroTabControl2->SelectedIndex = 2;
			this->metroTabControl2->Size = System::Drawing::Size(1249, 603);
			this->metroTabControl2->Style = MetroFramework::MetroColorStyle::Yellow;
			this->metroTabControl2->TabIndex = 2;
			this->metroTabControl2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTabControl2->UseSelectable = true;
			this->metroTabControl2->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabControl2_Enter);
			// 
			// metroTabPage15
			// 
			this->metroTabPage15->Controls->Add(this->pictureBox3);
			this->metroTabPage15->HorizontalScrollbarBarColor = true;
			this->metroTabPage15->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage15->HorizontalScrollbarSize = 228;
			this->metroTabPage15->Location = System::Drawing::Point(4, 41);
			this->metroTabPage15->Name = L"metroTabPage15";
			this->metroTabPage15->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage15->TabIndex = 4;
			this->metroTabPage15->Text = L"About";
			this->metroTabPage15->VerticalScrollbarBarColor = true;
			this->metroTabPage15->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage15->VerticalScrollbarSize = 10;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1, 1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1241, 558);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// metroTabPage6
			// 
			this->metroTabPage6->Controls->Add(this->metroLabel25);
			this->metroTabPage6->Controls->Add(this->metroLabel24);
			this->metroTabPage6->Controls->Add(this->metroButton6);
			this->metroTabPage6->Controls->Add(this->metroButton5);
			this->metroTabPage6->Controls->Add(this->metroGrid9);
			this->metroTabPage6->Controls->Add(this->metroGrid8);
			this->metroTabPage6->Controls->Add(this->metroGrid7);
			this->metroTabPage6->Controls->Add(this->metroGrid6);
			this->metroTabPage6->HorizontalScrollbarBarColor = true;
			this->metroTabPage6->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage6->HorizontalScrollbarSize = 484756;
			this->metroTabPage6->Location = System::Drawing::Point(4, 41);
			this->metroTabPage6->Name = L"metroTabPage6";
			this->metroTabPage6->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage6->TabIndex = 0;
			this->metroTabPage6->Text = L"Summation (+)";
			this->metroTabPage6->VerticalScrollbarBarColor = true;
			this->metroTabPage6->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage6->VerticalScrollbarSize = 10;
			this->metroTabPage6->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage6_Click);
			this->metroTabPage6->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage6_Enter);
			// 
			// metroLabel25
			// 
			this->metroLabel25->AutoSize = true;
			this->metroLabel25->Location = System::Drawing::Point(113, 368);
			this->metroLabel25->Name = L"metroLabel25";
			this->metroLabel25->Size = System::Drawing::Size(18, 19);
			this->metroLabel25->TabIndex = 16;
			this->metroLabel25->Text = L"=";
			this->metroLabel25->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel25_Click);
			// 
			// metroLabel24
			// 
			this->metroLabel24->AutoSize = true;
			this->metroLabel24->Location = System::Drawing::Point(113, 184);
			this->metroLabel24->Name = L"metroLabel24";
			this->metroLabel24->Size = System::Drawing::Size(18, 19);
			this->metroLabel24->TabIndex = 15;
			this->metroLabel24->Text = L"+";
			this->metroLabel24->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel24_Click);
			// 
			// metroButton6
			// 
			this->metroButton6->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton6->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton6->Location = System::Drawing::Point(982, 523);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(118, 35);
			this->metroButton6->TabIndex = 14;
			this->metroButton6->Text = L"Reset";
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &matrix_form::metroButton6_Click);
			// 
			// metroButton5
			// 
			this->metroButton5->Enabled = false;
			this->metroButton5->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton5->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton5->Location = System::Drawing::Point(1120, 523);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(118, 35);
			this->metroButton5->TabIndex = 13;
			this->metroButton5->Text = L"Save";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &matrix_form::metroButton5_Click);
			// 
			// metroGrid9
			// 
			this->metroGrid9->AllowUserToAddRows = false;
			this->metroGrid9->AllowUserToDeleteRows = false;
			this->metroGrid9->AllowUserToResizeRows = false;
			this->metroGrid9->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid9->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid9->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle115->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle115->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle115->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle115->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle115->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle115->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid9->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle115;
			this->metroGrid9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid9->ColumnHeadersVisible = false;
			this->metroGrid9->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle116->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle116->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle116->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle116->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle116->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle116->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle116->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid9->DefaultCellStyle = dataGridViewCellStyle116;
			this->metroGrid9->EnableHeadersVisualStyles = false;
			this->metroGrid9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid9->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid9->Location = System::Drawing::Point(285, 49);
			this->metroGrid9->Name = L"metroGrid9";
			this->metroGrid9->ReadOnly = true;
			this->metroGrid9->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle117->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle117->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle117->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle117->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle117->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle117->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle117->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid9->RowHeadersDefaultCellStyle = dataGridViewCellStyle117;
			this->metroGrid9->RowHeadersVisible = false;
			this->metroGrid9->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle118->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle118->NullValue = nullptr;
			this->metroGrid9->RowsDefaultCellStyle = dataGridViewCellStyle118;
			this->metroGrid9->RowTemplate->Height = 40;
			this->metroGrid9->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid9->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid9->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid9->Size = System::Drawing::Size(953, 470);
			this->metroGrid9->TabIndex = 12;
			this->metroGrid9->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid9_CellContentClick);
			this->metroGrid9->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid9_CellEndEdit);
			// 
			// metroGrid8
			// 
			this->metroGrid8->AllowUserToAddRows = false;
			this->metroGrid8->AllowUserToDeleteRows = false;
			this->metroGrid8->AllowUserToResizeRows = false;
			this->metroGrid8->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid8->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid8->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle119->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle119->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle119->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle119->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle119->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle119->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid8->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle119;
			this->metroGrid8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid8->ColumnHeadersVisible = false;
			this->metroGrid8->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle120->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle120->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle120->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle120->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle120->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle120->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle120->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid8->DefaultCellStyle = dataGridViewCellStyle120;
			this->metroGrid8->EnableHeadersVisualStyles = false;
			this->metroGrid8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid8->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid8->Location = System::Drawing::Point(4, 387);
			this->metroGrid8->Name = L"metroGrid8";
			this->metroGrid8->ReadOnly = true;
			this->metroGrid8->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle121->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle121->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle121->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle121->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle121->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle121->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle121->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid8->RowHeadersDefaultCellStyle = dataGridViewCellStyle121;
			this->metroGrid8->RowHeadersVisible = false;
			this->metroGrid8->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle122->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle122->NullValue = nullptr;
			this->metroGrid8->RowsDefaultCellStyle = dataGridViewCellStyle122;
			this->metroGrid8->RowTemplate->Height = 20;
			this->metroGrid8->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid8->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroGrid8->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid8->Size = System::Drawing::Size(237, 161);
			this->metroGrid8->TabIndex = 11;
			this->metroGrid8->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid8_CellContentClick);
			this->metroGrid8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid8_MouseClick);
			// 
			// metroGrid7
			// 
			this->metroGrid7->AllowUserToAddRows = false;
			this->metroGrid7->AllowUserToDeleteRows = false;
			this->metroGrid7->AllowUserToResizeRows = false;
			this->metroGrid7->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid7->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid7->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle123->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle123->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle123->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle123->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle123->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle123->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid7->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle123;
			this->metroGrid7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid7->ColumnHeadersVisible = false;
			this->metroGrid7->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle124->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle124->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle124->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle124->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle124->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle124->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle124->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid7->DefaultCellStyle = dataGridViewCellStyle124;
			this->metroGrid7->EnableHeadersVisualStyles = false;
			this->metroGrid7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid7->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid7->Location = System::Drawing::Point(4, 206);
			this->metroGrid7->Name = L"metroGrid7";
			this->metroGrid7->ReadOnly = true;
			this->metroGrid7->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle125->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle125->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle125->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle125->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle125->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle125->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle125->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid7->RowHeadersDefaultCellStyle = dataGridViewCellStyle125;
			this->metroGrid7->RowHeadersVisible = false;
			this->metroGrid7->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle126->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle126->NullValue = nullptr;
			this->metroGrid7->RowsDefaultCellStyle = dataGridViewCellStyle126;
			this->metroGrid7->RowTemplate->Height = 20;
			this->metroGrid7->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid7->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroGrid7->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid7->Size = System::Drawing::Size(237, 161);
			this->metroGrid7->TabIndex = 10;
			this->metroGrid7->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid7_CellContentClick);
			this->metroGrid7->Click += gcnew System::EventHandler(this, &matrix_form::metroGrid7_Click);
			this->metroGrid7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid7_MouseClick);
			this->metroGrid7->MouseHover += gcnew System::EventHandler(this, &matrix_form::metroGrid7_MouseHover);
			// 
			// metroGrid6
			// 
			this->metroGrid6->AllowUserToAddRows = false;
			this->metroGrid6->AllowUserToDeleteRows = false;
			this->metroGrid6->AllowUserToResizeRows = false;
			this->metroGrid6->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid6->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid6->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle127->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle127->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle127->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle127->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle127->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle127->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle127;
			this->metroGrid6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid6->ColumnHeadersVisible = false;
			this->metroGrid6->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle128->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle128->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle128->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle128->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle128->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle128->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle128->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid6->DefaultCellStyle = dataGridViewCellStyle128;
			this->metroGrid6->EnableHeadersVisualStyles = false;
			this->metroGrid6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid6->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid6->Location = System::Drawing::Point(4, 23);
			this->metroGrid6->Name = L"metroGrid6";
			this->metroGrid6->ReadOnly = true;
			this->metroGrid6->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle129->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle129->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle129->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle129->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle129->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle129->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle129->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid6->RowHeadersDefaultCellStyle = dataGridViewCellStyle129;
			this->metroGrid6->RowHeadersVisible = false;
			this->metroGrid6->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle130->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle130->NullValue = nullptr;
			this->metroGrid6->RowsDefaultCellStyle = dataGridViewCellStyle130;
			this->metroGrid6->RowTemplate->Height = 20;
			this->metroGrid6->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid6->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroGrid6->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid6->Size = System::Drawing::Size(237, 161);
			this->metroGrid6->TabIndex = 9;
			this->metroGrid6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid6_CellContentClick);
			this->metroGrid6->Click += gcnew System::EventHandler(this, &matrix_form::metroGrid6_Click);
			this->metroGrid6->Enter += gcnew System::EventHandler(this, &matrix_form::metroGrid6_Enter);
			this->metroGrid6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid6_MouseClick);
			this->metroGrid6->MouseHover += gcnew System::EventHandler(this, &matrix_form::metroGrid6_MouseHover);
			// 
			// metroTabPage7
			// 
			this->metroTabPage7->Controls->Add(this->metroLabel23);
			this->metroTabPage7->Controls->Add(this->metroLabel22);
			this->metroTabPage7->Controls->Add(this->metroLabel21);
			this->metroTabPage7->Controls->Add(this->numericUpDown3);
			this->metroTabPage7->Controls->Add(this->metroButton8);
			this->metroTabPage7->Controls->Add(this->metroButton7);
			this->metroTabPage7->Controls->Add(this->metroGrid14);
			this->metroTabPage7->Controls->Add(this->metroGrid13);
			this->metroTabPage7->Controls->Add(this->metroGrid11);
			this->metroTabPage7->Controls->Add(this->metroGrid10);
			this->metroTabPage7->HorizontalScrollbarBarColor = true;
			this->metroTabPage7->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage7->HorizontalScrollbarSize = 70996;
			this->metroTabPage7->Location = System::Drawing::Point(4, 41);
			this->metroTabPage7->Name = L"metroTabPage7";
			this->metroTabPage7->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage7->TabIndex = 1;
			this->metroTabPage7->Text = L"Multiply (×)";
			this->metroTabPage7->VerticalScrollbarBarColor = true;
			this->metroTabPage7->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage7->VerticalScrollbarSize = 10;
			this->metroTabPage7->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage7_Click);
			this->metroTabPage7->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage7_Enter);
			// 
			// metroLabel23
			// 
			this->metroLabel23->AutoSize = true;
			this->metroLabel23->Location = System::Drawing::Point(285, 3);
			this->metroLabel23->Name = L"metroLabel23";
			this->metroLabel23->Size = System::Drawing::Size(60, 19);
			this->metroLabel23->TabIndex = 20;
			this->metroLabel23->Text = L"Columns";
			this->metroLabel23->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel23_Click);
			// 
			// metroLabel22
			// 
			this->metroLabel22->AutoSize = true;
			this->metroLabel22->Location = System::Drawing::Point(113, 368);
			this->metroLabel22->Name = L"metroLabel22";
			this->metroLabel22->Size = System::Drawing::Size(18, 19);
			this->metroLabel22->TabIndex = 19;
			this->metroLabel22->Text = L"=";
			// 
			// metroLabel21
			// 
			this->metroLabel21->AutoSize = true;
			this->metroLabel21->Location = System::Drawing::Point(113, 184);
			this->metroLabel21->Name = L"metroLabel21";
			this->metroLabel21->Size = System::Drawing::Size(18, 19);
			this->metroLabel21->TabIndex = 18;
			this->metroLabel21->Text = L"×";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(285, 23);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(72, 20);
			this->numericUpDown3->TabIndex = 17;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &matrix_form::numericUpDown3_ValueChanged);
			// 
			// metroButton8
			// 
			this->metroButton8->Enabled = false;
			this->metroButton8->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton8->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton8->Location = System::Drawing::Point(1120, 523);
			this->metroButton8->Name = L"metroButton8";
			this->metroButton8->Size = System::Drawing::Size(118, 35);
			this->metroButton8->TabIndex = 16;
			this->metroButton8->Text = L"Save";
			this->metroButton8->UseSelectable = true;
			this->metroButton8->Click += gcnew System::EventHandler(this, &matrix_form::metroButton8_Click);
			// 
			// metroButton7
			// 
			this->metroButton7->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton7->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton7->Location = System::Drawing::Point(982, 523);
			this->metroButton7->Name = L"metroButton7";
			this->metroButton7->Size = System::Drawing::Size(118, 35);
			this->metroButton7->TabIndex = 15;
			this->metroButton7->Text = L"Reset";
			this->metroButton7->UseSelectable = true;
			this->metroButton7->Click += gcnew System::EventHandler(this, &matrix_form::metroButton7_Click);
			// 
			// metroGrid14
			// 
			this->metroGrid14->AllowUserToAddRows = false;
			this->metroGrid14->AllowUserToDeleteRows = false;
			this->metroGrid14->AllowUserToResizeRows = false;
			this->metroGrid14->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid14->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid14->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle131->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle131->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle131->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle131->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle131->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle131->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid14->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle131;
			this->metroGrid14->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid14->ColumnHeadersVisible = false;
			this->metroGrid14->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle132->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle132->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle132->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle132->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle132->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle132->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle132->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid14->DefaultCellStyle = dataGridViewCellStyle132;
			this->metroGrid14->EnableHeadersVisualStyles = false;
			this->metroGrid14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid14->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid14->Location = System::Drawing::Point(285, 49);
			this->metroGrid14->Name = L"metroGrid14";
			this->metroGrid14->ReadOnly = true;
			this->metroGrid14->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle133->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle133->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle133->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle133->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle133->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle133->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle133->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid14->RowHeadersDefaultCellStyle = dataGridViewCellStyle133;
			this->metroGrid14->RowHeadersVisible = false;
			this->metroGrid14->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle134->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle134->NullValue = nullptr;
			this->metroGrid14->RowsDefaultCellStyle = dataGridViewCellStyle134;
			this->metroGrid14->RowTemplate->Height = 40;
			this->metroGrid14->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid14->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid14->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid14->Size = System::Drawing::Size(953, 470);
			this->metroGrid14->TabIndex = 13;
			this->metroGrid14->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid14_CellContentClick);
			this->metroGrid14->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid14_CellEndEdit);
			// 
			// metroGrid13
			// 
			this->metroGrid13->AllowUserToAddRows = false;
			this->metroGrid13->AllowUserToDeleteRows = false;
			this->metroGrid13->AllowUserToResizeRows = false;
			this->metroGrid13->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid13->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid13->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle135->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle135->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle135->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle135->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle135->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle135->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid13->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle135;
			this->metroGrid13->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid13->ColumnHeadersVisible = false;
			this->metroGrid13->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle136->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle136->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle136->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle136->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle136->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle136->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle136->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid13->DefaultCellStyle = dataGridViewCellStyle136;
			this->metroGrid13->EnableHeadersVisualStyles = false;
			this->metroGrid13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid13->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid13->Location = System::Drawing::Point(4, 387);
			this->metroGrid13->Name = L"metroGrid13";
			this->metroGrid13->ReadOnly = true;
			this->metroGrid13->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle137->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle137->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle137->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle137->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle137->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle137->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle137->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid13->RowHeadersDefaultCellStyle = dataGridViewCellStyle137;
			this->metroGrid13->RowHeadersVisible = false;
			this->metroGrid13->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle138->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle138->NullValue = nullptr;
			this->metroGrid13->RowsDefaultCellStyle = dataGridViewCellStyle138;
			this->metroGrid13->RowTemplate->Height = 20;
			this->metroGrid13->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid13->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroGrid13->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid13->Size = System::Drawing::Size(237, 161);
			this->metroGrid13->TabIndex = 12;
			this->metroGrid13->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid13_CellContentClick);
			this->metroGrid13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid13_MouseClick);
			// 
			// metroGrid11
			// 
			this->metroGrid11->AllowUserToAddRows = false;
			this->metroGrid11->AllowUserToDeleteRows = false;
			this->metroGrid11->AllowUserToResizeRows = false;
			this->metroGrid11->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid11->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid11->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle139->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle139->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle139->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle139->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle139->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle139->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid11->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle139;
			this->metroGrid11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid11->ColumnHeadersVisible = false;
			this->metroGrid11->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle140->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle140->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle140->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle140->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle140->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle140->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle140->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid11->DefaultCellStyle = dataGridViewCellStyle140;
			this->metroGrid11->EnableHeadersVisualStyles = false;
			this->metroGrid11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid11->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid11->Location = System::Drawing::Point(4, 206);
			this->metroGrid11->Name = L"metroGrid11";
			this->metroGrid11->ReadOnly = true;
			this->metroGrid11->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle141->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle141->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle141->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle141->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle141->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle141->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle141->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid11->RowHeadersDefaultCellStyle = dataGridViewCellStyle141;
			this->metroGrid11->RowHeadersVisible = false;
			this->metroGrid11->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle142->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle142->NullValue = nullptr;
			this->metroGrid11->RowsDefaultCellStyle = dataGridViewCellStyle142;
			this->metroGrid11->RowTemplate->Height = 20;
			this->metroGrid11->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid11->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroGrid11->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid11->Size = System::Drawing::Size(237, 161);
			this->metroGrid11->TabIndex = 11;
			this->metroGrid11->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid11_CellContentClick);
			this->metroGrid11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid11_MouseClick);
			// 
			// metroGrid10
			// 
			this->metroGrid10->AllowUserToAddRows = false;
			this->metroGrid10->AllowUserToDeleteRows = false;
			this->metroGrid10->AllowUserToResizeRows = false;
			this->metroGrid10->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid10->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid10->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle143->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle143->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle143->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle143->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle143->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle143->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid10->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle143;
			this->metroGrid10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid10->ColumnHeadersVisible = false;
			this->metroGrid10->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle144->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle144->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle144->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle144->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle144->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle144->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle144->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid10->DefaultCellStyle = dataGridViewCellStyle144;
			this->metroGrid10->EnableHeadersVisualStyles = false;
			this->metroGrid10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid10->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid10->Location = System::Drawing::Point(4, 23);
			this->metroGrid10->Name = L"metroGrid10";
			this->metroGrid10->ReadOnly = true;
			this->metroGrid10->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle145->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle145->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle145->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle145->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle145->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle145->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle145->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid10->RowHeadersDefaultCellStyle = dataGridViewCellStyle145;
			this->metroGrid10->RowHeadersVisible = false;
			this->metroGrid10->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle146->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle146->NullValue = nullptr;
			this->metroGrid10->RowsDefaultCellStyle = dataGridViewCellStyle146;
			this->metroGrid10->RowTemplate->Height = 20;
			this->metroGrid10->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid10->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroGrid10->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid10->Size = System::Drawing::Size(237, 161);
			this->metroGrid10->TabIndex = 10;
			this->metroGrid10->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid10_CellContentClick);
			this->metroGrid10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid10_MouseClick);
			// 
			// metroTabPage8
			// 
			this->metroTabPage8->Controls->Add(this->metroButton12);
			this->metroTabPage8->Controls->Add(this->metroButton9);
			this->metroTabPage8->Controls->Add(this->metroLabel5);
			this->metroTabPage8->Controls->Add(this->metroTextBox5);
			this->metroTabPage8->Controls->Add(this->metroGrid16);
			this->metroTabPage8->Controls->Add(this->metroGrid15);
			this->metroTabPage8->HorizontalScrollbarBarColor = true;
			this->metroTabPage8->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage8->HorizontalScrollbarSize = 49166;
			this->metroTabPage8->Location = System::Drawing::Point(4, 41);
			this->metroTabPage8->Name = L"metroTabPage8";
			this->metroTabPage8->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage8->TabIndex = 2;
			this->metroTabPage8->Text = L"Multi By A Num";
			this->metroTabPage8->VerticalScrollbarBarColor = true;
			this->metroTabPage8->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage8->VerticalScrollbarSize = 10;
			this->metroTabPage8->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage8_Click);
			this->metroTabPage8->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage8_Enter);
			this->metroTabPage8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroTabPage8_MouseClick);
			// 
			// metroButton12
			// 
			this->metroButton12->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton12->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton12->Location = System::Drawing::Point(562, 59);
			this->metroButton12->Name = L"metroButton12";
			this->metroButton12->Size = System::Drawing::Size(118, 35);
			this->metroButton12->TabIndex = 18;
			this->metroButton12->Text = L"Calculate";
			this->metroButton12->UseSelectable = true;
			this->metroButton12->Click += gcnew System::EventHandler(this, &matrix_form::metroButton12_Click);
			// 
			// metroButton9
			// 
			this->metroButton9->Enabled = false;
			this->metroButton9->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton9->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton9->Location = System::Drawing::Point(1120, 59);
			this->metroButton9->Name = L"metroButton9";
			this->metroButton9->Size = System::Drawing::Size(118, 35);
			this->metroButton9->TabIndex = 17;
			this->metroButton9->Text = L"Save";
			this->metroButton9->UseSelectable = true;
			this->metroButton9->Click += gcnew System::EventHandler(this, &matrix_form::metroButton9_Click);
			// 
			// metroLabel5
			// 
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel5->Location = System::Drawing::Point(4, 31);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(133, 25);
			this->metroLabel5->TabIndex = 16;
			this->metroLabel5->Text = L"Enter a Number";
			this->metroLabel5->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel5_Click);
			// 
			// metroTextBox5
			// 
			this->metroTextBox5->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox5->Location = System::Drawing::Point(4, 59);
			this->metroTextBox5->MaxLength = 32767;
			this->metroTextBox5->Name = L"metroTextBox5";
			this->metroTextBox5->PasswordChar = '\0';
			this->metroTextBox5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox5->SelectedText = L"";
			this->metroTextBox5->Size = System::Drawing::Size(133, 35);
			this->metroTextBox5->TabIndex = 15;
			this->metroTextBox5->UseSelectable = true;
			this->metroTextBox5->Click += gcnew System::EventHandler(this, &matrix_form::metroTextBox5_Click);
			this->metroTextBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrix_form::metroTextBox5_KeyPress);
			// 
			// metroGrid16
			// 
			this->metroGrid16->AllowUserToAddRows = false;
			this->metroGrid16->AllowUserToDeleteRows = false;
			this->metroGrid16->AllowUserToResizeRows = false;
			this->metroGrid16->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid16->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid16->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle147->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle147->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle147->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle147->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle147->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle147->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid16->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle147;
			this->metroGrid16->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid16->ColumnHeadersVisible = false;
			this->metroGrid16->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle148->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle148->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle148->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle148->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle148->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle148->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle148->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid16->DefaultCellStyle = dataGridViewCellStyle148;
			this->metroGrid16->EnableHeadersVisualStyles = false;
			this->metroGrid16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid16->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid16->Location = System::Drawing::Point(711, 117);
			this->metroGrid16->Name = L"metroGrid16";
			this->metroGrid16->ReadOnly = true;
			this->metroGrid16->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle149->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle149->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle149->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle149->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle149->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle149->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle149->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid16->RowHeadersDefaultCellStyle = dataGridViewCellStyle149;
			this->metroGrid16->RowHeadersVisible = false;
			this->metroGrid16->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle150->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle150->NullValue = nullptr;
			this->metroGrid16->RowsDefaultCellStyle = dataGridViewCellStyle150;
			this->metroGrid16->RowTemplate->Height = 40;
			this->metroGrid16->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid16->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid16->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid16->Size = System::Drawing::Size(527, 441);
			this->metroGrid16->TabIndex = 14;
			this->metroGrid16->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid16_CellContentClick);
			// 
			// metroGrid15
			// 
			this->metroGrid15->AllowUserToAddRows = false;
			this->metroGrid15->AllowUserToDeleteRows = false;
			this->metroGrid15->AllowUserToResizeRows = false;
			this->metroGrid15->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid15->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid15->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle151->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle151->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle151->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle151->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle151->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle151->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid15->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle151;
			this->metroGrid15->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid15->ColumnHeadersVisible = false;
			this->metroGrid15->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle152->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle152->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle152->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle152->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle152->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle152->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle152->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid15->DefaultCellStyle = dataGridViewCellStyle152;
			this->metroGrid15->EnableHeadersVisualStyles = false;
			this->metroGrid15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid15->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid15->Location = System::Drawing::Point(4, 117);
			this->metroGrid15->Name = L"metroGrid15";
			this->metroGrid15->ReadOnly = true;
			this->metroGrid15->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle153->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle153->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle153->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle153->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle153->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle153->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle153->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid15->RowHeadersDefaultCellStyle = dataGridViewCellStyle153;
			this->metroGrid15->RowHeadersVisible = false;
			this->metroGrid15->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle154->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle154->NullValue = nullptr;
			this->metroGrid15->RowsDefaultCellStyle = dataGridViewCellStyle154;
			this->metroGrid15->RowTemplate->Height = 40;
			this->metroGrid15->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid15->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid15->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid15->Size = System::Drawing::Size(527, 441);
			this->metroGrid15->TabIndex = 13;
			this->metroGrid15->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid15_CellContentClick);
			// 
			// metroTabPage9
			// 
			this->metroTabPage9->Controls->Add(this->metroButton13);
			this->metroTabPage9->Controls->Add(this->metroLabel10);
			this->metroTabPage9->Controls->Add(this->metroButton10);
			this->metroTabPage9->Controls->Add(this->metroLabel6);
			this->metroTabPage9->Controls->Add(this->metroTextBox6);
			this->metroTabPage9->Controls->Add(this->metroGrid18);
			this->metroTabPage9->Controls->Add(this->metroGrid17);
			this->metroTabPage9->HorizontalScrollbarBarColor = true;
			this->metroTabPage9->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage9->HorizontalScrollbarSize = 28074;
			this->metroTabPage9->Location = System::Drawing::Point(4, 41);
			this->metroTabPage9->Name = L"metroTabPage9";
			this->metroTabPage9->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage9->TabIndex = 3;
			this->metroTabPage9->Text = L"Raise To Power";
			this->metroTabPage9->VerticalScrollbarBarColor = true;
			this->metroTabPage9->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage9->VerticalScrollbarSize = 10;
			this->metroTabPage9->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage9_Click);
			this->metroTabPage9->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage9_Enter);
			// 
			// metroButton13
			// 
			this->metroButton13->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton13->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton13->Location = System::Drawing::Point(562, 59);
			this->metroButton13->Name = L"metroButton13";
			this->metroButton13->Size = System::Drawing::Size(118, 35);
			this->metroButton13->TabIndex = 20;
			this->metroButton13->Text = L"Calculate";
			this->metroButton13->UseSelectable = true;
			this->metroButton13->Click += gcnew System::EventHandler(this, &matrix_form::metroButton13_Click);
			// 
			// metroLabel10
			// 
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel10->Location = System::Drawing::Point(513, 260);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(214, 25);
			this->metroLabel10->TabIndex = 19;
			this->metroLabel10->Text = L"The Matrix Is Not Squared ";
			this->metroLabel10->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel10_Click);
			// 
			// metroButton10
			// 
			this->metroButton10->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton10->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton10->Location = System::Drawing::Point(1120, 59);
			this->metroButton10->Name = L"metroButton10";
			this->metroButton10->Size = System::Drawing::Size(118, 35);
			this->metroButton10->TabIndex = 18;
			this->metroButton10->Text = L"Save";
			this->metroButton10->UseSelectable = true;
			this->metroButton10->Click += gcnew System::EventHandler(this, &matrix_form::metroButton10_Click);
			// 
			// metroLabel6
			// 
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel6->Location = System::Drawing::Point(4, 26);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(59, 25);
			this->metroLabel6->TabIndex = 17;
			this->metroLabel6->Text = L"Power";
			this->metroLabel6->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel6_Click);
			// 
			// metroTextBox6
			// 
			this->metroTextBox6->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox6->Location = System::Drawing::Point(4, 59);
			this->metroTextBox6->MaxLength = 32767;
			this->metroTextBox6->Name = L"metroTextBox6";
			this->metroTextBox6->PasswordChar = '\0';
			this->metroTextBox6->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox6->SelectedText = L"";
			this->metroTextBox6->Size = System::Drawing::Size(133, 35);
			this->metroTextBox6->TabIndex = 16;
			this->metroTextBox6->UseSelectable = true;
			this->metroTextBox6->Click += gcnew System::EventHandler(this, &matrix_form::metroTextBox6_Click);
			this->metroTextBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &matrix_form::metroTextBox6_KeyPress);
			// 
			// metroGrid18
			// 
			this->metroGrid18->AllowUserToAddRows = false;
			this->metroGrid18->AllowUserToDeleteRows = false;
			this->metroGrid18->AllowUserToResizeRows = false;
			this->metroGrid18->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid18->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid18->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle155->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle155->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle155->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle155->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle155->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle155->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid18->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle155;
			this->metroGrid18->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid18->ColumnHeadersVisible = false;
			this->metroGrid18->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle156->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle156->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle156->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle156->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle156->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle156->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle156->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid18->DefaultCellStyle = dataGridViewCellStyle156;
			this->metroGrid18->EnableHeadersVisualStyles = false;
			this->metroGrid18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid18->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid18->Location = System::Drawing::Point(711, 117);
			this->metroGrid18->Name = L"metroGrid18";
			this->metroGrid18->ReadOnly = true;
			this->metroGrid18->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle157->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle157->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle157->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle157->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle157->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle157->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle157->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid18->RowHeadersDefaultCellStyle = dataGridViewCellStyle157;
			this->metroGrid18->RowHeadersVisible = false;
			this->metroGrid18->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle158->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle158->NullValue = nullptr;
			this->metroGrid18->RowsDefaultCellStyle = dataGridViewCellStyle158;
			this->metroGrid18->RowTemplate->Height = 40;
			this->metroGrid18->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid18->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid18->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid18->Size = System::Drawing::Size(527, 441);
			this->metroGrid18->TabIndex = 15;
			this->metroGrid18->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid18_CellContentClick);
			// 
			// metroGrid17
			// 
			this->metroGrid17->AllowUserToAddRows = false;
			this->metroGrid17->AllowUserToDeleteRows = false;
			this->metroGrid17->AllowUserToResizeRows = false;
			this->metroGrid17->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid17->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid17->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle159->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle159->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle159->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle159->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle159->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle159->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid17->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle159;
			this->metroGrid17->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid17->ColumnHeadersVisible = false;
			this->metroGrid17->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle160->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle160->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle160->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle160->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle160->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle160->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle160->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid17->DefaultCellStyle = dataGridViewCellStyle160;
			this->metroGrid17->EnableHeadersVisualStyles = false;
			this->metroGrid17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid17->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid17->Location = System::Drawing::Point(4, 117);
			this->metroGrid17->Name = L"metroGrid17";
			this->metroGrid17->ReadOnly = true;
			this->metroGrid17->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle161->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle161->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle161->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle161->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle161->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle161->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle161->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid17->RowHeadersDefaultCellStyle = dataGridViewCellStyle161;
			this->metroGrid17->RowHeadersVisible = false;
			this->metroGrid17->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle162->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle162->NullValue = nullptr;
			this->metroGrid17->RowsDefaultCellStyle = dataGridViewCellStyle162;
			this->metroGrid17->RowTemplate->Height = 40;
			this->metroGrid17->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid17->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid17->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid17->Size = System::Drawing::Size(527, 441);
			this->metroGrid17->TabIndex = 14;
			this->metroGrid17->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid17_CellContentClick);
			// 
			// metroTabPage4
			// 
			this->metroTabPage4->Controls->Add(this->metroLabel9);
			this->metroTabPage4->Controls->Add(this->metroTabControl3);
			this->metroTabPage4->HorizontalScrollbarBarColor = true;
			this->metroTabPage4->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage4->HorizontalScrollbarSize = 70996;
			this->metroTabPage4->Location = System::Drawing::Point(4, 47);
			this->metroTabPage4->Name = L"metroTabPage4";
			this->metroTabPage4->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage4->TabIndex = 4;
			this->metroTabPage4->Text = L"Eigen Applications";
			this->metroTabPage4->VerticalScrollbarBarColor = true;
			this->metroTabPage4->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage4->VerticalScrollbarSize = 10;
			this->metroTabPage4->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage4_Click);
			this->metroTabPage4->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage4_Enter);
			// 
			// metroLabel9
			// 
			this->metroLabel9->AutoSize = true;
			this->metroLabel9->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel9->Location = System::Drawing::Point(528, 303);
			this->metroLabel9->Name = L"metroLabel9";
			this->metroLabel9->Size = System::Drawing::Size(199, 25);
			this->metroLabel9->TabIndex = 28;
			this->metroLabel9->Text = L"The Matrix is Not Square";
			// 
			// metroTabControl3
			// 
			this->metroTabControl3->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->metroTabControl3->Controls->Add(this->metroTabPage16);
			this->metroTabControl3->Controls->Add(this->metroTabPage10);
			this->metroTabControl3->Controls->Add(this->metroTabPage11);
			this->metroTabControl3->Controls->Add(this->metroTabPage12);
			this->metroTabControl3->Controls->Add(this->metroTabPage13);
			this->metroTabControl3->Location = System::Drawing::Point(8, 3);
			this->metroTabControl3->Name = L"metroTabControl3";
			this->metroTabControl3->SelectedIndex = 2;
			this->metroTabControl3->Size = System::Drawing::Size(1249, 603);
			this->metroTabControl3->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->metroTabControl3->Style = MetroFramework::MetroColorStyle::Yellow;
			this->metroTabControl3->TabIndex = 15;
			this->metroTabControl3->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTabControl3->UseSelectable = true;
			this->metroTabControl3->SelectedIndexChanged += gcnew System::EventHandler(this, &matrix_form::metroTabControl3_SelectedIndexChanged);
			this->metroTabControl3->Click += gcnew System::EventHandler(this, &matrix_form::metroTabControl3_Click);
			// 
			// metroTabPage16
			// 
			this->metroTabPage16->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->metroTabPage16->Controls->Add(this->pictureBox2);
			this->metroTabPage16->HorizontalScrollbarBarColor = true;
			this->metroTabPage16->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage16->HorizontalScrollbarSize = 228;
			this->metroTabPage16->Location = System::Drawing::Point(4, 41);
			this->metroTabPage16->Name = L"metroTabPage16";
			this->metroTabPage16->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage16->TabIndex = 4;
			this->metroTabPage16->Text = L"About";
			this->metroTabPage16->VerticalScrollbarBarColor = true;
			this->metroTabPage16->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage16->VerticalScrollbarSize = 10;
			this->metroTabPage16->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage16_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1240, 557);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &matrix_form::pictureBox2_Click);
			// 
			// metroTabPage10
			// 
			this->metroTabPage10->Controls->Add(this->metroGrid5);
			this->metroTabPage10->Controls->Add(this->metroButton4);
			this->metroTabPage10->HorizontalScrollbarBarColor = true;
			this->metroTabPage10->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage10->HorizontalScrollbarSize = 9152;
			this->metroTabPage10->Location = System::Drawing::Point(4, 41);
			this->metroTabPage10->Name = L"metroTabPage10";
			this->metroTabPage10->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage10->TabIndex = 0;
			this->metroTabPage10->Text = L"Find The Similar";
			this->metroTabPage10->VerticalScrollbarBarColor = true;
			this->metroTabPage10->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage10->VerticalScrollbarSize = 10;
			this->metroTabPage10->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage10_Enter);
			// 
			// metroGrid5
			// 
			this->metroGrid5->AllowUserToAddRows = false;
			this->metroGrid5->AllowUserToDeleteRows = false;
			this->metroGrid5->AllowUserToResizeColumns = false;
			this->metroGrid5->AllowUserToResizeRows = false;
			this->metroGrid5->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid5->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid5->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle163->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle163->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle163->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle163->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle163->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle163->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle163->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle163;
			this->metroGrid5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid5->ColumnHeadersVisible = false;
			dataGridViewCellStyle164->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle164->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle164->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle164->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle164->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle164->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle164->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid5->DefaultCellStyle = dataGridViewCellStyle164;
			this->metroGrid5->EnableHeadersVisualStyles = false;
			this->metroGrid5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid5->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid5->Location = System::Drawing::Point(4, 75);
			this->metroGrid5->Name = L"metroGrid5";
			this->metroGrid5->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle165->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle165->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle165->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle165->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle165->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle165->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle165->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid5->RowHeadersDefaultCellStyle = dataGridViewCellStyle165;
			this->metroGrid5->RowHeadersVisible = false;
			this->metroGrid5->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid5->RowTemplate->Height = 40;
			this->metroGrid5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid5->Size = System::Drawing::Size(1143, 480);
			this->metroGrid5->TabIndex = 12;
			// 
			// metroButton4
			// 
			this->metroButton4->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton4->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton4->Location = System::Drawing::Point(4, 25);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(118, 35);
			this->metroButton4->TabIndex = 13;
			this->metroButton4->Text = L"Save";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &matrix_form::metroButton4_Click);
			// 
			// metroTabPage11
			// 
			this->metroTabPage11->Controls->Add(this->metroButton11);
			this->metroTabPage11->Controls->Add(this->metroGrid19);
			this->metroTabPage11->Controls->Add(this->metroGrid12);
			this->metroTabPage11->HorizontalScrollbarBarColor = true;
			this->metroTabPage11->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage11->HorizontalScrollbarSize = 7799;
			this->metroTabPage11->Location = System::Drawing::Point(4, 41);
			this->metroTabPage11->Name = L"metroTabPage11";
			this->metroTabPage11->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage11->TabIndex = 1;
			this->metroTabPage11->Text = L"Similarity Test";
			this->metroTabPage11->VerticalScrollbarBarColor = true;
			this->metroTabPage11->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage11->VerticalScrollbarSize = 10;
			this->metroTabPage11->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage11_Enter);
			// 
			// metroButton11
			// 
			this->metroButton11->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton11->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton11->Location = System::Drawing::Point(563, 45);
			this->metroButton11->Name = L"metroButton11";
			this->metroButton11->Size = System::Drawing::Size(118, 35);
			this->metroButton11->TabIndex = 15;
			this->metroButton11->Text = L"Test";
			this->metroButton11->UseSelectable = true;
			this->metroButton11->Click += gcnew System::EventHandler(this, &matrix_form::metroButton11_Click);
			// 
			// metroGrid19
			// 
			this->metroGrid19->AllowUserToAddRows = false;
			this->metroGrid19->AllowUserToDeleteRows = false;
			this->metroGrid19->AllowUserToResizeRows = false;
			this->metroGrid19->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid19->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid19->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle166->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle166->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle166->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle166->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle166->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle166->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid19->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle166;
			this->metroGrid19->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid19->ColumnHeadersVisible = false;
			this->metroGrid19->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle167->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle167->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle167->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle167->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle167->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle167->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle167->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid19->DefaultCellStyle = dataGridViewCellStyle167;
			this->metroGrid19->EnableHeadersVisualStyles = false;
			this->metroGrid19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid19->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid19->Location = System::Drawing::Point(673, 117);
			this->metroGrid19->Name = L"metroGrid19";
			this->metroGrid19->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle168->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle168->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle168->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle168->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle168->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle168->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle168->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid19->RowHeadersDefaultCellStyle = dataGridViewCellStyle168;
			this->metroGrid19->RowHeadersVisible = false;
			this->metroGrid19->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle169->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle169->NullValue = nullptr;
			this->metroGrid19->RowsDefaultCellStyle = dataGridViewCellStyle169;
			this->metroGrid19->RowTemplate->Height = 40;
			this->metroGrid19->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid19->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid19->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid19->Size = System::Drawing::Size(568, 438);
			this->metroGrid19->TabIndex = 14;
			this->metroGrid19->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid19_CellContentClick);
			this->metroGrid19->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid19_CellEndEdit);
			// 
			// metroGrid12
			// 
			this->metroGrid12->AllowUserToAddRows = false;
			this->metroGrid12->AllowUserToDeleteRows = false;
			this->metroGrid12->AllowUserToResizeRows = false;
			this->metroGrid12->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid12->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid12->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle170->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle170->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle170->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle170->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle170->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle170->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid12->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle170;
			this->metroGrid12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid12->ColumnHeadersVisible = false;
			this->metroGrid12->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle171->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle171->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle171->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle171->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle171->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle171->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle171->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid12->DefaultCellStyle = dataGridViewCellStyle171;
			this->metroGrid12->EnableHeadersVisualStyles = false;
			this->metroGrid12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid12->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid12->Location = System::Drawing::Point(4, 117);
			this->metroGrid12->Name = L"metroGrid12";
			this->metroGrid12->ReadOnly = true;
			this->metroGrid12->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle172->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle172->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle172->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle172->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle172->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle172->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle172->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid12->RowHeadersDefaultCellStyle = dataGridViewCellStyle172;
			this->metroGrid12->RowHeadersVisible = false;
			this->metroGrid12->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle173->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle173->NullValue = nullptr;
			this->metroGrid12->RowsDefaultCellStyle = dataGridViewCellStyle173;
			this->metroGrid12->RowTemplate->Height = 40;
			this->metroGrid12->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid12->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid12->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid12->Size = System::Drawing::Size(568, 438);
			this->metroGrid12->TabIndex = 13;
			this->metroGrid12->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid12_CellContentClick);
			// 
			// metroTabPage12
			// 
			this->metroTabPage12->Controls->Add(this->metroLabel13);
			this->metroTabPage12->Controls->Add(this->metroComboBox1);
			this->metroTabPage12->Controls->Add(this->metroGrid21);
			this->metroTabPage12->HorizontalScrollbarBarColor = true;
			this->metroTabPage12->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage12->HorizontalScrollbarSize = 3793;
			this->metroTabPage12->Location = System::Drawing::Point(4, 41);
			this->metroTabPage12->Name = L"metroTabPage12";
			this->metroTabPage12->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage12->TabIndex = 2;
			this->metroTabPage12->Text = L"Eigenvalues And Eigenvectors";
			this->metroTabPage12->VerticalScrollbarBarColor = true;
			this->metroTabPage12->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage12->VerticalScrollbarSize = 10;
			this->metroTabPage12->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage12_Click);
			// 
			// metroLabel13
			// 
			this->metroLabel13->AutoSize = true;
			this->metroLabel13->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel13->Location = System::Drawing::Point(3, 3);
			this->metroLabel13->Name = L"metroLabel13";
			this->metroLabel13->Size = System::Drawing::Size(187, 25);
			this->metroLabel13->TabIndex = 17;
			this->metroLabel13->Text = L"Choose Lambda Value:";
			this->metroLabel13->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel13_Click);
			// 
			// metroComboBox1
			// 
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Location = System::Drawing::Point(4, 31);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(132, 29);
			this->metroComboBox1->TabIndex = 16;
			this->metroComboBox1->UseSelectable = true;
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &matrix_form::metroComboBox1_SelectedIndexChanged);
			this->metroComboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &matrix_form::metroComboBox1_SelectionChangeCommitted);
			this->metroComboBox1->Validated += gcnew System::EventHandler(this, &matrix_form::metroComboBox1_Validated);
			// 
			// metroGrid21
			// 
			this->metroGrid21->AllowUserToAddRows = false;
			this->metroGrid21->AllowUserToDeleteRows = false;
			this->metroGrid21->AllowUserToResizeRows = false;
			this->metroGrid21->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid21->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid21->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid21->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle174->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle174->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle174->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle174->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle174->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle174->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid21->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle174;
			this->metroGrid21->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid21->ColumnHeadersVisible = false;
			this->metroGrid21->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle175->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle175->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle175->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle175->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle175->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle175->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle175->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid21->DefaultCellStyle = dataGridViewCellStyle175;
			this->metroGrid21->EnableHeadersVisualStyles = false;
			this->metroGrid21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid21->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid21->Location = System::Drawing::Point(4, 75);
			this->metroGrid21->Name = L"metroGrid21";
			this->metroGrid21->ReadOnly = true;
			this->metroGrid21->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle176->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle176->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle176->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle176->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle176->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle176->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle176->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid21->RowHeadersDefaultCellStyle = dataGridViewCellStyle176;
			this->metroGrid21->RowHeadersVisible = false;
			this->metroGrid21->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle177->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle177->NullValue = nullptr;
			this->metroGrid21->RowsDefaultCellStyle = dataGridViewCellStyle177;
			this->metroGrid21->RowTemplate->Height = 60;
			this->metroGrid21->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid21->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid21->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid21->Size = System::Drawing::Size(1143, 480);
			this->metroGrid21->TabIndex = 15;
			this->metroGrid21->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid21_CellContentClick);
			// 
			// metroTabPage13
			// 
			this->metroTabPage13->Controls->Add(this->metroButton14);
			this->metroTabPage13->Controls->Add(this->metroLabel27);
			this->metroTabPage13->Controls->Add(this->metroLabel20);
			this->metroTabPage13->Controls->Add(this->metroLabel19);
			this->metroTabPage13->Controls->Add(this->metroLabel18);
			this->metroTabPage13->Controls->Add(this->metroLabel17);
			this->metroTabPage13->Controls->Add(this->metroLabel16);
			this->metroTabPage13->Controls->Add(this->metroLabel15);
			this->metroTabPage13->Controls->Add(this->metroLabel14);
			this->metroTabPage13->Controls->Add(this->metroGrid26);
			this->metroTabPage13->Controls->Add(this->metroGrid25);
			this->metroTabPage13->Controls->Add(this->metroGrid24);
			this->metroTabPage13->Controls->Add(this->metroGrid23);
			this->metroTabPage13->Controls->Add(this->metroGrid22);
			this->metroTabPage13->HorizontalScrollbarBarColor = true;
			this->metroTabPage13->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage13->HorizontalScrollbarSize = 3793;
			this->metroTabPage13->Location = System::Drawing::Point(4, 41);
			this->metroTabPage13->Name = L"metroTabPage13";
			this->metroTabPage13->Size = System::Drawing::Size(1241, 558);
			this->metroTabPage13->TabIndex = 3;
			this->metroTabPage13->Text = L"Matrix Diagonize";
			this->metroTabPage13->VerticalScrollbarBarColor = true;
			this->metroTabPage13->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage13->VerticalScrollbarSize = 10;
			this->metroTabPage13->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage13_Click);
			// 
			// metroButton14
			// 
			this->metroButton14->Enabled = false;
			this->metroButton14->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton14->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton14->Location = System::Drawing::Point(31, 511);
			this->metroButton14->Name = L"metroButton14";
			this->metroButton14->Size = System::Drawing::Size(118, 35);
			this->metroButton14->TabIndex = 28;
			this->metroButton14->Text = L"Save";
			this->metroButton14->UseSelectable = true;
			this->metroButton14->Click += gcnew System::EventHandler(this, &matrix_form::metroButton14_Click);
			// 
			// metroLabel27
			// 
			this->metroLabel27->AutoSize = true;
			this->metroLabel27->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel27->Location = System::Drawing::Point(500, 212);
			this->metroLabel27->Name = L"metroLabel27";
			this->metroLabel27->Size = System::Drawing::Size(248, 25);
			this->metroLabel27->TabIndex = 27;
			this->metroLabel27->Text = L"The Matrix is Not Diagnalizable";
			this->metroLabel27->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel27_Click);
			// 
			// metroLabel20
			// 
			this->metroLabel20->AutoSize = true;
			this->metroLabel20->Location = System::Drawing::Point(326, -3);
			this->metroLabel20->Name = L"metroLabel20";
			this->metroLabel20->Size = System::Drawing::Size(17, 19);
			this->metroLabel20->TabIndex = 26;
			this->metroLabel20->Text = L"P";
			this->metroLabel20->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel20_Click);
			// 
			// metroLabel19
			// 
			this->metroLabel19->AutoSize = true;
			this->metroLabel19->Location = System::Drawing::Point(633, -3);
			this->metroLabel19->Name = L"metroLabel19";
			this->metroLabel19->Size = System::Drawing::Size(18, 19);
			this->metroLabel19->TabIndex = 25;
			this->metroLabel19->Text = L"D";
			this->metroLabel19->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel19_Click);
			// 
			// metroLabel18
			// 
			this->metroLabel18->AutoSize = true;
			this->metroLabel18->Location = System::Drawing::Point(942, -3);
			this->metroLabel18->Name = L"metroLabel18";
			this->metroLabel18->Size = System::Drawing::Size(47, 19);
			this->metroLabel18->TabIndex = 24;
			this->metroLabel18->Text = L"P^(-1)";
			this->metroLabel18->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel18_Click);
			// 
			// metroLabel17
			// 
			this->metroLabel17->AutoSize = true;
			this->metroLabel17->Location = System::Drawing::Point(302, 16);
			this->metroLabel17->Name = L"metroLabel17";
			this->metroLabel17->Size = System::Drawing::Size(18, 19);
			this->metroLabel17->TabIndex = 23;
			this->metroLabel17->Text = L"=";
			this->metroLabel17->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel17_Click);
			// 
			// metroLabel16
			// 
			this->metroLabel16->AutoSize = true;
			this->metroLabel16->Location = System::Drawing::Point(609, 16);
			this->metroLabel16->Name = L"metroLabel16";
			this->metroLabel16->Size = System::Drawing::Size(18, 19);
			this->metroLabel16->TabIndex = 22;
			this->metroLabel16->Text = L"×";
			this->metroLabel16->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel16_Click);
			// 
			// metroLabel15
			// 
			this->metroLabel15->AutoSize = true;
			this->metroLabel15->Location = System::Drawing::Point(918, 16);
			this->metroLabel15->Name = L"metroLabel15";
			this->metroLabel15->Size = System::Drawing::Size(18, 19);
			this->metroLabel15->TabIndex = 21;
			this->metroLabel15->Text = L"×";
			this->metroLabel15->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel15_Click);
			// 
			// metroLabel14
			// 
			this->metroLabel14->AutoSize = true;
			this->metroLabel14->BackColor = System::Drawing::Color::Transparent;
			this->metroLabel14->Location = System::Drawing::Point(17, -3);
			this->metroLabel14->Name = L"metroLabel14";
			this->metroLabel14->Size = System::Drawing::Size(18, 19);
			this->metroLabel14->TabIndex = 20;
			this->metroLabel14->Text = L"A";
			this->metroLabel14->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel14_Click);
			// 
			// metroGrid26
			// 
			this->metroGrid26->AllowUserToAddRows = false;
			this->metroGrid26->AllowUserToDeleteRows = false;
			this->metroGrid26->AllowUserToResizeRows = false;
			this->metroGrid26->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid26->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid26->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid26->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle178->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle178->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle178->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle178->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle178->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle178->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid26->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle178;
			this->metroGrid26->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid26->ColumnHeadersVisible = false;
			this->metroGrid26->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle179->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle179->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle179->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle179->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle179->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle179->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle179->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid26->DefaultCellStyle = dataGridViewCellStyle179;
			this->metroGrid26->EnableHeadersVisualStyles = false;
			this->metroGrid26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid26->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid26->Location = System::Drawing::Point(155, 249);
			this->metroGrid26->Name = L"metroGrid26";
			this->metroGrid26->ReadOnly = true;
			this->metroGrid26->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle180->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle180->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle180->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle180->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle180->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle180->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle180->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid26->RowHeadersDefaultCellStyle = dataGridViewCellStyle180;
			this->metroGrid26->RowHeadersVisible = false;
			this->metroGrid26->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle181->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle181->NullValue = nullptr;
			this->metroGrid26->RowsDefaultCellStyle = dataGridViewCellStyle181;
			this->metroGrid26->RowTemplate->Height = 40;
			this->metroGrid26->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid26->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid26->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid26->Size = System::Drawing::Size(927, 297);
			this->metroGrid26->TabIndex = 19;
			this->metroGrid26->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid26_CellContentClick);
			// 
			// metroGrid25
			// 
			this->metroGrid25->AllowUserToAddRows = false;
			this->metroGrid25->AllowUserToDeleteRows = false;
			this->metroGrid25->AllowUserToResizeRows = false;
			this->metroGrid25->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid25->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid25->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid25->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle182->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle182->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle182->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle182->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle182->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle182->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid25->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle182;
			this->metroGrid25->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid25->ColumnHeadersVisible = false;
			this->metroGrid25->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle183->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle183->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle183->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle183->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle183->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle183->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle183->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid25->DefaultCellStyle = dataGridViewCellStyle183;
			this->metroGrid25->EnableHeadersVisualStyles = false;
			this->metroGrid25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid25->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid25->Location = System::Drawing::Point(940, 16);
			this->metroGrid25->Name = L"metroGrid25";
			this->metroGrid25->ReadOnly = true;
			this->metroGrid25->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle184->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle184->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle184->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle184->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle184->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle184->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle184->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid25->RowHeadersDefaultCellStyle = dataGridViewCellStyle184;
			this->metroGrid25->RowHeadersVisible = false;
			this->metroGrid25->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle185->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle185->NullValue = nullptr;
			this->metroGrid25->RowsDefaultCellStyle = dataGridViewCellStyle185;
			this->metroGrid25->RowTemplate->Height = 20;
			this->metroGrid25->RowTemplate->ReadOnly = true;
			this->metroGrid25->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid25->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid25->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid25->Size = System::Drawing::Size(281, 178);
			this->metroGrid25->TabIndex = 18;
			this->metroGrid25->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid25_CellContentClick);
			this->metroGrid25->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid25_MouseClick);
			// 
			// metroGrid24
			// 
			this->metroGrid24->AllowUserToAddRows = false;
			this->metroGrid24->AllowUserToDeleteRows = false;
			this->metroGrid24->AllowUserToResizeRows = false;
			this->metroGrid24->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid24->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid24->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid24->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle186->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle186->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle186->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle186->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle186->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle186->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid24->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle186;
			this->metroGrid24->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid24->ColumnHeadersVisible = false;
			this->metroGrid24->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle187->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle187->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle187->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle187->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle187->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle187->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle187->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid24->DefaultCellStyle = dataGridViewCellStyle187;
			this->metroGrid24->EnableHeadersVisualStyles = false;
			this->metroGrid24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid24->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid24->Location = System::Drawing::Point(633, 16);
			this->metroGrid24->Name = L"metroGrid24";
			this->metroGrid24->ReadOnly = true;
			this->metroGrid24->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle188->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle188->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle188->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle188->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle188->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle188->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle188->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid24->RowHeadersDefaultCellStyle = dataGridViewCellStyle188;
			this->metroGrid24->RowHeadersVisible = false;
			this->metroGrid24->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle189->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle189->NullValue = nullptr;
			this->metroGrid24->RowsDefaultCellStyle = dataGridViewCellStyle189;
			this->metroGrid24->RowTemplate->Height = 20;
			this->metroGrid24->RowTemplate->ReadOnly = true;
			this->metroGrid24->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid24->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid24->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid24->Size = System::Drawing::Size(281, 178);
			this->metroGrid24->TabIndex = 17;
			this->metroGrid24->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid24_CellContentClick);
			this->metroGrid24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid24_MouseClick);
			// 
			// metroGrid23
			// 
			this->metroGrid23->AllowUserToAddRows = false;
			this->metroGrid23->AllowUserToDeleteRows = false;
			this->metroGrid23->AllowUserToResizeRows = false;
			this->metroGrid23->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid23->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid23->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid23->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle190->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle190->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle190->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle190->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle190->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle190->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid23->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle190;
			this->metroGrid23->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid23->ColumnHeadersVisible = false;
			this->metroGrid23->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle191->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle191->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle191->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle191->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle191->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle191->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle191->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid23->DefaultCellStyle = dataGridViewCellStyle191;
			this->metroGrid23->EnableHeadersVisualStyles = false;
			this->metroGrid23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid23->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid23->Location = System::Drawing::Point(326, 16);
			this->metroGrid23->Name = L"metroGrid23";
			this->metroGrid23->ReadOnly = true;
			this->metroGrid23->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle192->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle192->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle192->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle192->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle192->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle192->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle192->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid23->RowHeadersDefaultCellStyle = dataGridViewCellStyle192;
			this->metroGrid23->RowHeadersVisible = false;
			this->metroGrid23->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle193->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle193->NullValue = nullptr;
			this->metroGrid23->RowsDefaultCellStyle = dataGridViewCellStyle193;
			this->metroGrid23->RowTemplate->Height = 20;
			this->metroGrid23->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid23->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid23->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid23->Size = System::Drawing::Size(281, 178);
			this->metroGrid23->TabIndex = 16;
			this->metroGrid23->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid23_CellContentClick);
			this->metroGrid23->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid23_MouseClick);
			// 
			// metroGrid22
			// 
			this->metroGrid22->AllowUserToAddRows = false;
			this->metroGrid22->AllowUserToDeleteRows = false;
			this->metroGrid22->AllowUserToResizeRows = false;
			this->metroGrid22->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid22->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid22->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid22->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle194->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle194->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle194->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle194->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle194->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle194->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid22->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle194;
			this->metroGrid22->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid22->ColumnHeadersVisible = false;
			this->metroGrid22->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle195->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle195->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle195->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle195->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle195->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle195->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle195->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid22->DefaultCellStyle = dataGridViewCellStyle195;
			this->metroGrid22->EnableHeadersVisualStyles = false;
			this->metroGrid22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid22->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid22->Location = System::Drawing::Point(17, 16);
			this->metroGrid22->Name = L"metroGrid22";
			this->metroGrid22->ReadOnly = true;
			this->metroGrid22->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle196->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle196->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle196->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle196->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle196->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle196->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle196->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid22->RowHeadersDefaultCellStyle = dataGridViewCellStyle196;
			this->metroGrid22->RowHeadersVisible = false;
			this->metroGrid22->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle197->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle197->NullValue = nullptr;
			this->metroGrid22->RowsDefaultCellStyle = dataGridViewCellStyle197;
			this->metroGrid22->RowTemplate->Height = 20;
			this->metroGrid22->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid22->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid22->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid22->Size = System::Drawing::Size(281, 178);
			this->metroGrid22->TabIndex = 15;
			this->metroGrid22->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid22_CellContentClick);
			this->metroGrid22->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::metroGrid22_MouseClick);
			// 
			// metroTabPage3
			// 
			this->metroTabPage3->Controls->Add(this->metroLabel8);
			this->metroTabPage3->Controls->Add(this->metroLabel7);
			this->metroTabPage3->Controls->Add(this->metroButton2);
			this->metroTabPage3->Controls->Add(this->metroGrid4);
			this->metroTabPage3->HorizontalScrollbarBarColor = true;
			this->metroTabPage3->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->HorizontalScrollbarSize = 70996;
			this->metroTabPage3->Location = System::Drawing::Point(4, 47);
			this->metroTabPage3->Name = L"metroTabPage3";
			this->metroTabPage3->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage3->Style = MetroFramework::MetroColorStyle::Green;
			this->metroTabPage3->TabIndex = 3;
			this->metroTabPage3->Text = L"Inverse";
			this->metroTabPage3->UseStyleColors = true;
			this->metroTabPage3->VerticalScrollbar = true;
			this->metroTabPage3->VerticalScrollbarBarColor = true;
			this->metroTabPage3->VerticalScrollbarHighlightOnWheel = true;
			this->metroTabPage3->VerticalScrollbarSize = 10;
			this->metroTabPage3->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage3_Click);
			this->metroTabPage3->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage3_Enter);
			// 
			// metroLabel8
			// 
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel8->Location = System::Drawing::Point(475, 256);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(321, 25);
			this->metroLabel8->TabIndex = 14;
			this->metroLabel8->Text = L"The Determinat Of Matrix  Equal To Zero";
			this->metroLabel8->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel8_Click);
			// 
			// metroLabel7
			// 
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel7->Location = System::Drawing::Point(528, 303);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(214, 25);
			this->metroLabel7->TabIndex = 13;
			this->metroLabel7->Text = L"The Matrix Is Not Squared ";
			this->metroLabel7->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel7_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton2->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton2->Location = System::Drawing::Point(3, 15);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(118, 35);
			this->metroButton2->TabIndex = 12;
			this->metroButton2->Text = L"Save";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &matrix_form::metroButton2_Click_1);
			// 
			// metroGrid4
			// 
			this->metroGrid4->AllowUserToAddRows = false;
			this->metroGrid4->AllowUserToDeleteRows = false;
			this->metroGrid4->AllowUserToResizeRows = false;
			this->metroGrid4->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid4->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle198->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle198->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle198->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle198->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle198->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle198->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle198->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle198;
			this->metroGrid4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid4->ColumnHeadersVisible = false;
			dataGridViewCellStyle199->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle199->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle199->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle199->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle199->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle199->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle199->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid4->DefaultCellStyle = dataGridViewCellStyle199;
			this->metroGrid4->EnableHeadersVisualStyles = false;
			this->metroGrid4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid4->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid4->Location = System::Drawing::Point(3, 65);
			this->metroGrid4->Name = L"metroGrid4";
			this->metroGrid4->ReadOnly = true;
			this->metroGrid4->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle200->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle200->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle200->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle200->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle200->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle200->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle200->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid4->RowHeadersDefaultCellStyle = dataGridViewCellStyle200;
			this->metroGrid4->RowHeadersVisible = false;
			this->metroGrid4->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid4->RowTemplate->Height = 40;
			this->metroGrid4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid4->Size = System::Drawing::Size(1107, 537);
			this->metroGrid4->TabIndex = 11;
			this->metroGrid4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid4_CellContentClick);
			// 
			// Transpose
			// 
			this->Transpose->Controls->Add(this->metroButton3);
			this->Transpose->Controls->Add(this->metroGrid2);
			this->Transpose->HorizontalScrollbarBarColor = true;
			this->Transpose->HorizontalScrollbarHighlightOnWheel = false;
			this->Transpose->HorizontalScrollbarSize = 70996;
			this->Transpose->Location = System::Drawing::Point(4, 47);
			this->Transpose->Name = L"Transpose";
			this->Transpose->Size = System::Drawing::Size(1249, 606);
			this->Transpose->TabIndex = 1;
			this->Transpose->Text = L"Transpose";
			this->Transpose->UseVisualStyleBackColor = true;
			this->Transpose->VerticalScrollbarBarColor = true;
			this->Transpose->VerticalScrollbarHighlightOnWheel = false;
			this->Transpose->VerticalScrollbarSize = 10;
			this->Transpose->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &matrix_form::Transpose_Scroll);
			this->Transpose->Click += gcnew System::EventHandler(this, &matrix_form::Transpose_Click);
			this->Transpose->Enter += gcnew System::EventHandler(this, &matrix_form::Transpose_Enter);
			this->Transpose->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &matrix_form::Transpose_MouseClick);
			this->Transpose->MouseCaptureChanged += gcnew System::EventHandler(this, &matrix_form::Transpose_MouseCaptureChanged);
			// 
			// metroButton3
			// 
			this->metroButton3->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton3->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton3->Location = System::Drawing::Point(3, 15);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(118, 35);
			this->metroButton3->TabIndex = 10;
			this->metroButton3->Text = L"Save";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &matrix_form::metroButton3_Click);
			// 
			// metroGrid2
			// 
			this->metroGrid2->AllowUserToAddRows = false;
			this->metroGrid2->AllowUserToDeleteRows = false;
			this->metroGrid2->AllowUserToResizeRows = false;
			this->metroGrid2->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle201->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle201->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle201->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle201->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle201->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle201->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle201->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle201;
			this->metroGrid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid2->ColumnHeadersVisible = false;
			dataGridViewCellStyle202->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle202->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle202->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle202->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle202->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle202->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle202->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid2->DefaultCellStyle = dataGridViewCellStyle202;
			this->metroGrid2->EnableHeadersVisualStyles = false;
			this->metroGrid2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid2->Location = System::Drawing::Point(3, 66);
			this->metroGrid2->Name = L"metroGrid2";
			this->metroGrid2->ReadOnly = true;
			this->metroGrid2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle203->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle203->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle203->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle203->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle203->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle203->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle203->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid2->RowHeadersDefaultCellStyle = dataGridViewCellStyle203;
			this->metroGrid2->RowHeadersVisible = false;
			this->metroGrid2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid2->RowTemplate->Height = 40;
			this->metroGrid2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid2->Size = System::Drawing::Size(1107, 537);
			this->metroGrid2->TabIndex = 9;
			// 
			// metroTabPage1
			// 
			this->metroTabPage1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->metroTabPage1->Controls->Add(this->metroLabel32);
			this->metroTabPage1->Controls->Add(this->metroLabel31);
			this->metroTabPage1->Controls->Add(this->metroTextBox7);
			this->metroTabPage1->Controls->Add(this->metroLabel26);
			this->metroTabPage1->Controls->Add(this->metroLabel12);
			this->metroTabPage1->Controls->Add(this->metroLabel11);
			this->metroTabPage1->Controls->Add(this->metroTextBox4);
			this->metroTabPage1->Controls->Add(this->metroLabel4);
			this->metroTabPage1->Controls->Add(this->metroTextBox3);
			this->metroTabPage1->Controls->Add(this->metroLabel3);
			this->metroTabPage1->Controls->Add(this->metroTextBox2);
			this->metroTabPage1->Controls->Add(this->metroLabel2);
			this->metroTabPage1->Controls->Add(this->metroTextBox1);
			this->metroTabPage1->Controls->Add(this->metroLabel1);
			this->metroTabPage1->Controls->Add(this->metroGrid1);
			this->metroTabPage1->Controls->Add(this->numericUpDown1);
			this->metroTabPage1->Controls->Add(this->numericUpDown2);
			this->metroTabPage1->HorizontalScrollbarBarColor = true;
			this->metroTabPage1->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->HorizontalScrollbarSize = 65535;
			this->metroTabPage1->Location = System::Drawing::Point(4, 47);
			this->metroTabPage1->Name = L"metroTabPage1";
			this->metroTabPage1->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage1->TabIndex = 0;
			this->metroTabPage1->Text = L"Your Matrix";
			this->metroTabPage1->VerticalScrollbarBarColor = true;
			this->metroTabPage1->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->VerticalScrollbarSize = 10;
			this->metroTabPage1->Click += gcnew System::EventHandler(this, &matrix_form::metroTabPage1_Click);
			this->metroTabPage1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &matrix_form::metroTabPage1_Paint);
			this->metroTabPage1->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage1_Enter);
			// 
			// metroLabel31
			// 
			this->metroLabel31->AutoSize = true;
			this->metroLabel31->BackColor = System::Drawing::Color::Transparent;
			this->metroLabel31->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel31->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->metroLabel31->Location = System::Drawing::Point(1091, 90);
			this->metroLabel31->Name = L"metroLabel31";
			this->metroLabel31->Size = System::Drawing::Size(16, 25);
			this->metroLabel31->Style = MetroFramework::MetroColorStyle::Black;
			this->metroLabel31->TabIndex = 21;
			this->metroLabel31->Text = L".";
			this->metroLabel31->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->metroLabel31->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel31_Click);
			// 
			// metroTextBox7
			// 
			this->metroTextBox7->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox7->Location = System::Drawing::Point(8, 373);
			this->metroTextBox7->MaxLength = 32767;
			this->metroTextBox7->Name = L"metroTextBox7";
			this->metroTextBox7->PasswordChar = '\0';
			this->metroTextBox7->ReadOnly = true;
			this->metroTextBox7->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox7->SelectedText = L"";
			this->metroTextBox7->Size = System::Drawing::Size(114, 23);
			this->metroTextBox7->TabIndex = 20;
			this->metroTextBox7->UseSelectable = true;
			this->metroTextBox7->Click += gcnew System::EventHandler(this, &matrix_form::metroTextBox7_Click);
			// 
			// metroLabel26
			// 
			this->metroLabel26->AutoSize = true;
			this->metroLabel26->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel26->Location = System::Drawing::Point(8, 345);
			this->metroLabel26->Name = L"metroLabel26";
			this->metroLabel26->Size = System::Drawing::Size(60, 25);
			this->metroLabel26->TabIndex = 19;
			this->metroLabel26->Text = L"Nullity";
			// 
			// metroLabel12
			// 
			this->metroLabel12->AutoSize = true;
			this->metroLabel12->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel12->Location = System::Drawing::Point(61, 90);
			this->metroLabel12->Name = L"metroLabel12";
			this->metroLabel12->Size = System::Drawing::Size(51, 25);
			this->metroLabel12->TabIndex = 18;
			this->metroLabel12->Text = L"Rows";
			this->metroLabel12->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel12_Click);
			// 
			// metroLabel11
			// 
			this->metroLabel11->AutoSize = true;
			this->metroLabel11->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel11->Location = System::Drawing::Point(135, 11);
			this->metroLabel11->Name = L"metroLabel11";
			this->metroLabel11->Size = System::Drawing::Size(79, 25);
			this->metroLabel11->TabIndex = 17;
			this->metroLabel11->Text = L"Columns";
			this->metroLabel11->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel11_Click);
			// 
			// metroTextBox4
			// 
			this->metroTextBox4->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox4->Location = System::Drawing::Point(8, 274);
			this->metroTextBox4->MaxLength = 32767;
			this->metroTextBox4->Name = L"metroTextBox4";
			this->metroTextBox4->PasswordChar = '\0';
			this->metroTextBox4->ReadOnly = true;
			this->metroTextBox4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox4->SelectedText = L"";
			this->metroTextBox4->Size = System::Drawing::Size(114, 23);
			this->metroTextBox4->TabIndex = 16;
			this->metroTextBox4->UseSelectable = true;
			this->metroTextBox4->Click += gcnew System::EventHandler(this, &matrix_form::metroTextBox4_Click);
			// 
			// metroLabel4
			// 
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel4->Location = System::Drawing::Point(8, 246);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(49, 25);
			this->metroLabel4->TabIndex = 15;
			this->metroLabel4->Text = L"Rank";
			// 
			// metroTextBox3
			// 
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox3->Location = System::Drawing::Point(8, 183);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ReadOnly = true;
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->Size = System::Drawing::Size(114, 23);
			this->metroTextBox3->TabIndex = 14;
			this->metroTextBox3->UseSelectable = true;
			this->metroTextBox3->Click += gcnew System::EventHandler(this, &matrix_form::metroTextBox3_Click);
			// 
			// metroLabel3
			// 
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->BackColor = System::Drawing::Color::Transparent;
			this->metroLabel3->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->metroLabel3->Location = System::Drawing::Point(8, 155);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(119, 25);
			this->metroLabel3->Style = MetroFramework::MetroColorStyle::Black;
			this->metroLabel3->TabIndex = 13;
			this->metroLabel3->Text = L"Elements Sum";
			this->metroLabel3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->metroLabel3->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel3_Click);
			// 
			// metroTextBox2
			// 
			this->metroTextBox2->Enabled = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox2->Location = System::Drawing::Point(8, 579);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ReadOnly = true;
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->Size = System::Drawing::Size(114, 23);
			this->metroTextBox2->TabIndex = 12;
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->Click += gcnew System::EventHandler(this, &matrix_form::metroTextBox2_Click);
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel2->Location = System::Drawing::Point(8, 551);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(86, 25);
			this->metroLabel2->TabIndex = 11;
			this->metroLabel2->Text = L"Diag Sum";
			this->metroLabel2->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel2_Click);
			// 
			// metroTextBox1
			// 
			this->metroTextBox1->Enabled = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox1->Location = System::Drawing::Point(3, 479);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->Size = System::Drawing::Size(114, 23);
			this->metroTextBox1->TabIndex = 10;
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->Click += gcnew System::EventHandler(this, &matrix_form::metroTextBox1_Click);
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel1->Location = System::Drawing::Point(3, 451);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(96, 25);
			this->metroLabel1->TabIndex = 9;
			this->metroLabel1->Text = L"Determinat";
			this->metroLabel1->Click += gcnew System::EventHandler(this, &matrix_form::metroLabel1_Click);
			// 
			// metroGrid1
			// 
			this->metroGrid1->AllowDrop = true;
			this->metroGrid1->AllowUserToAddRows = false;
			this->metroGrid1->AllowUserToDeleteRows = false;
			this->metroGrid1->AllowUserToResizeRows = false;
			this->metroGrid1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle204->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle204->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle204->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle204->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle204->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle204->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle204;
			this->metroGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid1->ColumnHeadersVisible = false;
			this->metroGrid1->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle205->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle205->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), 
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle205->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle205->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle205->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle205->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle205->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid1->DefaultCellStyle = dataGridViewCellStyle205;
			this->metroGrid1->EnableHeadersVisualStyles = false;
			this->metroGrid1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid1->GridColor = System::Drawing::Color::White;
			this->metroGrid1->Location = System::Drawing::Point(135, 67);
			this->metroGrid1->Name = L"metroGrid1";
			this->metroGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle206->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle206->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle206->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle206->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle206->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle206->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle206->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid1->RowHeadersDefaultCellStyle = dataGridViewCellStyle206;
			this->metroGrid1->RowHeadersVisible = false;
			this->metroGrid1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle207->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle207->NullValue = nullptr;
			this->metroGrid1->RowsDefaultCellStyle = dataGridViewCellStyle207;
			this->metroGrid1->RowTemplate->Height = 40;
			this->metroGrid1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid1->Size = System::Drawing::Size(928, 535);
			this->metroGrid1->TabIndex = 8;
			this->metroGrid1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid1_CellContentClick_1);
			this->metroGrid1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid1_CellEndEdit_1);
			this->metroGrid1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &matrix_form::metroGrid1_DragDrop);
			this->metroGrid1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &matrix_form::metroGrid1_DragEnter);
			this->metroGrid1->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &matrix_form::metroGrid1_DragOver);
			this->metroGrid1->DragLeave += gcnew System::EventHandler(this, &matrix_form::metroGrid1_DragLeave);
			this->metroGrid1->GiveFeedback += gcnew System::Windows::Forms::GiveFeedbackEventHandler(this, &matrix_form::metroGrid1_GiveFeedback);
			this->metroGrid1->QueryContinueDrag += gcnew System::Windows::Forms::QueryContinueDragEventHandler(this, &matrix_form::metroGrid1_QueryContinueDrag);
			this->metroGrid1->Enter += gcnew System::EventHandler(this, &matrix_form::metroGrid1_Enter);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->numericUpDown1->Location = System::Drawing::Point(135, 39);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(68, 22);
			this->numericUpDown1->TabIndex = 7;
			this->numericUpDown1->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &matrix_form::numericUpDown1_ValueChanged_1);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->numericUpDown2->Location = System::Drawing::Point(61, 65);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(68, 22);
			this->numericUpDown2->TabIndex = 6;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &matrix_form::numericUpDown2_ValueChanged_1);
			// 
			// metroTabControl1
			// 
			this->metroTabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroTabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->metroTabControl1->Controls->Add(this->metroTabPage2);
			this->metroTabControl1->Controls->Add(this->metroTabPage1);
			this->metroTabControl1->Controls->Add(this->Transpose);
			this->metroTabControl1->Controls->Add(this->metroTabPage3);
			this->metroTabControl1->Controls->Add(this->metroTabPage14);
			this->metroTabControl1->Controls->Add(this->metroTabPage4);
			this->metroTabControl1->Controls->Add(this->metroTabPage5);
			this->metroTabControl1->Controls->Add(this->metroTabPage17);
			this->metroTabControl1->Controls->Add(this->metroTabPage18);
			this->metroTabControl1->FontSize = MetroFramework::MetroTabControlSize::Tall;
			this->metroTabControl1->Location = System::Drawing::Point(11, 50);
			this->metroTabControl1->Name = L"metroTabControl1";
			this->metroTabControl1->SelectedIndex = 1;
			this->metroTabControl1->Size = System::Drawing::Size(1257, 657);
			this->metroTabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->metroTabControl1->Style = MetroFramework::MetroColorStyle::Orange;
			this->metroTabControl1->TabIndex = 8;
			this->metroTabControl1->UseSelectable = true;
			this->metroTabControl1->Selecting += gcnew System::Windows::Forms::TabControlCancelEventHandler(this, &matrix_form::metroTabControl1_Selecting);
			this->metroTabControl1->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabControl1_Enter);
			// 
			// metroTabPage17
			// 
			this->metroTabPage17->Controls->Add(this->metroButton15);
			this->metroTabPage17->Controls->Add(this->metroGrid20);
			this->metroTabPage17->HorizontalScrollbarBarColor = true;
			this->metroTabPage17->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage17->HorizontalScrollbarSize = 21;
			this->metroTabPage17->Location = System::Drawing::Point(4, 47);
			this->metroTabPage17->Name = L"metroTabPage17";
			this->metroTabPage17->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage17->TabIndex = 9;
			this->metroTabPage17->Text = L"Extra Reduced";
			this->metroTabPage17->VerticalScrollbarBarColor = true;
			this->metroTabPage17->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage17->VerticalScrollbarSize = 10;
			this->metroTabPage17->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage17_Enter);
			// 
			// metroButton15
			// 
			this->metroButton15->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton15->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton15->Location = System::Drawing::Point(3, 15);
			this->metroButton15->Name = L"metroButton15";
			this->metroButton15->Size = System::Drawing::Size(118, 35);
			this->metroButton15->TabIndex = 13;
			this->metroButton15->Text = L"Save";
			this->metroButton15->UseSelectable = true;
			this->metroButton15->Click += gcnew System::EventHandler(this, &matrix_form::metroButton15_Click);
			// 
			// metroGrid20
			// 
			this->metroGrid20->AllowUserToAddRows = false;
			this->metroGrid20->AllowUserToDeleteRows = false;
			this->metroGrid20->AllowUserToResizeRows = false;
			this->metroGrid20->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid20->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid20->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle208->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle208->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle208->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle208->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle208->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle208->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle208->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid20->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle208;
			this->metroGrid20->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid20->ColumnHeadersVisible = false;
			dataGridViewCellStyle209->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle209->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle209->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle209->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle209->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle209->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle209->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid20->DefaultCellStyle = dataGridViewCellStyle209;
			this->metroGrid20->EnableHeadersVisualStyles = false;
			this->metroGrid20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid20->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid20->Location = System::Drawing::Point(3, 66);
			this->metroGrid20->Name = L"metroGrid20";
			this->metroGrid20->ReadOnly = true;
			this->metroGrid20->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle210->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle210->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle210->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle210->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle210->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle210->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle210->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid20->RowHeadersDefaultCellStyle = dataGridViewCellStyle210;
			this->metroGrid20->RowHeadersVisible = false;
			this->metroGrid20->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid20->RowTemplate->Height = 40;
			this->metroGrid20->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid20->Size = System::Drawing::Size(1107, 537);
			this->metroGrid20->TabIndex = 12;
			this->metroGrid20->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid20_CellContentClick);
			// 
			// metroTabPage18
			// 
			this->metroTabPage18->Controls->Add(this->metroLabel30);
			this->metroTabPage18->Controls->Add(this->metroLabel29);
			this->metroTabPage18->Controls->Add(this->metroLabel28);
			this->metroTabPage18->Controls->Add(this->metroGrid29);
			this->metroTabPage18->Controls->Add(this->metroGrid28);
			this->metroTabPage18->Controls->Add(this->metroGrid27);
			this->metroTabPage18->HorizontalScrollbarBarColor = true;
			this->metroTabPage18->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage18->HorizontalScrollbarSize = 11;
			this->metroTabPage18->Location = System::Drawing::Point(4, 47);
			this->metroTabPage18->Name = L"metroTabPage18";
			this->metroTabPage18->Size = System::Drawing::Size(1249, 606);
			this->metroTabPage18->TabIndex = 10;
			this->metroTabPage18->Text = L"Spand\'s Spaces ";
			this->metroTabPage18->VerticalScrollbarBarColor = true;
			this->metroTabPage18->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage18->VerticalScrollbarSize = 10;
			this->metroTabPage18->Enter += gcnew System::EventHandler(this, &matrix_form::metroTabPage18_Enter);
			// 
			// metroLabel30
			// 
			this->metroLabel30->AutoSize = true;
			this->metroLabel30->BackColor = System::Drawing::Color::Transparent;
			this->metroLabel30->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel30->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->metroLabel30->Location = System::Drawing::Point(1022, 40);
			this->metroLabel30->Name = L"metroLabel30";
			this->metroLabel30->Size = System::Drawing::Size(93, 25);
			this->metroLabel30->Style = MetroFramework::MetroColorStyle::Black;
			this->metroLabel30->TabIndex = 23;
			this->metroLabel30->Text = L"Null Space";
			this->metroLabel30->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// metroLabel29
			// 
			this->metroLabel29->AutoSize = true;
			this->metroLabel29->BackColor = System::Drawing::Color::Transparent;
			this->metroLabel29->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel29->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->metroLabel29->Location = System::Drawing::Point(601, 40);
			this->metroLabel29->Name = L"metroLabel29";
			this->metroLabel29->Size = System::Drawing::Size(129, 25);
			this->metroLabel29->Style = MetroFramework::MetroColorStyle::Black;
			this->metroLabel29->TabIndex = 22;
			this->metroLabel29->Text = L"Columns Space";
			this->metroLabel29->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// metroLabel28
			// 
			this->metroLabel28->AutoSize = true;
			this->metroLabel28->BackColor = System::Drawing::Color::Transparent;
			this->metroLabel28->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel28->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->metroLabel28->Location = System::Drawing::Point(170, 40);
			this->metroLabel28->Name = L"metroLabel28";
			this->metroLabel28->Size = System::Drawing::Size(94, 25);
			this->metroLabel28->Style = MetroFramework::MetroColorStyle::Black;
			this->metroLabel28->TabIndex = 21;
			this->metroLabel28->Text = L"Row Space";
			this->metroLabel28->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// metroGrid29
			// 
			this->metroGrid29->AllowUserToAddRows = false;
			this->metroGrid29->AllowUserToDeleteRows = false;
			this->metroGrid29->AllowUserToResizeRows = false;
			this->metroGrid29->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid29->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid29->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid29->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle211->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle211->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle211->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle211->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle211->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle211->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid29->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle211;
			this->metroGrid29->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid29->ColumnHeadersVisible = false;
			this->metroGrid29->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle212->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle212->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle212->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle212->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle212->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle212->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle212->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid29->DefaultCellStyle = dataGridViewCellStyle212;
			this->metroGrid29->EnableHeadersVisualStyles = false;
			this->metroGrid29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid29->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid29->Location = System::Drawing::Point(881, 68);
			this->metroGrid29->Name = L"metroGrid29";
			this->metroGrid29->ReadOnly = true;
			this->metroGrid29->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle213->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle213->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle213->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle213->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle213->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle213->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle213->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid29->RowHeadersDefaultCellStyle = dataGridViewCellStyle213;
			this->metroGrid29->RowHeadersVisible = false;
			this->metroGrid29->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle214->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle214->NullValue = nullptr;
			this->metroGrid29->RowsDefaultCellStyle = dataGridViewCellStyle214;
			this->metroGrid29->RowTemplate->Height = 20;
			this->metroGrid29->RowTemplate->ReadOnly = true;
			this->metroGrid29->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid29->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid29->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid29->Size = System::Drawing::Size(430, 400);
			this->metroGrid29->TabIndex = 20;
			this->metroGrid29->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid29_CellContentClick);
			// 
			// metroGrid28
			// 
			this->metroGrid28->AllowUserToAddRows = false;
			this->metroGrid28->AllowUserToDeleteRows = false;
			this->metroGrid28->AllowUserToResizeRows = false;
			this->metroGrid28->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid28->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid28->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid28->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle215->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle215->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle215->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle215->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle215->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle215->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid28->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle215;
			this->metroGrid28->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid28->ColumnHeadersVisible = false;
			this->metroGrid28->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle216->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle216->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle216->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle216->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle216->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle216->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle216->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid28->DefaultCellStyle = dataGridViewCellStyle216;
			this->metroGrid28->EnableHeadersVisualStyles = false;
			this->metroGrid28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid28->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid28->Location = System::Drawing::Point(445, 68);
			this->metroGrid28->Name = L"metroGrid28";
			this->metroGrid28->ReadOnly = true;
			this->metroGrid28->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle217->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle217->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle217->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle217->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle217->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle217->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle217->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid28->RowHeadersDefaultCellStyle = dataGridViewCellStyle217;
			this->metroGrid28->RowHeadersVisible = false;
			this->metroGrid28->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle218->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle218->NullValue = nullptr;
			this->metroGrid28->RowsDefaultCellStyle = dataGridViewCellStyle218;
			this->metroGrid28->RowTemplate->Height = 20;
			this->metroGrid28->RowTemplate->ReadOnly = true;
			this->metroGrid28->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid28->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid28->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid28->Size = System::Drawing::Size(430, 400);
			this->metroGrid28->TabIndex = 19;
			this->metroGrid28->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid28_CellContentClick);
			// 
			// metroGrid27
			// 
			this->metroGrid27->AllowUserToAddRows = false;
			this->metroGrid27->AllowUserToDeleteRows = false;
			this->metroGrid27->AllowUserToResizeRows = false;
			this->metroGrid27->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid27->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid27->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid27->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle219->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle219->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle219->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle219->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle219->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle219->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid27->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle219;
			this->metroGrid27->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid27->ColumnHeadersVisible = false;
			this->metroGrid27->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle220->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle220->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle220->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle220->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle220->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle220->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle220->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid27->DefaultCellStyle = dataGridViewCellStyle220;
			this->metroGrid27->EnableHeadersVisualStyles = false;
			this->metroGrid27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid27->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid27->Location = System::Drawing::Point(8, 68);
			this->metroGrid27->Name = L"metroGrid27";
			this->metroGrid27->ReadOnly = true;
			this->metroGrid27->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle221->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle221->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle221->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle221->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle221->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle221->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle221->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid27->RowHeadersDefaultCellStyle = dataGridViewCellStyle221;
			this->metroGrid27->RowHeadersVisible = false;
			this->metroGrid27->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle222->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle222->NullValue = nullptr;
			this->metroGrid27->RowsDefaultCellStyle = dataGridViewCellStyle222;
			this->metroGrid27->RowTemplate->Height = 20;
			this->metroGrid27->RowTemplate->ReadOnly = true;
			this->metroGrid27->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid27->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid27->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid27->Size = System::Drawing::Size(430, 400);
			this->metroGrid27->TabIndex = 18;
			this->metroGrid27->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &matrix_form::metroGrid27_CellContentClick);
			// 
			// metroLabel32
			// 
			this->metroLabel32->AutoSize = true;
			this->metroLabel32->BackColor = System::Drawing::Color::Transparent;
			this->metroLabel32->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel32->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->metroLabel32->Location = System::Drawing::Point(1079, 62);
			this->metroLabel32->Name = L"metroLabel32";
			this->metroLabel32->Size = System::Drawing::Size(97, 25);
			this->metroLabel32->Style = MetroFramework::MetroColorStyle::Black;
			this->metroLabel32->TabIndex = 22;
			this->metroLabel32->Text = L"Matrix Info:";
			this->metroLabel32->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// matrix_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->metroTabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Coral;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"matrix_form";
			this->Padding = System::Windows::Forms::Padding(20, 60, 20, 18);
			this->Resizable = false;
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->TransparencyKey = System::Drawing::Color::LightGreen;
			this->Load += gcnew System::EventHandler(this, &matrix_form::matrix_form_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->metroTabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->metroTabPage14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid3))->EndInit();
			this->metroTabPage5->ResumeLayout(false);
			this->metroTabControl2->ResumeLayout(false);
			this->metroTabPage15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->metroTabPage6->ResumeLayout(false);
			this->metroTabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid6))->EndInit();
			this->metroTabPage7->ResumeLayout(false);
			this->metroTabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid10))->EndInit();
			this->metroTabPage8->ResumeLayout(false);
			this->metroTabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid15))->EndInit();
			this->metroTabPage9->ResumeLayout(false);
			this->metroTabPage9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid17))->EndInit();
			this->metroTabPage4->ResumeLayout(false);
			this->metroTabPage4->PerformLayout();
			this->metroTabControl3->ResumeLayout(false);
			this->metroTabPage16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->metroTabPage10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid5))->EndInit();
			this->metroTabPage11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid12))->EndInit();
			this->metroTabPage12->ResumeLayout(false);
			this->metroTabPage12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid21))->EndInit();
			this->metroTabPage13->ResumeLayout(false);
			this->metroTabPage13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid22))->EndInit();
			this->metroTabPage3->ResumeLayout(false);
			this->metroTabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid4))->EndInit();
			this->Transpose->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid2))->EndInit();
			this->metroTabPage1->ResumeLayout(false);
			this->metroTabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->metroTabControl1->ResumeLayout(false);
			this->metroTabPage17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid20))->EndInit();
			this->metroTabPage18->ResumeLayout(false);
			this->metroTabPage18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid27))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
//start functions



		

#pragma endregion
	private: System::Void matrix_form_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 if(!metroGrid1->Rows->Count){

				 grid::Change_grid(1,1,metroGrid1);	
				return;
				 }
				 matrix <long double > t = grid::get_matrix_from_formt(metroGrid1);
				 numericUpDown1->Value = t.columns() ; 
				 numericUpDown2->Value = t.rows() ; 
				grid::get_datagrid_from_matrixt(t,metroGrid1);
				
				metroTabPage1->Focus();
				metroGrid1->Focus();
				metroTabPage1_Enter(sender,e);
				metroGrid1_Enter(sender,e);

                numericUpDown1_ValueChanged_1(sender,e);

				


			 }
	private: System::Void metroGrid1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
                    			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			   
		 }
private: System::Void metroGrid1_CellBeginEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^  e) {
			 
		 }
private: System::Void metroGrid1_EditingControlShowing(System::Object^  sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^  e) {
			 	
		 }
private: System::Void metroGrid1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			
		 }

private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			
		     
		 }
private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void tabControl1_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void numericUpDown1_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
			
			 
			  grid::Change_grid( (int) numericUpDown2->Value , (int)numericUpDown1->Value , metroGrid1 );
	           if(square){
				
				 metroTextBox1->Enabled = 1;
				 metroLabel1->Enabled= 1;
				 metroLabel2->Enabled = 1;
				 metroTextBox2->Enabled = 1;
		
			 }
			 else{

				 metroTextBox1->Enabled = 0;
				 metroLabel1->Enabled = 0;
				 metroLabel2->Enabled = 0 ; 


				 metroTextBox2->Enabled = 0 ;
				 metroTextBox1->Text =  "" ;
				 metroTextBox2->Text =  "" ;
			 }
			 matrix <long double > t =  grid::get_matrix_from_formt(metroGrid1);
			 
			 if(square){
			
				 metroTextBox1->Text = Convert::ToString((Double) t.det() ) ;
				 metroTextBox2->Text = Convert::ToString( (Double) t.diag_sum());


			 }
			 metroTextBox3->Text = Convert::ToString( (Double) t.sum_element() ) ;
			 Double x = t.Rank() ;
			 metroTextBox4->Text = Convert::ToString( x ) ; 
			 metroTextBox7->Text = Convert::ToString ( t.columns() - x) ;
			  vector<string> v = t.info() ;
			 String ^S = "" ;
			 for(int i=0;i<v.size();i++) S= S + grid::string_To_String(v[i]) +"\n" ;
			 
			 metroLabel31->Text = S;

		 }
private: System::Void numericUpDown2_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
			  grid::Change_grid( (int) numericUpDown2->Value , (int)numericUpDown1->Value , metroGrid1 );
	           if(square){
				
				 metroTextBox1->Enabled = 1;
				 metroLabel1->Enabled= 1;
				 metroLabel2->Enabled = 1;
				 metroTextBox2->Enabled = 1;
		

			 }
			 else{

				  metroTextBox1->Enabled = 0;
				 metroLabel1->Enabled = 0;
				 metroLabel2->Enabled = 0 ; 

				 metroTextBox2->Enabled = 0 ;
				 metroTextBox1->Text =  "" ;
				 metroTextBox2->Text =  "" ;
				 
				 
			 }
			 matrix <long double > t =  grid::get_matrix_from_formt(metroGrid1);
			 if(square){
			
				 metroTextBox1->Text = Convert::ToString((Double) t.det() ) ;
				 metroTextBox2->Text = Convert::ToString( (Double) t.diag_sum());


			 }
			 metroTextBox3->Text = Convert::ToString( (Double) t.sum_element() ) ;
			 Double x = t.Rank() ;
			 metroTextBox4->Text = Convert::ToString( x ) ; 
			 metroTextBox7->Text = Convert::ToString ( t.columns() - x) ;
			  vector<string> v = t.info() ;
			 String ^S = "" ;
			 for(int i=0;i<v.size();i++) S= S + grid::string_To_String(v[i]) +"\n" ;
			 
			 metroLabel31->Text = S;

		 }
private: System::Void metroGrid1_CellEndEdit_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			  try{
				 
				 Convert::ToDouble(metroGrid1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
			 	matrix <long double > t =  grid::get_matrix_from_formt(metroGrid1);
			 if(square){
			
				 metroTextBox1->Text = Convert::ToString((Double) t.det() ) ;
				 metroTextBox2->Text = Convert::ToString( (Double) t.diag_sum());
			 }
			 else{

				 		 metroTextBox1->Text = "";
				 metroTextBox2->Text = "";

			 }
			 metroTextBox3->Text = Convert::ToString( (Double) t.sum_element() ) ;
			Double x = t.Rank() ;
			 metroTextBox4->Text = Convert::ToString( x ) ; 
			 metroTextBox7->Text = Convert::ToString ( t.columns() - x) ;
			 vector<string> v = t.info() ;
			 String ^S = "" ;
			 for(int i=0;i<v.size();i++) S= S + grid::string_To_String(v[i]) +"\n" ;
			 
			 metroLabel31->Text = S;

				 
				 
			
		 }
private: System::Void Transpose_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 
		 }
private: System::Void Transpose_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 
		 }
private: System::Void Transpose_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e) {
		 
		 }
private: System::Void Transpose_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 
		 }
private: System::Void Transpose_Enter(System::Object^  sender, System::EventArgs^  e) {
			 grid::get_datagrid_from_matrixt( grid::get_matrix_from_formt(metroGrid1).transit() , metroGrid2) ;

		 }
private: System::Void metroTabControl1_Enter(System::Object^  sender, System::EventArgs^  e) {
                        

		 }
private: System::Void metroButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid2,metroGrid1);
			 numericUpDown2->Value = metroGrid2->Rows->Count ;
			 numericUpDown1->Value = metroGrid2->Columns->Count ;
			numericUpDown1_ValueChanged_1(sender,e);
			 
		 }
private: System::Void metroTabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage2_Enter(System::Object^  sender, System::EventArgs^  e) {
			

		 }
private: System::Void metroButton1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid3,metroGrid1);
			 
		 }
private: System::Void metroTabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void metroTabPage3_Enter(System::Object^  sender, System::EventArgs^  e) {
	
			 matrix <long double > t = grid::get_matrix_from_formt(metroGrid1) ;
			 if( (square) && t.det() ){
				 metroGrid4->Visible = 1;
				 metroButton2->Visible = 1;
			 grid::get_datagrid_from_matrixt(t.reverse(),metroGrid4);
			 metroLabel7->Visible = 0 ;
			 metroLabel8->Visible = 0 ;
			 return ; 
			 }
			 else if ( !(square) )
				 {
					 metroLabel7->Visible = 1;
					 metroLabel8->Visible = 0 ; 
			 }
			 else {
				 metroLabel8->Visible = 1;
				 metroLabel7->Visible = 0 ;
			 }
			 metroGrid4->Visible = 0 ;
			 metroButton2->Visible =0 ; 


		 }
private: System::Void metroTabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabControl1_Selecting(System::Object^  sender, System::Windows::Forms::TabControlCancelEventArgs^  e) {
			
		 }
private: System::Void metroTabPage4_Enter(System::Object^  sender, System::EventArgs^  e) {
//Hoooooooooon            
			 if(square) 
			 {
				 metroTabControl3->Visible =1 ;
				 metroLabel9->Visible = 0 ;
				 metroLabel9->Visible = 0;
				
				// return;
			 }
			 else {
				 metroLabel9->Visible = 1;
				 metroTabControl3->Visible =0 ;
				 metroLabel9->Visible = 1; 
				 return;
			 }
			  metroButton14->Enabled = 0 ;
			 matrix <long double > t  =grid::get_matrix_from_formt(metroGrid1);
			 
			 vector <ld> eng = matapp::Eginvalues( t) ;
			 vector<pair<long double, matrix<long double > >  > v = matapp::find_eginvectors( t,eng) ;
			 metroComboBox1->Items->Clear() ; 
			
			 for(int i=0;i<v.size();i++)
			 {
				 metroComboBox1->Items->Add(sender);
				 metroComboBox1->Items[i] = "Ev" + Convert::ToString(i) + " = " + Convert::ToString(  (Double) v[i].first ) ;
			 }

		  	 grid::copy_grid2(metroGrid1,metroGrid22);
			 pair< matrix<long double> , matrix<long double> > p = matapp::can_diag(t,eng);
			 if( p.second.rows() > 1  && p.second[0][1] == -1   ){
				 metroGrid22->Visible = 0 ;
				 metroGrid23->Visible = 0 ;
				 metroGrid24->Visible = 0 ;
				 metroGrid25->Visible = 0 ;
				 metroGrid26->Visible = 0 ;
				 metroLabel27->Visible = 1 ;
				 metroLabel14->Visible = 0 ;
				 metroLabel15->Visible = 0 ;
				 metroLabel16->Visible = 0 ;
				 metroLabel17->Visible = 0 ;
				 metroLabel18->Visible = 0 ;
				 metroLabel19->Visible = 0 ;
				 metroLabel20->Visible = 0;
				 metroButton14->Visible = 0 ;

				 return ;
			 }
			 metroButton14->Visible = 1 ;
			 metroLabel27->Visible = 0 ;
			 metroGrid22->Visible = 1 ;
				 metroGrid23->Visible = 1 ;
				 metroGrid24->Visible = 1 ;
				 metroGrid25->Visible = 1 ;
				 metroGrid26->Visible = 1 ;
				 
				 metroLabel14->Visible = 1 ;
				 metroLabel15->Visible = 1 ;
				 metroLabel16->Visible = 1 ;
				 metroLabel17->Visible = 1 ;
				 metroLabel18->Visible = 1 ;
				 metroLabel19->Visible = 1 ;
				 metroLabel20->Visible = 1;

			 grid::get_datagrid_from_matrixt2(p.first , metroGrid23 ) ;
			 grid::get_datagrid_from_matrixt2(p.second , metroGrid24 ) ;
			 grid::get_datagrid_from_matrixt2(p.first.reverse() , metroGrid25 ) ;
			 for( int i=0 ; i < metroGrid26->Columns->Count; i++) metroGrid26->Columns->Clear() ; 
			 for( int i=0 ; i < metroGrid26->Rows->Count; i++) metroGrid26->Rows->Clear() ;
			 grid::copy_grid(metroGrid24,metroGrid26);
			  
			  


		 }
private: System::Void metroButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid5,metroGrid1);
			 numericUpDown1_ValueChanged_1(sender,e);
			
		 }
private: System::Void metroButton2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  grid::copy_grid(metroGrid4,metroGrid1);
			  numericUpDown1_ValueChanged_1(sender,e);
		 }
private: System::Void metroGrid4_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroTextBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTextBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage1_Click(System::Object^  sender, System::EventArgs^  e) {

			 		 }
private: System::Void metroTextBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage6_Enter(System::Object^  sender, System::EventArgs^  e) {
			 hover =0 ;
			 metroGrid8->Enabled = 0 ;
			 metroGrid8->Columns->Clear();
			 metroGrid8->Rows->Clear();
			 grid::copy_grid2(metroGrid1,metroGrid6);
			 //for(int i=0;i<metroGrid6->Columns->Count ; i++) metroGrid6->Columns[i]->Width = 20 ;
			 matrix <long double > t ( (int ) metroGrid1->Rows->Count , (int) metroGrid1->Columns->Count , 0 );
			 grid::get_datagrid_from_matrixt2( t,metroGrid7 ) ;
			 grid::copy_grid(metroGrid6,metroGrid9);
			 metroButton5->Enabled =  0 ; 


		 }
private: System::Void metroGrid6_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
private: System::Void metroTabPage6_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void metroGrid9_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
private: System::Void metroGrid7_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid6_Enter(System::Object^  sender, System::EventArgs^  e) {
			  
		 }
private: System::Void metroGrid6_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void metroGrid6_MouseHover(System::Object^  sender, System::EventArgs^  e) {
       
		 }
private: System::Void metroGrid6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
  
	   grid::copy_grid(metroGrid6,metroGrid9);			
		 metroGrid9->ReadOnly = 1 ;
		 }
private: System::Void metroGrid7_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void metroGrid9_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 try{
				 
				 Convert::ToDouble(metroGrid9->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid9->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
			 grid::copy_grid2(metroGrid9,metroGrid7);
			 grid::get_datagrid_from_matrixt2( grid::get_matrix_from_formt(metroGrid7)+grid::get_matrix_from_formt(metroGrid6) , metroGrid8) ;
			 metroGrid8->Enabled = 1 ;
			 metroButton5->Enabled = 1;

		 }
private: System::Void metroGrid7_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void metroGrid8_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 grid::copy_grid( metroGrid8 , metroGrid9 ) ;
			  metroGrid9->ReadOnly = 1 ;
		 }
private: System::Void metroGrid7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		 grid::copy_grid(metroGrid7,metroGrid9);			
		      metroGrid9->ReadOnly = 0 ;
		 }
private: System::Void metroTabPage5_Click(System::Object^  sender, System::EventArgs^  e) {
		

			  if(square) metroLabel10->Visible = 1;
			 else metroLabel10->Visible = 0;
		 }
private: System::Void metroButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid8,metroGrid1);
			 grid::copy_grid2(metroGrid8,metroGrid6);
			 numericUpDown1_ValueChanged_1(sender,e);
		 }
private: System::Void metroToggle1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  
		
			 
		 }
private: System::Void metroButton6_Click(System::Object^  sender, System::EventArgs^  e) {
			 metroTabPage6_Enter(sender,e);
		 }
private: System::Void metroTabControl2_Enter(System::Object^  sender, System::EventArgs^  e) {
             
			  if(square) metroLabel10->Visible = 1;
			 else metroLabel10->Visible = 0;
		 }
private: System::Void metroTabPage7_Enter(System::Object^  sender, System::EventArgs^  e) {
			

			 metroGrid13->Enabled = 0 ;
			 metroGrid13->Columns->Clear();
			 metroGrid13->Rows->Clear();
			 grid::copy_grid2(metroGrid1,metroGrid10);
			 for(int i=0;i<metroGrid10->Columns->Count ; i++) metroGrid10->Columns[i]->Width = SMALL_WIDTH ;
			
			
			 grid::copy_grid(metroGrid10,metroGrid14);
			  metroButton8->Enabled =  0 ; 
			  numericUpDown3->Enabled = 0 ; 
			  

			  matrix <long double > t( (int) metroGrid1->Columns->Count , (int) numericUpDown3->Value , 0 ) ;
			  grid::get_datagrid_from_matrixt2(t,metroGrid11);


		 }
private: System::Void metroGrid10_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
private: System::Void metroGrid13_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroTabPage7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid14_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroButton8_Click(System::Object^  sender, System::EventArgs^  e) {
             numericUpDown2->Value = metroGrid13->Rows->Count ;
			 numericUpDown1->Value =  metroGrid13->Columns->Count ;
			 grid::copy_grid(metroGrid13,metroGrid1);
       		 
			 grid::copy_grid2(metroGrid13,metroGrid10);
			 numericUpDown1_ValueChanged_1(sender,e);
			 

		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 int m = (int ) numericUpDown3->Value ;
			 int n = (int ) metroGrid1->Columns->Count ;
			 grid::Change_grid(n,m,metroGrid11);
			 grid::copy_grid( metroGrid11,metroGrid14);

		 }
private: System::Void metroGrid11_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid10_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 grid::copy_grid(metroGrid10,metroGrid14);
			numericUpDown3->Enabled = 0;
			 metroGrid14->ReadOnly = 1 ;
		 }
private: System::Void metroGrid11_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 grid::copy_grid(metroGrid11,metroGrid14);
			  numericUpDown3->Enabled = 1;
			 metroGrid14->ReadOnly = 0 ;
		 }
private: System::Void metroGrid13_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
			 grid::copy_grid(metroGrid13,metroGrid14);
			 numericUpDown3->Enabled = 0;
			 metroGrid14->ReadOnly = 1 ;
		 }
private: System::Void metroGrid14_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 //ana hon

			 try{
				 
				 Convert::ToDouble(metroGrid14->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid14->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
			 grid::copy_grid2(metroGrid14,metroGrid11);
			 grid::get_datagrid_from_matrixt2( grid::get_matrix_from_formt(metroGrid10)*grid::get_matrix_from_formt(metroGrid11) , metroGrid13) ;
			 metroGrid13->Enabled = 1 ;
			 metroButton8->Enabled = 1;
		 }
private: System::Void metroButton7_Click(System::Object^  sender, System::EventArgs^  e) {
			 metroTabPage7_Enter(sender,e);
			
			 grid::copy_grid(metroGrid10,metroGrid14);
		 }
private: System::Void metroTabPage8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //ana hon
			 
		 }
private: System::Void metroGrid15_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
private: System::Void metroGrid16_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroTextBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTextBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ( Char::IsLetter(e->KeyChar) ) { e->Handled = 1 ; return; } 
		 }
private: System::Void metroTabPage8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage8_Enter(System::Object^  sender, System::EventArgs^  e) {
			  metroTextBox5->Text = "0" ;
			 grid::copy_grid(metroGrid1 ,metroGrid15);
			 metroGrid16->Columns->Clear();
			 metroGrid16->Rows->Clear();
			 metroButton9->Enabled = 0;
		 }
private: System::Void metroButton9_Click(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid16,metroGrid1);
			 grid::copy_grid(metroGrid16,metroGrid15);
			 metroTextBox5->Text = "0" ;
			 metroGrid16->Columns->Clear();
			 metroGrid16->Rows->Clear();
			 metroButton9->Enabled = 0;
			 numericUpDown1_ValueChanged_1(sender,e);

		 }
private: System::Void metroTabPage9_Enter(System::Object^  sender, System::EventArgs^  e) {
			 //i'm here
			 if ( square ){ 
			 grid::copy_grid(metroGrid1,metroGrid17);
			 metroTextBox6->Text = "0";
			 metroGrid18->Columns->Clear();
			 metroGrid18->Rows->Clear();
			 metroButton10->Enabled = 0;
			 metroGrid17->Visible = 1;
			 metroGrid18->Visible = 1;
			 metroButton10->Visible = 1;
			 metroTextBox6->Visible =1 ;
			 metroLabel10->Visible = 0;
			 metroLabel6->Visible = 1;
			 metroButton13->Visible = 1;

			 return ; 
			 }
			 metroButton13->Visible = 0;
			 metroGrid17->Visible = 0;
			 metroGrid18->Visible = 0;
			 metroButton10->Visible = 0;
			 metroTextBox6->Visible =0 ;
			 metroLabel10->Visible = 1;
			 metroLabel6->Visible = 0 ;


		 }
private: System::Void metroGrid17_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		       
		 }
private: System::Void metroTextBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid18_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroButton10_Click(System::Object^  sender, System::EventArgs^  e) {
                  
			 grid::copy_grid(metroGrid18,metroGrid1);
			 grid::copy_grid(metroGrid18,metroGrid17);
			 metroTextBox6->Text = "0" ;
			 metroGrid18->Columns->Clear();
			 metroGrid18->Rows->Clear();
			 metroButton10->Enabled = 0;
			 numericUpDown1_ValueChanged_1(sender,e);
		 }
private: System::Void metroTextBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 
			 if( Char::IsLetter(e->KeyChar) ) e->Handled = 1; 
			 }

		 private: System::Void metroButton13_Click(System::Object^  sender, System::EventArgs^  e) {
           
			long long n = 1;
			try{
				n=Convert::ToInt64(metroTextBox6->Text) ;
			}
			catch(...){metroTextBox6->Text = "1"; } 


			matrix <long double > t = grid::get_matrix_from_formt(metroGrid17) ;
			 if(n<0 && ! t.det() ){

				 MetroMessageBox::Show(this,"The Determinat Of The Matrix Is Equal To Zero " , "Warring " ,MessageBoxButtons::OK , MessageBoxIcon::Information ) ;
				 return ;
			 }
			 grid::get_datagrid_from_matrixt(t^n,metroGrid18);
			 metroButton10->Enabled = 1;

		  }

private: System::Void metroTabPage9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage10_Enter(System::Object^  sender, System::EventArgs^  e) {
       

			 grid::get_datagrid_from_matrixt( grid::get_matrix_from_formt(metroGrid1).Same() , metroGrid5 );
			
		 }
private: System::Void metroTabPage11_Enter(System::Object^  sender, System::EventArgs^  e) {
			 //Hooon
			 grid::copy_grid ( metroGrid1 , metroGrid12 ) ;
			 matrix <long double > t ( (int) metroGrid1->Rows->Count , (int) metroGrid1->Columns->Count , 0 ) ;
			 grid::get_datagrid_from_matrixt(t,metroGrid19) ;
			 metroButton11->Enabled = 0 ;

		 }
private: System::Void metroTabControl3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel9_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid12_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid19_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
private: System::Void metroGrid19_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 try{
				 Convert::ToDouble( metroGrid19->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());

			 }
			 catch(...){
				 metroGrid19->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
			 metroButton11->Enabled = 1;
		 }
private: System::Void metroButton11_Click(System::Object^  sender, System::EventArgs^  e) {
			   
			 
				bool ok =matapp::Is_Same(grid::get_matrix_from_formt(metroGrid19) ,grid::get_matrix_from_formt(metroGrid12)) ;
				if(ok) MetroMessageBox::Show(this,"The Matrices Are Similars ","Success",MessageBoxButtons::OK,MessageBoxIcon::Information);
				else MetroMessageBox::Show(this,"The Matrices Are Not Similars ","Failed",MessageBoxButtons::OK,MessageBoxIcon::Information);
		
             
		 }
private: System::Void metroToolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
		 }
private: System::Void metroTabPage12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
         

			   
	    	 matrix <long double > t  =grid::get_matrix_from_formt(metroGrid1);
			
			 vector <ld> eng = matapp::Eginvalues( t) ;
			 vector<pair<long double, matrix<long double > >  > v = matapp::find_eginvectors( t,eng) ;
			 grid::get_datagrid_from_matrixt ( v[metroComboBox1->SelectedIndex].second , metroGrid21 );
			 
			 



		 }
		 public:
			 string String_to_string(String ^S){

				 string s="";
				 for(int i=0,n=S->Length;i<n;i++)
				   s+= (char) S[i];
			//	 s+= (char)'.';
			//	s+=(char)'m';
			////	s+=(char)'a';
			//	s+=(char)'t';
				 return s;

			 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
             
			 
			 if( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ) { 
		
			grid::get_matrix_from_formt(metroGrid1).savef(String_to_string(saveFileDialog1->FileName)) ;

			 }
	

             


		  
		 }
private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void toolStripContainer1_ContentPanel_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
                               
			if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ){

				matrix <long double> t ; 
				string s= String_to_string( openFileDialog1->FileName ) ;
				try{
					t.loadf(s);
				}
				catch(...){

					MetroMessageBox::Show(this," Can't Open File -_- ","Error",MessageBoxButtons::OK,MessageBoxIcon::Warning);
					return;
				}
				//grid::get_datagrid_from_matrixt(t,metroGrid1);
				
				if(t.rows() == t.columns() ){
				
				 metroTextBox1->Enabled = 1;
				 metroLabel1->Enabled = 1;
				 metroLabel2->Enabled = 1;
				 metroTextBox2->Enabled = 1;
				

				 

			 }
			 else{

				 metroTextBox1->Enabled = 0;
				 metroTextBox1->Text =  "" ;
				 metroTextBox2->Text =  "" ;
				 metroLabel1->Enabled= 0;
				 metroLabel2->Enabled = 0 ; 
				 metroTextBox2->Enabled = 0 ;
				 
			 }
			 numericUpDown2->Value  = t.rows() ;
			 numericUpDown1->Value = t.columns();
			 grid::get_datagrid_from_matrixt(t,metroGrid1);
			 if(square){
			
				 metroTextBox1->Text = Convert::ToString((Double) t.det() ) ;
				 metroTextBox2->Text = Convert::ToString( (Double) t.diag_sum());


			 }
			 metroTextBox3->Text = Convert::ToString( (Double) t.sum_element() ) ;
			 Double x = t.Rank() ;
			 metroTextBox4->Text = Convert::ToString( x ) ; 
			 metroTextBox7->Text = Convert::ToString ( t.columns() - x) ; 
		
			}

		 }
private: System::Void metroGrid3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }

private: System::Void metroTabPage14_Enter(System::Object^  sender, System::EventArgs^  e) {
			  matrix <long double > t= grid::get_matrix_from_formt(metroGrid1);
			 matrix <long double > f  = t.reducedform() ;
			 grid::get_datagrid_from_matrixt(f,metroGrid3);
		 }
private: System::Void metroButton1_Click_2(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid3,metroGrid1);
			 numericUpDown1_ValueChanged_1(sender,e);
		 }
private: System::Void metroGrid3_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid21_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroComboBox1_Validated(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void metroComboBox1_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
			 metroComboBox1->SelectedIndex;
		 
		 }
private: System::Void metroGrid22_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid23_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		
		 }
private: System::Void metroGrid24_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid25_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid26_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid22_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 grid::copy_grid(metroGrid22,metroGrid26);
			 metroButton14->Enabled = 1;
		 }
private: System::Void metroGrid23_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 	 grid::copy_grid(metroGrid23,metroGrid26);
				 metroButton14->Enabled = 1;
		 }
private: System::Void metroGrid24_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 	 grid::copy_grid(metroGrid24,metroGrid26);
				 metroButton14->Enabled = 1;
		 }
private: System::Void metroGrid25_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		     	 grid::copy_grid(metroGrid25,metroGrid26);
				 metroButton14->Enabled = 1;
		 }
private: System::Void Res(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroButton12_Click(System::Object^  sender, System::EventArgs^  e) {
			 double long n  = 1; 
			 try{

				 n=Convert::ToDouble(metroTextBox5->Text) ;

			 }
			 catch(...) {
			 metroTextBox5->Text= "1";
			 }
			 grid::get_datagrid_from_matrixt( grid::get_matrix_from_formt(metroGrid15) *n , metroGrid16) ;
			  metroButton9->Enabled = 1;

		 }


private: System::Void metroLabel12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void metroTabControl3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel23_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel24_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel25_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel26_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel27_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel15_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel18_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage5_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if(square) metroLabel10->Visible = 1;
			 else metroLabel10->Visible = 0;
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroTabPage2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroButton14_Click(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid26,metroGrid1);
			 metroTabPage4_Enter(sender,e);
			 numericUpDown1_ValueChanged_1(sender,e);
		 }
private: System::Void metroTabPage17_Enter(System::Object^  sender, System::EventArgs^  e) {

			 
			 grid::get_datagrid_from_matrixt(  grid::get_matrix_from_formt(metroGrid1).jor_reducedform() , metroGrid20) ;
				

		 }
private: System::Void metroGrid20_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {



		 }
private: System::Void metroButton15_Click(System::Object^  sender, System::EventArgs^  e) {
			 grid::copy_grid(metroGrid20,metroGrid1);
			  numericUpDown1_ValueChanged_1(sender,e);
		 }

private: System::Void metroTextBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 
		 }
private: System::Void metroGrid1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		 }
private: System::Void metroGrid1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		 }
private: System::Void metroGrid1_DragLeave(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid1_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		 }
private: System::Void metroGrid1_GiveFeedback(System::Object^  sender, System::Windows::Forms::GiveFeedbackEventArgs^  e) {
		 }
private: System::Void metroGrid1_QueryContinueDrag(System::Object^  sender, System::Windows::Forms::QueryContinueDragEventArgs^  e) {
		 }
private: System::Void metroTabPage18_Enter(System::Object^  sender, System::EventArgs^  e) {

			 matrix <ld> t= grid::get_matrix_from_formt(metroGrid1);
			 grid::get_datagrid_from_matrixt(matapp::spanrows(t).base,metroGrid27);
			 grid::get_datagrid_from_matrixt(matapp::spancolumns(t).base,metroGrid28);
			 grid::get_datagrid_from_matrixt(matapp::nullspace(t).base,metroGrid29);
			 
		 }
private: System::Void metroGrid27_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid28_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid29_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroLabel31_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}