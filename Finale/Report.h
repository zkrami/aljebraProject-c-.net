#pragma once

namespace Finale {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public MetroForm
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
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
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLink1 = (gcnew MetroFramework::Controls::MetroLink());
			this->SuspendLayout();
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel1->FontWeight = MetroFramework::MetroLabelWeight::Regular;
			this->metroLabel1->Location = System::Drawing::Point(23, 125);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(365, 120);
			this->metroLabel1->TabIndex = 0;
			this->metroLabel1->Text = L"Oops!!\r\n\r\nSomthing Went Wrong\? :-(\r\n\r\nTell us about your problem by submiting thi" 
				L"s";
			this->metroLabel1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroLabel1->Click += gcnew System::EventHandler(this, &MyForm1::metroLabel1_Click);
			// 
			// metroLink1
			// 
			this->metroLink1->FontSize = MetroFramework::MetroLinkSize::Tall;
			this->metroLink1->Location = System::Drawing::Point(381, 220);
			this->metroLink1->Name = L"metroLink1";
			this->metroLink1->Size = System::Drawing::Size(60, 23);
			this->metroLink1->TabIndex = 1;
			this->metroLink1->Tag = L"https://docs.google.com/forms/d/1-9eHtddeCEkazmttlRYcoeVDOf7gRrc6Ty9bg2q4bxs/view" 
				L"form";
			this->metroLink1->Text = L"Form";
			this->metroLink1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroLink1->UseSelectable = true;
			this->metroLink1->Click += gcnew System::EventHandler(this, &MyForm1::metroLink1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 337);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroLink1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(600, 337);
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->Resizable = false;
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Text = L"Bug Report";
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void metroLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void metroLink1_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Diagnostics::Process f;
				 f.Start("https://docs.google.com/forms/d/1-9eHtddeCEkazmttlRYcoeVDOf7gRrc6Ty9bg2q4bxs/viewform" );

			 }
	};
}
	