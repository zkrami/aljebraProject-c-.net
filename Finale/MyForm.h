#pragma once
#include "encryption.h"
#include "grid.h"
namespace Finale {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;
	using namespace MetroFramework;

	using namespace MetroFramework::Controls;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public MetroForm
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	protected: 
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: MetroFramework::Controls::MetroGrid^  metroGrid1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: MetroFramework::Controls::MetroTabControl^  metroTabControl2;

	private: MetroFramework::Controls::MetroTabPage^  metroTabPage3;
	private: MetroFramework::Controls::MetroButton^  metroButton3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog3;
	private: MetroFramework::Controls::MetroButton^  metroButton4;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: MetroFramework::Controls::MetroButton^  metroButton5;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid1 = (gcnew MetroFramework::Controls::MetroGrid());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->metroTabControl2 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage1 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->metroTabPage3 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->BeginInit();
			this->metroTabControl2->SuspendLayout();
			this->metroTabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->metroTabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton1->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton1->Location = System::Drawing::Point(872, 563);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(118, 35);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->Text = L"Encrypt";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &MyForm::metroButton1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton2->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton2->Location = System::Drawing::Point(872, 522);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(118, 35);
			this->metroButton2->TabIndex = 1;
			this->metroButton2->Text = L"De-Encrypt";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &MyForm::metroButton2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(235, 18);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(66, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// metroGrid1
			// 
			this->metroGrid1->AllowUserToAddRows = false;
			this->metroGrid1->AllowUserToDeleteRows = false;
			this->metroGrid1->AllowUserToResizeRows = false;
			this->metroGrid1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->metroGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid1->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid1->DefaultCellStyle = dataGridViewCellStyle2;
			this->metroGrid1->EnableHeadersVisualStyles = false;
			this->metroGrid1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid1->Location = System::Drawing::Point(24, 44);
			this->metroGrid1->Name = L"metroGrid1";
			this->metroGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->metroGrid1->RowHeadersVisible = false;
			this->metroGrid1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid1->RowTemplate->Height = 40;
			this->metroGrid1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid1->Size = System::Drawing::Size(842, 554);
			this->metroGrid1->TabIndex = 3;
			this->metroGrid1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid1_CellContentClick);
			this->metroGrid1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid1_CellEndEdit);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text | *.txt";
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel1->Location = System::Drawing::Point(14, 13);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(215, 25);
			this->metroLabel1->Style = MetroFramework::MetroColorStyle::White;
			this->metroLabel1->TabIndex = 4;
			this->metroLabel1->Text = L"Encrypt Matrix Dimension :";
			this->metroLabel1->Click += gcnew System::EventHandler(this, &MyForm::metroLabel1_Click);
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			this->openFileDialog2->Filter = L"Decrpt | *.enc";
			this->openFileDialog2->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog2_FileOk);
			// 
			// metroTabControl2
			// 
			this->metroTabControl2->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->metroTabControl2->Controls->Add(this->metroTabPage1);
			this->metroTabControl2->Controls->Add(this->metroTabPage3);
			this->metroTabControl2->Location = System::Drawing::Point(23, 26);
			this->metroTabControl2->Name = L"metroTabControl2";
			this->metroTabControl2->SelectedIndex = 1;
			this->metroTabControl2->Size = System::Drawing::Size(1234, 671);
			this->metroTabControl2->Style = MetroFramework::MetroColorStyle::Orange;
			this->metroTabControl2->TabIndex = 7;
			this->metroTabControl2->UseSelectable = true;
			// 
			// metroTabPage1
			// 
			this->metroTabPage1->AllowDrop = true;
			this->metroTabPage1->Controls->Add(this->pictureBox1);
			this->metroTabPage1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->metroTabPage1->HorizontalScrollbarBarColor = false;
			this->metroTabPage1->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->HorizontalScrollbarSize = 10;
			this->metroTabPage1->Location = System::Drawing::Point(4, 41);
			this->metroTabPage1->Name = L"metroTabPage1";
			this->metroTabPage1->Size = System::Drawing::Size(1226, 626);
			this->metroTabPage1->TabIndex = 1;
			this->metroTabPage1->Text = L"About";
			this->metroTabPage1->VerticalScrollbar = true;
			this->metroTabPage1->VerticalScrollbarBarColor = true;
			this->metroTabPage1->VerticalScrollbarHighlightOnWheel = true;
			this->metroTabPage1->VerticalScrollbarSize = 10;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1226, 626);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// metroTabPage3
			// 
			this->metroTabPage3->Controls->Add(this->trackBar1);
			this->metroTabPage3->Controls->Add(this->metroButton5);
			this->metroTabPage3->Controls->Add(this->metroTextBox1);
			this->metroTabPage3->Controls->Add(this->metroLabel2);
			this->metroTabPage3->Controls->Add(this->metroButton4);
			this->metroTabPage3->Controls->Add(this->metroButton3);
			this->metroTabPage3->Controls->Add(this->metroButton1);
			this->metroTabPage3->Controls->Add(this->metroButton2);
			this->metroTabPage3->Controls->Add(this->metroLabel1);
			this->metroTabPage3->Controls->Add(this->metroGrid1);
			this->metroTabPage3->Controls->Add(this->numericUpDown1);
			this->metroTabPage3->HorizontalScrollbarBarColor = false;
			this->metroTabPage3->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->HorizontalScrollbarSize = 10;
			this->metroTabPage3->Location = System::Drawing::Point(4, 41);
			this->metroTabPage3->Name = L"metroTabPage3";
			this->metroTabPage3->Size = System::Drawing::Size(1226, 626);
			this->metroTabPage3->TabIndex = 0;
			this->metroTabPage3->Text = L"Encryption/Decryption Using Matrices";
			this->metroTabPage3->VerticalScrollbarBarColor = true;
			this->metroTabPage3->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->VerticalScrollbarSize = 10;
			this->metroTabPage3->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage3_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(872, 376);
			this->trackBar1->Maximum = 9;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(118, 45);
			this->trackBar1->TabIndex = 14;
			this->trackBar1->Value = 1;
			// 
			// metroButton5
			// 
			this->metroButton5->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton5->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton5->Location = System::Drawing::Point(872, 335);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(118, 35);
			this->metroButton5->TabIndex = 13;
			this->metroButton5->Text = L"Random Matrix";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &MyForm::metroButton5_Click);
			// 
			// metroTextBox1
			// 
			this->metroTextBox1->Enabled = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox1->Location = System::Drawing::Point(872, 247);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->Size = System::Drawing::Size(118, 23);
			this->metroTextBox1->TabIndex = 12;
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->Click += gcnew System::EventHandler(this, &MyForm::metroTextBox1_Click);
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel2->Location = System::Drawing::Point(872, 219);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(96, 25);
			this->metroLabel2->TabIndex = 11;
			this->metroLabel2->Text = L"Determinat";
			// 
			// metroButton4
			// 
			this->metroButton4->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton4->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton4->Location = System::Drawing::Point(872, 44);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(118, 35);
			this->metroButton4->TabIndex = 7;
			this->metroButton4->Text = L"Open";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &MyForm::metroButton4_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton3->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton3->Location = System::Drawing::Point(872, 85);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(118, 35);
			this->metroButton3->TabIndex = 6;
			this->metroButton3->Text = L"Save";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &MyForm::metroButton3_Click);
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			this->openFileDialog3->Filter = L"Matrix |  *.matrix";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Matrix | *.matrix";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->metroTabControl2);
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->EndInit();
			this->metroTabControl2->ResumeLayout(false);
			this->metroTabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->metroTabPage3->ResumeLayout(false);
			this->metroTabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 numericUpDown1_ValueChanged(sender,e);
			
			
			 }
	private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 matrix <int > t = grid::get_imatrix_from_formt(metroGrid1);
				 if(! t.det() ){

					 MetroMessageBox::Show(this,"U Can't Encrpyt With This Matrix ","The Determinat Equals To Zero " ,MessageBoxButtons::OK , MessageBoxIcon::Information ) ;
					 return ;
				 }
				 if( abs(abs(t.det())-1)>errop ) 
					 if(MetroMessageBox::Show(this,"The Determinat Of The Matrix Doesn't Equal To 1 Or -1 \nDo You Want To Continue ?!","Warring",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No ) return ;
					 //if(!n) return;
				 
				 if( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ) {
					 
					 encryp f;
					 f.name_text(grid::String_to_string(openFileDialog1->FileName));
				 
					 pair <ld,string> p= f.encrp(t);

					 String^ ss = "The Encryption Was Successful in file :" + grid::string_To_String(p.second) + "\n" + "Time: " + Convert::ToString( (Int32) p.first) + "Sec"    ;
					 
					 MetroMessageBox::Show(this,ss," Success !" ,MessageBoxButtons::OK , MessageBoxIcon::Information ) ;
					 
				 }
			 }
private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 grid::Change_grid( (Int32) numericUpDown1->Value , (Int32) numericUpDown1->Value , metroGrid1 ) ; 
			  matrix <int > t= grid::get_imatrix_from_formt(metroGrid1);
			  metroTextBox1->Text = Convert::ToString( (Int32)t.det() ) ;
		 }
private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 matrix <int > t = grid::get_imatrix_from_formt(metroGrid1);
				 if(! t.det() ){

					 MetroMessageBox::Show(this,"You Can't Encrpyt With This Matrix ","It's Determinat Equals To Zero " ,MessageBoxButtons::OK , MessageBoxIcon::Information ) ;
					 return ;
				 }
				 if( openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK ) {
					 
					 encryp f;
					 f.name_text(grid::String_to_string(openFileDialog2->FileName));
					 pair <ld,string> p= f.decryp(t);
					 String^ ss = "The Decryption Was Successful in file :" ;
					 String ^S = grid::string_To_String(p.second)  ;
					 ss = ss + S + "\n" + "Time: " +  Convert::ToString( (Int32) p.first) + "Sec" ;
					 
					 MetroMessageBox::Show(this,ss," Success !" ,MessageBoxButtons::OK , MessageBoxIcon::Information ) ;

				 }
		 }
	
private: System::Void openFileDialog2_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {


			 }
		 
 private: System::Void metroGrid1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {


			  try{

				  Convert::ToInt32( metroGrid1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString() ) ;

			  }
			  catch(...){

				  metroGrid1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0";
			  }
			  matrix <int > t= grid::get_imatrix_from_formt(metroGrid1);
			  metroTextBox1->Text = Convert::ToString( (Int32)t.det() ) ;
		  }

private: System::Void metroTabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void metroButton3_Click(System::Object^  sender, System::EventArgs^  e) {
             
			  
			 if( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK ) { 
		
			grid::get_matrix_from_formt(metroGrid1).savef(grid::String_to_string(saveFileDialog1->FileName)) ;

			 }

			 	
		 }
private: System::Void metroButton4_Click(System::Object^  sender, System::EventArgs^  e) {


			 if ( openFileDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK ){

				matrix <int> t ; 
				string s= grid::String_to_string( openFileDialog3->FileName ) ;
				try{
					t.loadf(s);
				}
				catch(...){

					MetroMessageBox::Show(this," Can't Open File -_- ","Error",MessageBoxButtons::OK,MessageBoxIcon::Warning);
					return;
				}
				if( t.rows() != t.columns() ) 
				{
						 MetroMessageBox::Show(this,"You Can Only Open A Squared Matrix "," Failed !" ,MessageBoxButtons::OK , MessageBoxIcon::Warning ) ;
			                return ;	
				} 
				grid::get_datagrid_from_matrixt(t,metroGrid1);
				numericUpDown1->Value = t.rows() ;
				metroTextBox1->Text = Convert::ToString( (Int32)t.det() ) ;
				}



		 }
private: System::Void metroTextBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroButton5_Click(System::Object^  sender, System::EventArgs^  e) {


			 int n = trackBar1->Value + 1 ;
			 matrix <int> t = matrix<int>::random_mat(n);
			 grid::get_datagrid_from_matrixt(t,metroGrid1);
			 metroTextBox1->Text  = Convert::ToString( (Int32)t.det());
			 numericUpDown1->Value = t.rows() ;
		 }
private: System::Void metroGrid1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};
}
