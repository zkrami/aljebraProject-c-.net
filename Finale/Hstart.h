#pragma once

#include <ctime>
#include <stdio.h>
#include <iostream>
#include <ios>
#include <stdlib.h>
namespace Finale {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;

	/// <summary>
	/// Summary for Hstart
	/// </summary>
	public ref class Hstart : public MetroForm
	{
	public:
		Hstart(void)
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
		~Hstart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 

	protected: 



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Hstart::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 600);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->DoubleClick += gcnew System::EventHandler(this, &Hstart::pictureBox1_DoubleClick);
			// 
			// Hstart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackImage")));
			this->ClientSize = System::Drawing::Size(400, 605);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Hstart";
			this->Resizable = false;
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Load += gcnew System::EventHandler(this, &Hstart::Hstart_Load);
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Hstart::Hstart_MouseDoubleClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

	
	private: System::Void Hstart_Load(System::Object^  sender, System::EventArgs^  e) {
			
			
			 }
	private: System::Void metroProgressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				

			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				
			 }
	private: System::Void pictureBox1_Click_2(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Hstart_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			
			 }
	private: System::Void pictureBox1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
				 
				 this->Close(); 
			 }
	};
}
