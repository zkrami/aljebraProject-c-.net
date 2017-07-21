#pragma once
#include "vector_space.h"
#include "grid.h"

namespace Finale {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;
	using namespace MetroFramework::Controls;
	using namespace MetroFramework;
	/// <summary>
	/// Summary for spaces_form
	/// </summary>
	public ref class spaces_form : public MetroForm
	{
	public:
		spaces_form(void)
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
		~spaces_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroTabControl^  metroTabControl1;
	protected: 
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage1;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage2;
	private: MetroFramework::Controls::MetroGrid^  metroGrid1;
	private: MetroFramework::Controls::MetroGrid^  metroGrid4;
	private: MetroFramework::Controls::MetroGrid^  metroGrid3;

	private: MetroFramework::Controls::MetroGrid^  metroGrid2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: MetroFramework::Controls::MetroGrid^  metroGrid5;
	private: MetroFramework::Controls::MetroGrid^  metroGrid6;
	private: MetroFramework::Controls::MetroButton^  metroButton3;

	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;


	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel7;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: MetroFramework::Controls::MetroButton^  metroButton4;
	private: MetroFramework::Controls::MetroButton^  metroButton5;

	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(spaces_form::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->metroTabControl1 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage3 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->metroTabPage1 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid4 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid3 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid2 = (gcnew MetroFramework::Controls::MetroGrid());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid1 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage2 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid6 = (gcnew MetroFramework::Controls::MetroGrid());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid5 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTabControl1->SuspendLayout();
			this->metroTabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->metroTabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->BeginInit();
			this->metroTabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid5))->BeginInit();
			this->SuspendLayout();
			// 
			// metroTabControl1
			// 
			this->metroTabControl1->Controls->Add(this->metroTabPage3);
			this->metroTabControl1->Controls->Add(this->metroTabPage1);
			this->metroTabControl1->Controls->Add(this->metroTabPage2);
			this->metroTabControl1->Location = System::Drawing::Point(23, 50);
			this->metroTabControl1->Name = L"metroTabControl1";
			this->metroTabControl1->SelectedIndex = 1;
			this->metroTabControl1->Size = System::Drawing::Size(1234, 647);
			this->metroTabControl1->Style = MetroFramework::MetroColorStyle::Orange;
			this->metroTabControl1->TabIndex = 0;
			this->metroTabControl1->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTabControl1->UseSelectable = true;
			// 
			// metroTabPage3
			// 
			this->metroTabPage3->Controls->Add(this->pictureBox1);
			this->metroTabPage3->HorizontalScrollbarBarColor = true;
			this->metroTabPage3->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->HorizontalScrollbarSize = 10;
			this->metroTabPage3->Location = System::Drawing::Point(4, 38);
			this->metroTabPage3->Name = L"metroTabPage3";
			this->metroTabPage3->Size = System::Drawing::Size(1226, 605);
			this->metroTabPage3->TabIndex = 2;
			this->metroTabPage3->Text = L"About";
			this->metroTabPage3->VerticalScrollbarBarColor = true;
			this->metroTabPage3->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->VerticalScrollbarSize = 10;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1230, 609);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// metroTabPage1
			// 
			this->metroTabPage1->Controls->Add(this->metroButton5);
			this->metroTabPage1->Controls->Add(this->metroButton4);
			this->metroTabPage1->Controls->Add(this->metroLabel1);
			this->metroTabPage1->Controls->Add(this->metroLabel4);
			this->metroTabPage1->Controls->Add(this->metroLabel3);
			this->metroTabPage1->Controls->Add(this->metroLabel2);
			this->metroTabPage1->Controls->Add(this->metroButton2);
			this->metroTabPage1->Controls->Add(this->metroButton1);
			this->metroTabPage1->Controls->Add(this->metroGrid4);
			this->metroTabPage1->Controls->Add(this->metroGrid3);
			this->metroTabPage1->Controls->Add(this->metroGrid2);
			this->metroTabPage1->Controls->Add(this->numericUpDown1);
			this->metroTabPage1->Controls->Add(this->metroGrid1);
			this->metroTabPage1->HorizontalScrollbarBarColor = true;
			this->metroTabPage1->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->HorizontalScrollbarSize = 10;
			this->metroTabPage1->Location = System::Drawing::Point(4, 38);
			this->metroTabPage1->Name = L"metroTabPage1";
			this->metroTabPage1->Size = System::Drawing::Size(1226, 605);
			this->metroTabPage1->TabIndex = 0;
			this->metroTabPage1->Text = L"Linear Transformation";
			this->metroTabPage1->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTabPage1->VerticalScrollbarBarColor = true;
			this->metroTabPage1->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->VerticalScrollbarSize = 10;
			this->metroTabPage1->Click += gcnew System::EventHandler(this, &spaces_form::metroTabPage1_Click);
			this->metroTabPage1->Enter += gcnew System::EventHandler(this, &spaces_form::metroTabPage1_Enter);
			// 
			// metroButton4
			// 
			this->metroButton4->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton4->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton4->Location = System::Drawing::Point(100, 104);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(120, 20);
			this->metroButton4->TabIndex = 22;
			this->metroButton4->Text = L"Standard Base";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &spaces_form::metroButton4_Click);
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel1->FontWeight = MetroFramework::MetroLabelWeight::Regular;
			this->metroLabel1->Location = System::Drawing::Point(27, 17);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(149, 25);
			this->metroLabel1->TabIndex = 21;
			this->metroLabel1->Text = L"Space Dimension";
			// 
			// metroLabel4
			// 
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel4->FontWeight = MetroFramework::MetroLabelWeight::Regular;
			this->metroLabel4->Location = System::Drawing::Point(1000, 0);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(199, 25);
			this->metroLabel4->TabIndex = 20;
			this->metroLabel4->Text = L"Transform Coordinates ";
			// 
			// metroLabel3
			// 
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel3->FontWeight = MetroFramework::MetroLabelWeight::Regular;
			this->metroLabel3->Location = System::Drawing::Point(691, 99);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(67, 25);
			this->metroLabel3->TabIndex = 19;
			this->metroLabel3->Text = L"Base 2:";
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel2->FontWeight = MetroFramework::MetroLabelWeight::Regular;
			this->metroLabel2->Location = System::Drawing::Point(27, 99);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(67, 25);
			this->metroLabel2->TabIndex = 18;
			this->metroLabel2->Text = L"Base 1:";
			// 
			// metroButton2
			// 
			this->metroButton2->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton2->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton2->Location = System::Drawing::Point(1081, 30);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(118, 35);
			this->metroButton2->TabIndex = 16;
			this->metroButton2->Text = L"From  2 to 1 ";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &spaces_form::metroButton2_Click);
			// 
			// metroButton1
			// 
			this->metroButton1->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton1->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton1->Location = System::Drawing::Point(1081, 71);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(118, 35);
			this->metroButton1->TabIndex = 15;
			this->metroButton1->Text = L"From 1 To 2";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &spaces_form::metroButton1_Click);
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
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->metroGrid4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid4->ColumnHeadersVisible = false;
			this->metroGrid4->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid4->DefaultCellStyle = dataGridViewCellStyle2;
			this->metroGrid4->EnableHeadersVisualStyles = false;
			this->metroGrid4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid4->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid4->Location = System::Drawing::Point(691, 535);
			this->metroGrid4->Name = L"metroGrid4";
			this->metroGrid4->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
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
			this->metroGrid4->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->metroGrid4->RowHeadersVisible = false;
			this->metroGrid4->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->NullValue = nullptr;
			this->metroGrid4->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->metroGrid4->RowTemplate->Height = 40;
			this->metroGrid4->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid4->Size = System::Drawing::Size(508, 42);
			this->metroGrid4->TabIndex = 14;
			this->metroGrid4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid4_CellContentClick);
			this->metroGrid4->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid4_CellEndEdit);
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
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->metroGrid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid3->ColumnHeadersVisible = false;
			this->metroGrid3->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid3->DefaultCellStyle = dataGridViewCellStyle6;
			this->metroGrid3->EnableHeadersVisualStyles = false;
			this->metroGrid3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid3->Location = System::Drawing::Point(27, 537);
			this->metroGrid3->Name = L"metroGrid3";
			this->metroGrid3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid3->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->metroGrid3->RowHeadersVisible = false;
			this->metroGrid3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->NullValue = nullptr;
			this->metroGrid3->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->metroGrid3->RowTemplate->Height = 40;
			this->metroGrid3->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid3->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid3->Size = System::Drawing::Size(508, 40);
			this->metroGrid3->TabIndex = 13;
			this->metroGrid3->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid3_CellEndEdit);
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
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->metroGrid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid2->ColumnHeadersVisible = false;
			this->metroGrid2->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid2->DefaultCellStyle = dataGridViewCellStyle10;
			this->metroGrid2->EnableHeadersVisualStyles = false;
			this->metroGrid2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid2->Location = System::Drawing::Point(691, 125);
			this->metroGrid2->Name = L"metroGrid2";
			this->metroGrid2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid2->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->metroGrid2->RowHeadersVisible = false;
			this->metroGrid2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->NullValue = nullptr;
			this->metroGrid2->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->metroGrid2->RowTemplate->Height = 40;
			this->metroGrid2->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid2->Size = System::Drawing::Size(508, 404);
			this->metroGrid2->TabIndex = 11;
			this->metroGrid2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid2_CellContentClick);
			this->metroGrid2->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid2_CellEndEdit);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(27, 45);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(81, 20);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &spaces_form::numericUpDown1_ValueChanged);
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
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->metroGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid1->ColumnHeadersVisible = false;
			this->metroGrid1->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid1->DefaultCellStyle = dataGridViewCellStyle14;
			this->metroGrid1->EnableHeadersVisualStyles = false;
			this->metroGrid1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid1->Location = System::Drawing::Point(27, 127);
			this->metroGrid1->Name = L"metroGrid1";
			this->metroGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid1->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->metroGrid1->RowHeadersVisible = false;
			this->metroGrid1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle16->NullValue = nullptr;
			this->metroGrid1->RowsDefaultCellStyle = dataGridViewCellStyle16;
			this->metroGrid1->RowTemplate->Height = 40;
			this->metroGrid1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid1->Size = System::Drawing::Size(508, 404);
			this->metroGrid1->TabIndex = 9;
			this->metroGrid1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid1_CellContentClick);
			this->metroGrid1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid1_CellEndEdit);
			// 
			// metroTabPage2
			// 
			this->metroTabPage2->Controls->Add(this->metroLabel8);
			this->metroTabPage2->Controls->Add(this->metroLabel7);
			this->metroTabPage2->Controls->Add(this->metroLabel6);
			this->metroTabPage2->Controls->Add(this->metroLabel5);
			this->metroTabPage2->Controls->Add(this->metroButton3);
			this->metroTabPage2->Controls->Add(this->metroGrid6);
			this->metroTabPage2->Controls->Add(this->numericUpDown3);
			this->metroTabPage2->Controls->Add(this->numericUpDown2);
			this->metroTabPage2->Controls->Add(this->metroGrid5);
			this->metroTabPage2->HorizontalScrollbarBarColor = true;
			this->metroTabPage2->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->HorizontalScrollbarSize = 10;
			this->metroTabPage2->Location = System::Drawing::Point(4, 38);
			this->metroTabPage2->Name = L"metroTabPage2";
			this->metroTabPage2->Size = System::Drawing::Size(1226, 605);
			this->metroTabPage2->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTabPage2->TabIndex = 1;
			this->metroTabPage2->Text = L"Vector Space Basis";
			this->metroTabPage2->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTabPage2->VerticalScrollbarBarColor = true;
			this->metroTabPage2->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->VerticalScrollbarSize = 10;
			this->metroTabPage2->Click += gcnew System::EventHandler(this, &spaces_form::metroTabPage2_Click);
			this->metroTabPage2->Enter += gcnew System::EventHandler(this, &spaces_form::metroTabPage2_Enter);
			// 
			// metroLabel8
			// 
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->Location = System::Drawing::Point(645, 123);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(25, 19);
			this->metroLabel8->TabIndex = 19;
			this->metroLabel8->Text = L"S=";
			this->metroLabel8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// metroLabel7
			// 
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(12, 145);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(21, 323);
			this->metroLabel7->TabIndex = 18;
			this->metroLabel7->Text = L"N\r\nu\r\nm\r\nb\r\ne\r\nr\r\n \r\no\r\nf\r\n \r\nV\r\ne\r\nc\r\nt\r\no\r\nr\r\ns";
			this->metroLabel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// metroLabel6
			// 
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(51, 71);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(131, 19);
			this->metroLabel6->TabIndex = 17;
			this->metroLabel6->Text = L"Number of Variables";
			this->metroLabel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// metroLabel5
			// 
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(801, 122);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(0, 0);
			this->metroLabel5->TabIndex = 16;
			this->metroLabel5->Click += gcnew System::EventHandler(this, &spaces_form::metroLabel5_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton3->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton3->Location = System::Drawing::Point(571, 81);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(118, 35);
			this->metroButton3->TabIndex = 14;
			this->metroButton3->Text = L"Check";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &spaces_form::metroButton3_Click);
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
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->metroGrid6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid6->ColumnHeadersVisible = false;
			this->metroGrid6->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid6->DefaultCellStyle = dataGridViewCellStyle18;
			this->metroGrid6->EnableHeadersVisualStyles = false;
			this->metroGrid6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid6->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid6->Location = System::Drawing::Point(676, 122);
			this->metroGrid6->Name = L"metroGrid6";
			this->metroGrid6->ReadOnly = true;
			this->metroGrid6->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid6->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->metroGrid6->RowHeadersVisible = false;
			this->metroGrid6->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle20->NullValue = nullptr;
			this->metroGrid6->RowsDefaultCellStyle = dataGridViewCellStyle20;
			this->metroGrid6->RowTemplate->Height = 40;
			this->metroGrid6->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid6->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid6->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid6->Size = System::Drawing::Size(538, 458);
			this->metroGrid6->TabIndex = 13;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(51, 96);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(42, 20);
			this->numericUpDown3->TabIndex = 12;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &spaces_form::numericUpDown3_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(3, 122);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(42, 20);
			this->numericUpDown2->TabIndex = 11;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &spaces_form::numericUpDown2_ValueChanged_1);
			// 
			// metroGrid5
			// 
			this->metroGrid5->AllowUserToAddRows = false;
			this->metroGrid5->AllowUserToDeleteRows = false;
			this->metroGrid5->AllowUserToResizeRows = false;
			this->metroGrid5->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid5->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid5->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle21;
			this->metroGrid5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid5->ColumnHeadersVisible = false;
			this->metroGrid5->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid5->DefaultCellStyle = dataGridViewCellStyle22;
			this->metroGrid5->EnableHeadersVisualStyles = false;
			this->metroGrid5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid5->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->metroGrid5->Location = System::Drawing::Point(51, 122);
			this->metroGrid5->Name = L"metroGrid5";
			this->metroGrid5->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid5->RowHeadersDefaultCellStyle = dataGridViewCellStyle23;
			this->metroGrid5->RowHeadersVisible = false;
			this->metroGrid5->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle24->NullValue = nullptr;
			this->metroGrid5->RowsDefaultCellStyle = dataGridViewCellStyle24;
			this->metroGrid5->RowTemplate->Height = 40;
			this->metroGrid5->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid5->Size = System::Drawing::Size(538, 458);
			this->metroGrid5->TabIndex = 10;
			this->metroGrid5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid5_CellContentClick);
			this->metroGrid5->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &spaces_form::metroGrid5_CellEndEdit);
			// 
			// metroButton5
			// 
			this->metroButton5->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton5->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton5->Location = System::Drawing::Point(764, 104);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(120, 20);
			this->metroButton5->TabIndex = 23;
			this->metroButton5->Text = L"Standard Base";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &spaces_form::metroButton5_Click);
			// 
			// spaces_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->metroTabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->Name = L"spaces_form";
			this->Resizable = false;
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->Load += gcnew System::EventHandler(this, &spaces_form::spaces_form_Load);
			this->metroTabControl1->ResumeLayout(false);
			this->metroTabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->metroTabPage1->ResumeLayout(false);
			this->metroTabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->EndInit();
			this->metroTabPage2->ResumeLayout(false);
			this->metroTabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void spaces_form_Load(System::Object^  sender, System::EventArgs^  e) {
			 }



	private: System::Void metroGrid1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

				 try{
				 
				 Convert::ToDouble(metroGrid1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
			 }
private: System::Void metroGrid3_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			  try{
				 
				 Convert::ToDouble(metroGrid3->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid3->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
		 }
private: System::Void metroGrid2_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			  try{
				 
				 Convert::ToDouble(metroGrid2->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid2->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
		 }
private: System::Void metroGrid4_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			  try{
				 
				 Convert::ToDouble(metroGrid4->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid4->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 grid::Change_grid( (int) numericUpDown1->Value, (int) numericUpDown1->Value, metroGrid1);
			 grid::Change_grid( (int) 1, (int) numericUpDown1->Value, metroGrid3);
			  grid::Change_grid( (int) numericUpDown1->Value, (int) numericUpDown1->Value, metroGrid2);
			 grid::Change_grid( (int) 1, (int) numericUpDown1->Value, metroGrid4);

		 }
private: System::Void metroTabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown1_ValueChanged(sender,e);

		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			   vector_space f(grid::get_matrix_from_formt(metroGrid1));
				  vector_space g(grid::get_matrix_from_formt(metroGrid2));
				  if( ! f.is_base(f.base) || !g.is_base(g.base))
			 {
				 MetroMessageBox::Show(this,"The Matrix Is Not A Base For The Space Vector R^" + Convert::ToString( numericUpDown1->Value) ,"Falied",MessageBoxButtons::OK,MessageBoxIcon::Information);
			     return ;
			 }

			 vector <ld> v =   f.relative_coord(grid::get_matrix_from_formt(metroGrid3)(0),g.base) ;
	
			 metroGrid4->Columns->Clear();
			 metroGrid4->Rows->Clear();
			 for(int i =0;i<v.size();i++) metroGrid4->Columns->Add("Rr2r",Convert::ToString(i));
			 metroGrid4->Rows->Add();
			 for(int i =0;i<v.size();i++) metroGrid4->Rows[0]->Cells[i]->Value = Convert::ToString( (Double) v[i] );
}

		 private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				  
			vector_space f(grid::get_matrix_from_formt(metroGrid1));
				  vector_space g(grid::get_matrix_from_formt(metroGrid2));
				  if( ! f.is_base(f.base) || !g.is_base(g.base))
			 {
				 MetroMessageBox::Show(this,"The Matrix Is Not A Base For The Space Vector R^" + Convert::ToString( numericUpDown1->Value) ,"Falied",MessageBoxButtons::OK,MessageBoxIcon::Information);
			     return ;
			 }

			 vector <ld> v =   g.relative_coord(grid::get_matrix_from_formt(metroGrid4)(0),f.base) ;
	
			 metroGrid3->Columns->Clear();
			 metroGrid3->Rows->Clear();
			 for(int i =0;i<v.size();i++) metroGrid3->Columns->Add("Rr2r",Convert::ToString(i));
			 metroGrid3->Rows->Add();
			 for(int i =0;i<v.size();i++) metroGrid3->Rows[0]->Cells[i]->Value = Convert::ToString( (Double) v[i] );

}
				  
				  
				 
private: System::Void metroGrid2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid5_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }


		 
private: System::Void numericUpDown2_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 grid::Change_grid((int) numericUpDown2->Value ,(int) numericUpDown3->Value ,metroGrid5 ) ;
			 
		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			  grid::Change_grid((int) numericUpDown2->Value ,(int) numericUpDown3->Value ,metroGrid5 ) ;
		 }
private: System::Void metroGrid5_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 //fgh

			 
			  try{
				 
				 Convert::ToDouble(metroGrid5->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString());
			 }
			 catch(...){
				 metroGrid5->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }

		 }
private: System::Void metroTabPage2_Enter(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown3->Value = 1;
			 numericUpDown2->Value = 1;
			 numericUpDown3_ValueChanged(sender,e);
			 metroGrid6->Columns->Clear();
			 metroGrid6->Rows->Clear();
			 metroLabel1->Visible = 0 ;
		 }
private: System::Void metroButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 matrix <long double > t = grid::get_matrix_from_formt(metroGrid5);

			 matrix<ld> t2 ;
			 int x = t.Rank();
			 if(!x){
				  MetroMessageBox::Show(this,"This Set Doesn't Span A Vector Space!","Failed",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 return;
			 }
			 t2 = t2.Indentity_mat(x);
			 vector_space myspace(t2);
			 if(!myspace.is_base(t)){
				 	 MetroMessageBox::Show(this,"The Matrix Is Not A Base For The Space Vector R^" + Convert::ToString(x) ,"Failed",MessageBoxButtons::OK,MessageBoxIcon::Information);
					 return ;
			 }


			 vector_space mys = myspace.find_base(t,x);
			 mys.base = mys.base.transit();

			 grid::get_datagrid_from_matrixt( mys.base ,metroGrid6 ) ;
			 if ( mys.base.rows() == mys.base.columns() ) 
				 MetroMessageBox::Show(this,"The Base S Spans R^ " + Convert::ToString(mys.base.columns()) ,"Spanned Space Dimention",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 else
				 MetroMessageBox::Show(this,"The Base S Spans A Partial Space Of  R^ " + Convert::ToString(mys.base.columns()) ,"Spanned Space Dimention",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 
			 
			 metroLabel1->Visible = 1;
			 metroLabel1->Text = "The Dim Of Space Equals To  " + Convert::ToString( mys.base.rows() );

		 }
private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid4_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroLabel5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 //fsdfsdf
			 numericUpDown1_ValueChanged(sender,e);
		 }
private: System::Void metroButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 grid::get_datagrid_from_matrixt( matrix<ld>::Indentity_mat( (int)numericUpDown1->Value) ,metroGrid1 ) ;



		 }
private: System::Void metroGrid1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {



		 }
private: System::Void metroButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 grid::get_datagrid_from_matrixt( matrix<ld>::Indentity_mat( (int)numericUpDown1->Value) ,metroGrid2 ) ;
		 }
};
		 
}
		 
