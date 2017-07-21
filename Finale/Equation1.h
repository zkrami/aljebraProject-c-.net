#pragma once

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

	/// <summary>
	/// Summary for Equation1
	/// </summary>
	public ref class Equation1 : public MetroForm
	{
	public:
		Equation1(void)
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
		~Equation1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroGrid^  metroGrid1;
	protected: 
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: MetroFramework::Controls::MetroGrid^  metroGrid2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  D;
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	private: MetroFramework::Controls::MetroGrid^  metroGrid3;
	private: MetroFramework::Controls::MetroTabControl^  metroTabControl1;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage1;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: MetroFramework::Controls::MetroGrid^  metroGrid4;



	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: MetroFramework::Controls::MetroGrid^  metroGrid5;



	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;

	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;




















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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Equation1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->metroGrid1 = (gcnew MetroFramework::Controls::MetroGrid());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid2 = (gcnew MetroFramework::Controls::MetroGrid());
			this->D = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid3 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabControl1 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage3 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->metroTabPage1 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTabPage2 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid5 = (gcnew MetroFramework::Controls::MetroGrid());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid4 = (gcnew MetroFramework::Controls::MetroGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid3))->BeginInit();
			this->metroTabControl1->SuspendLayout();
			this->metroTabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->metroTabPage1->SuspendLayout();
			this->metroTabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid4))->BeginInit();
			this->SuspendLayout();
			// 
			// metroGrid1
			// 
			this->metroGrid1->AllowUserToAddRows = false;
			this->metroGrid1->AllowUserToDeleteRows = false;
			this->metroGrid1->AllowUserToOrderColumns = true;
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
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
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
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->metroGrid1->Location = System::Drawing::Point(119, 62);
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
			this->metroGrid1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid1->Size = System::Drawing::Size(1018, 495);
			this->metroGrid1->TabIndex = 0;
			this->metroGrid1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid1_CellContentClick);
			this->metroGrid1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid1_CellEndEdit);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(28, 62);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(85, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Equation1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(119, 36);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(85, 20);
			this->numericUpDown2->TabIndex = 2;
			this->numericUpDown2->UpDownAlign = System::Windows::Forms::LeftRightAlignment::Left;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Equation1::numericUpDown2_ValueChanged);
			// 
			// metroGrid2
			// 
			this->metroGrid2->AllowUserToAddRows = false;
			this->metroGrid2->AllowUserToDeleteRows = false;
			this->metroGrid2->AllowUserToOrderColumns = true;
			this->metroGrid2->AllowUserToResizeRows = false;
			this->metroGrid2->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->metroGrid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid2->ColumnHeadersVisible = false;
			this->metroGrid2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->D});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid2->DefaultCellStyle = dataGridViewCellStyle5;
			this->metroGrid2->EnableHeadersVisualStyles = false;
			this->metroGrid2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->metroGrid2->Location = System::Drawing::Point(1143, 62);
			this->metroGrid2->Name = L"metroGrid2";
			this->metroGrid2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid2->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->metroGrid2->RowHeadersVisible = false;
			this->metroGrid2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid2->RowTemplate->Height = 40;
			this->metroGrid2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid2->Size = System::Drawing::Size(103, 495);
			this->metroGrid2->TabIndex = 3;
			this->metroGrid2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid2_CellContentClick);
			this->metroGrid2->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid2_CellEndEdit);
			// 
			// D
			// 
			this->D->HeaderText = L"d";
			this->D->Name = L"D";
			// 
			// metroButton1
			// 
			this->metroButton1->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton1->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton1->Location = System::Drawing::Point(119, 563);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(118, 42);
			this->metroButton1->TabIndex = 4;
			this->metroButton1->Text = L"Solve";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &Equation1::metroButton1_Click);
			// 
			// metroGrid3
			// 
			this->metroGrid3->AllowUserToAddRows = false;
			this->metroGrid3->AllowUserToDeleteRows = false;
			this->metroGrid3->AllowUserToOrderColumns = true;
			this->metroGrid3->AllowUserToResizeRows = false;
			this->metroGrid3->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
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
			this->metroGrid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->metroGrid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid3->ColumnHeadersVisible = false;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid3->DefaultCellStyle = dataGridViewCellStyle8;
			this->metroGrid3->EnableHeadersVisualStyles = false;
			this->metroGrid3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid3->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->metroGrid3->Location = System::Drawing::Point(243, 563);
			this->metroGrid3->Name = L"metroGrid3";
			this->metroGrid3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid3->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->metroGrid3->RowHeadersVisible = false;
			this->metroGrid3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid3->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid3->Size = System::Drawing::Size(1003, 42);
			this->metroGrid3->TabIndex = 5;
			this->metroGrid3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid3_CellContentClick);
			// 
			// metroTabControl1
			// 
			this->metroTabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->metroTabControl1->Controls->Add(this->metroTabPage3);
			this->metroTabControl1->Controls->Add(this->metroTabPage1);
			this->metroTabControl1->Controls->Add(this->metroTabPage2);
			this->metroTabControl1->Location = System::Drawing::Point(7, 50);
			this->metroTabControl1->Name = L"metroTabControl1";
			this->metroTabControl1->SelectedIndex = 0;
			this->metroTabControl1->Size = System::Drawing::Size(1265, 661);
			this->metroTabControl1->SizeMode = System::Windows::Forms::TabSizeMode::FillToRight;
			this->metroTabControl1->Style = MetroFramework::MetroColorStyle::Orange;
			this->metroTabControl1->TabIndex = 6;
			this->metroTabControl1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTabControl1->UseSelectable = true;
			// 
			// metroTabPage3
			// 
			this->metroTabPage3->Controls->Add(this->pictureBox1);
			this->metroTabPage3->HorizontalScrollbarBarColor = true;
			this->metroTabPage3->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->HorizontalScrollbarSize = 10;
			this->metroTabPage3->Location = System::Drawing::Point(4, 41);
			this->metroTabPage3->Name = L"metroTabPage3";
			this->metroTabPage3->Size = System::Drawing::Size(1257, 616);
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
			this->pictureBox1->Size = System::Drawing::Size(1257, 616);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// metroTabPage1
			// 
			this->metroTabPage1->Controls->Add(this->metroLabel4);
			this->metroTabPage1->Controls->Add(this->metroLabel3);
			this->metroTabPage1->Controls->Add(this->metroButton1);
			this->metroTabPage1->Controls->Add(this->metroGrid3);
			this->metroTabPage1->Controls->Add(this->metroGrid1);
			this->metroTabPage1->Controls->Add(this->metroGrid2);
			this->metroTabPage1->Controls->Add(this->numericUpDown1);
			this->metroTabPage1->Controls->Add(this->numericUpDown2);
			this->metroTabPage1->HorizontalScrollbarBarColor = true;
			this->metroTabPage1->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->HorizontalScrollbarSize = 10;
			this->metroTabPage1->Location = System::Drawing::Point(4, 41);
			this->metroTabPage1->Name = L"metroTabPage1";
			this->metroTabPage1->Size = System::Drawing::Size(1257, 616);
			this->metroTabPage1->TabIndex = 0;
			this->metroTabPage1->Text = L"Solve a System of Linear Multivariate Equations";
			this->metroTabPage1->VerticalScrollbarBarColor = true;
			this->metroTabPage1->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->VerticalScrollbarSize = 10;
			this->metroTabPage1->Click += gcnew System::EventHandler(this, &Equation1::metroTabPage1_Click);
			this->metroTabPage1->Enter += gcnew System::EventHandler(this, &Equation1::metroTabPage1_Enter);
			// 
			// metroLabel4
			// 
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(3, 85);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(115, 19);
			this->metroLabel4->TabIndex = 7;
			this->metroLabel4->Text = L"Variables Number";
			// 
			// metroLabel3
			// 
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(119, 14);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(118, 19);
			this->metroLabel3->TabIndex = 6;
			this->metroLabel3->Text = L"Equations Number";
			// 
			// metroTabPage2
			// 
			this->metroTabPage2->Controls->Add(this->metroLabel2);
			this->metroTabPage2->Controls->Add(this->metroLabel1);
			this->metroTabPage2->Controls->Add(this->metroButton2);
			this->metroTabPage2->Controls->Add(this->metroGrid5);
			this->metroTabPage2->Controls->Add(this->numericUpDown3);
			this->metroTabPage2->Controls->Add(this->metroGrid4);
			this->metroTabPage2->HorizontalScrollbarBarColor = true;
			this->metroTabPage2->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->HorizontalScrollbarSize = 10;
			this->metroTabPage2->Location = System::Drawing::Point(4, 41);
			this->metroTabPage2->Name = L"metroTabPage2";
			this->metroTabPage2->Size = System::Drawing::Size(1257, 616);
			this->metroTabPage2->TabIndex = 1;
			this->metroTabPage2->Text = L"Solve a Univariate Equation";
			this->metroTabPage2->VerticalScrollbarBarColor = true;
			this->metroTabPage2->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->VerticalScrollbarSize = 10;
			this->metroTabPage2->Enter += gcnew System::EventHandler(this, &Equation1::metroTabPage2_Enter);
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(108, 46);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(98, 19);
			this->metroLabel2->TabIndex = 10;
			this->metroLabel2->Text = L"Terms Number";
			this->metroLabel2->Click += gcnew System::EventHandler(this, &Equation1::metroLabel2_Click);
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel1->Location = System::Drawing::Point(310, 71);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(430, 125);
			this->metroLabel1->TabIndex = 9;
			this->metroLabel1->Text = L"Here in this tab you can solve one polynomial equation\r\nof level n : you should i" 
				L"nput its terms in any order .\r\n\r\nNote : The Imaginary Solutions Are Limited !\r\n";
			this->metroLabel1->Click += gcnew System::EventHandler(this, &Equation1::metroLabel1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton2->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton2->Location = System::Drawing::Point(310, 527);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(118, 35);
			this->metroButton2->TabIndex = 7;
			this->metroButton2->Text = L"Solve";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &Equation1::metroButton2_Click);
			// 
			// metroGrid5
			// 
			this->metroGrid5->AllowUserToAddRows = false;
			this->metroGrid5->AllowUserToDeleteRows = false;
			this->metroGrid5->AllowUserToOrderColumns = true;
			this->metroGrid5->AllowUserToResizeRows = false;
			this->metroGrid5->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid5->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid5->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->metroGrid5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid5->ColumnHeadersVisible = false;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), 
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)), 
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid5->DefaultCellStyle = dataGridViewCellStyle11;
			this->metroGrid5->EnableHeadersVisualStyles = false;
			this->metroGrid5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid5->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->metroGrid5->Location = System::Drawing::Point(310, 568);
			this->metroGrid5->Name = L"metroGrid5";
			this->metroGrid5->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid5->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->metroGrid5->RowHeadersVisible = false;
			this->metroGrid5->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid5->RowTemplate->Height = 40;
			this->metroGrid5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid5->Size = System::Drawing::Size(936, 37);
			this->metroGrid5->TabIndex = 6;
			this->metroGrid5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid5_CellContentClick);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(12, 46);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(90, 20);
			this->numericUpDown3->TabIndex = 3;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Equation1::numericUpDown3_ValueChanged);
			// 
			// metroGrid4
			// 
			this->metroGrid4->AllowUserToAddRows = false;
			this->metroGrid4->AllowUserToDeleteRows = false;
			this->metroGrid4->AllowUserToOrderColumns = true;
			this->metroGrid4->AllowUserToResizeRows = false;
			this->metroGrid4->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid4->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), 
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->metroGrid4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid4->ColumnHeadersVisible = false;
			this->metroGrid4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column1, this->Column2, 
				this->Column3});
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
			this->metroGrid4->DefaultCellStyle = dataGridViewCellStyle14;
			this->metroGrid4->EnableHeadersVisualStyles = false;
			this->metroGrid4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid4->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->metroGrid4->Location = System::Drawing::Point(12, 71);
			this->metroGrid4->Name = L"metroGrid4";
			this->metroGrid4->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
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
			this->metroGrid4->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->metroGrid4->RowHeadersVisible = false;
			this->metroGrid4->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->metroGrid4->RowTemplate->Height = 40;
			this->metroGrid4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid4->Size = System::Drawing::Size(292, 534);
			this->metroGrid4->TabIndex = 2;
			this->metroGrid4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid4_CellContentClick);
			this->metroGrid4->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Equation1::metroGrid4_CellEndEdit);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 25;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 115;
			// 
			// Equation1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->metroTabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Equation1";
			this->Resizable = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Load += gcnew System::EventHandler(this, &Equation1::Equation1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid3))->EndInit();
			this->metroTabControl1->ResumeLayout(false);
			this->metroTabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->metroTabPage1->ResumeLayout(false);
			this->metroTabPage1->PerformLayout();
			this->metroTabPage2->ResumeLayout(false);
			this->metroTabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->metroGrid4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	

	private: System::Void Equation1_Load(System::Object^  sender, System::EventArgs^  e) {
 				
			 }
	private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
					
				 
			
				 grid::chage_equation( (int)numericUpDown2->Value ,(int) numericUpDown1->Value , metroGrid1 , metroGrid2 ) ;			 
			       
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDown2_ValueChanged(sender,e);
		 }
private: System::Void metroGrid2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			    try{ 
				Convert::ToDouble( metroGrid1->Rows[ e->RowIndex] ->Cells[e->ColumnIndex]->Value->ToString() ) ;
		      }
			catch(...){

				 metroGrid1->Rows[ e->RowIndex] ->Cells[e->ColumnIndex]->Value= "0";
			}
		 }
private: System::Void metroGrid2_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			    try{ 
				Convert::ToDouble( metroGrid2->Rows[ e->RowIndex] ->Cells[e->ColumnIndex]->Value->ToString() ) ;
		 }
			catch(...){

				 metroGrid2->Rows[ e->RowIndex] ->Cells[e->ColumnIndex]->Value= "0";
			}
		 }
private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 equations  eq= grid::get_equation_from_data(metroGrid1,metroGrid2);
			 
			 pair<int,matrix<ld> > solves = eq.Solve2();
			 if (solves.first == -1) {
				 MetroFramework::MetroMessageBox::Show(this, "This Equations Are Impossiple To Solve  " , " There Is No Solution " , MessageBoxButtons::OK , MessageBoxIcon::Information ) ;
				 return;
			 }
			if( solves.first == 0 ){
				 vector<ld> ss;
				 if (solves.second == matrix<ld> (0,0))
					 ss = vector<ld> (eq.num_of_var(),0);
				 else
				 {
					 for(int i=0;i<solves.second.rows();i++)
						 ss.push_back(solves.second[i][solves.second.columns()-1]);
				 }
				while( metroGrid3->Columns->Count) metroGrid3->Columns->Clear();
				for(int i=0;i<ss.size();i++)  metroGrid3->Columns->Add("Rr",Convert::ToString(i)) ;
				 metroGrid3->Rows->Add();
				 String ^s;
				 for(int i=0;i<ss.size();i++) {
					 metroGrid3->Rows[0]->Cells[i]->Value = Convert::ToString( (Double) ss[i]) ;
					 s+="X"+Convert::ToString(i+1)+"= "+Convert::ToString( (Double) ss[i] ) ;
					 s+="\n";
				 }
				 MetroFramework::MetroMessageBox::Show(this, s , " There Is One Solution " , MessageBoxButtons::OK , MessageBoxIcon::Information ) ;

				 return;
			 }

			
			 String ^s;
			 rep(i,solves.second.rows())
			 {
				 cout << "X" << i+1 << " = ";
				 s+="X"+Convert::ToString(i+1)+ " = ";
				 rep(j,solves.second.columns()-1)
					if (fabsl(solves.second[i][j]) >= errop)
					{
						cout << (solves.second[i][j] > 0 ? " +" : " ");
						if (solves.second[i][j] > 0 )
							s+=" +" ;
						else
							 s+=" " ;
						if (solves.second[i][j] != 1)
							{  
								s+=Convert::ToString( (Double) solves.second[i][j] ) + " " ;
								cout << solves.second[i][j] << " ";

						}
				
						s+="X"+Convert::ToString(j+1);
						cout<< "X" << j+1;
						
					}
				if (solves.second[i][solves.second.columns()-1] != 0)
				{ 
					if (solves.second[i][solves.second.columns()-1] >= 0) s+=" +";
					else s+=" ";
					cout << (solves.second[i][solves.second.columns()-1] >= 0 ? " +" : " " ) << solves.second[i][solves.second.columns()-1]; 
					s+=Convert::ToString( (Double)solves.second[i][solves.second.columns()-1] );
				}
				s+="\n";
				cout << endl;
			 }
			  MetroFramework::MetroMessageBox::Show(this, s, " There Is Infinite Number Of Solutions " , MessageBoxButtons::OK , MessageBoxIcon::Information ) ;




		 }
private: System::Void metroGrid3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		 }
		 public: poly get_poly_form_data_grid(MetroGrid^ Dt){

			   int n = Dt->Rows->Count ;
			   poly t;
			   t.P.clear();
			   
			  
			  for(int i=0;i<n;i++)
				   t.P.push_back(make_pair( (long double) Convert::ToDouble( Dt->Rows[i]->Cells[0]->Value->ToString() ) , (int) Convert::ToInt32(Dt->Rows[i]->Cells[2]->Value->ToString()) ) ) ;	   

			 // t.shorten() ;

			   return t;
		   }
		  private: void change_poly(int n){

			
				poly p;
				p.P.clear();
				
				try{ p = get_poly_form_data_grid(metroGrid4);}
				catch(...){}
				metroGrid4->Rows->Clear();
				for(int i=0;i<n; i++ ) metroGrid4->Rows->Add() ;
				for(int i=0;i<n;i++)
			     	 for(int j=0;j<3;j++)
					 {
						 if(j==1) { metroGrid4->Rows[i]->Cells[j]->Value = "X^ "  ; metroGrid4->Rows[i]->Cells[j]->ReadOnly = 1; 
						 
						// metroGrid4->Columns[j]->Width = 20 ; 
						 } 
						 else metroGrid4->Rows[i]->Cells[j]->Value = "0";
					 }
					 int min_n = min(n, (int) p.P.size());
				for(int i=0;i<min_n;i++)
					 for(int j=0;j<3;j+=2)
						 {
							 if(!j)
								 metroGrid4->Rows[i]->Cells[j]->Value = Convert::ToString( (Double) p.P[i].first );
							 else
								 metroGrid4->Rows[i]->Cells[j]->Value = Convert::ToString( (Double) p.P[i].second ) ;
						}


			}
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
              change_poly( (int) numericUpDown3->Value) ;
		 }
private: System::Void metroGrid4_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroTabPage2_Enter(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown3_ValueChanged(sender,e);
		 }
private: System::Void metroTabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
			  
			 numericUpDown2_ValueChanged(sender,e);
			 //for(int i=0;i<metroGrid1->Columns->Count ; i++) metroGrid1->Columns[i]->Width = 200 ;
		 }
private: System::Void metroGrid4_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 if(e->ColumnIndex == 0 ) {
			 try{

				Convert::ToDouble(  metroGrid4->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString() );

			 }
			 catch(...){
			  metroGrid4->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
			 return;		
			 }
			  try{

				  Convert::ToInt32(  metroGrid4->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString() );

			 }
			 catch(...){
			  metroGrid4->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "0" ;
			 }
				
		 }
private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 poly p=get_poly_form_data_grid(metroGrid4) ;
			 p.shorten();
			 if( p.iszero() ){

				  MetroFramework::MetroMessageBox::Show(this, "There Is No Soultion   " , " Oops " , MessageBoxButtons::OK , MessageBoxIcon::Information ) ;

				  return ;
			 }
			  
			

			 vector <long double > v= p.find_solutions();
			 if(!v.size()  ){

				  MetroFramework::MetroMessageBox::Show(this, "There Is No Soultion   " , " Oops " , MessageBoxButtons::OK , MessageBoxIcon::Information ) ;

				  return ;
			 }
			  while( metroGrid5->Columns->Count) metroGrid5->Columns->Clear();
			 for(int i=0 ; i<v.size() ; i++) metroGrid5->Columns->Add("R2Ras",Convert::ToString(i));
			 metroGrid5->Rows->Add();
			 for(int i=0;i<v.size();i++)
				 metroGrid5->Rows[0]->Cells[i]->Value = Convert::ToString( (Double) v[i] )  ;

			
		 }
private: System::Void metroTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroTextBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroLabel2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void metroTabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroGrid5_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void metroGrid1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};
}
