#pragma once
#include "matrix_form.h"
#include "Hstart.h"
#include "Equation1.h"
#include "spaces_form.h"
#include "MyForm.h"
namespace Finale {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public MetroForm
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: MetroFramework::Controls::MetroButton^  metroButton3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: MetroFramework::Controls::MetroButton^  metroButton4;
	private: MetroFramework::Controls::MetroLink^  metroLink1;








	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton1->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton1->Location = System::Drawing::Point(493, 289);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(120, 60);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->Text = L"Matrices\r\nApplications";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &Form1::metroButton1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton2->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton2->Location = System::Drawing::Point(145, 362);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(120, 60);
			this->metroButton2->TabIndex = 1;
			this->metroButton2->Text = L"Equations\r\nSolving";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &Form1::metroButton2_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton3->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton3->Location = System::Drawing::Point(213, 497);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(120, 60);
			this->metroButton3->TabIndex = 2;
			this->metroButton3->Text = L"Vector Spaces\r\nApplications";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &Form1::metroButton3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 605);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// metroButton4
			// 
			this->metroButton4->FontSize = MetroFramework::MetroButtonSize::Tall;
			this->metroButton4->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton4->Location = System::Drawing::Point(577, 454);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(120, 60);
			this->metroButton4->TabIndex = 4;
			this->metroButton4->Text = L"Encryption";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &Form1::metroButton4_Click);
			// 
			// metroLink1
			// 
			this->metroLink1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->metroLink1->FontSize = MetroFramework::MetroLinkSize::Medium;
			this->metroLink1->FontWeight = MetroFramework::MetroLinkWeight::Light;
			this->metroLink1->Location = System::Drawing::Point(23, 555);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(91, 27);
			this->metroLink1->TabIndex = 5;
			this->metroLink1->Text = L"Bug Report";
			this->metroLink1->UseCustomBackColor = true;
			this->metroLink1->UseSelectable = true;
			this->metroLink1->Click += gcnew System::EventHandler(this, &Form1::metroLink1_Click);
			// 
			// Form1
			// 
			this->ApplyImageInvert = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackImage")));
			this->ClientSize = System::Drawing::Size(800, 605);
			this->Controls->Add(this->metroLink1);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroButton3);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroButton1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::Coral;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Resizable = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			try{
				 Hstart g;
				 this->Hide();
				 g.ShowDialog();
				 this->Show();
			}
			catch(...)
			{
				throw 0;
			}
			 }
	private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e) {
         //    try{
				 matrix_form f;
				 this->Hide();
				 f.ShowDialog();
				 this->Show();
		//	 }
		//	 catch(...){

				 throw 1;
		//	 }

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 }
	private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
//			 metroComboBox1->Items->Insert(metroComboBox1->Items->Count ,sender) ;

		 }
private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {
        try{
			 this->Hide();
			 Equation1 f;
			 f.ShowDialog();
			 this->Show();
		}
		catch(...){

			throw 2;
		}
		 }
private: System::Void metroButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
			 spaces_form f;
			 this->Hide();
			 f.ShowDialog();
			 this->Show();
			 }
			 catch(...){
				 throw 3;
			 }
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void metroButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
			 MyForm f;
			 this->Hide();
			 f.ShowDialog() ;
			 this->Show();
			}
			catch(...){

				throw 4;
			}
		 }
private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process f;
				 f.Start("https://docs.google.com/forms/d/1-9eHtddeCEkazmttlRYcoeVDOf7gRrc6Ty9bg2q4bxs/viewform" );
		 }
};
}

