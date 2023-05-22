#pragma once
#include "Registration.h"
#include<fstream>
#include<string>
#include<iostream>
#include<sstream>
#include <msclr\marshal_cppstd.h>
#include<vector>
#include "Admin.h"
#include "DonorUI.h"
#include"RecipientUi.h"
#include<Windows.h>
#include<MMsystem.h>
#include<stdio.h>
#include"Registration.h"
namespace BloodBank {

	using namespace std;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::CheckBox^ checkBox4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(482, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(780, 673);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(542, 329);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(18, 17);
			this->checkBox4->TabIndex = 13;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->ForeColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(0, 59);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(3, 516);
			this->panel5->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.25F));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(370, 436);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(83, 28);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Admin";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.25F));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(264, 436);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(104, 28);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"Recipient";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10.25F));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(182, 436);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 28);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Doner";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Enabled = false;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20.25F));
			this->button2->Location = System::Drawing::Point(146, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(305, 56);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Sign in";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Location = System::Drawing::Point(57, 306);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(475, 58);
			this->panel4->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->textBox2->Location = System::Drawing::Point(12, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(442, 28);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"PASSWORD";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(57, 242);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(475, 58);
			this->panel3->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12.25F));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(12, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(442, 28);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"EMAIL";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 10, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::SteelBlue;
			this->label5->Location = System::Drawing::Point(53, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(547, 47);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Sign in to your account so that we can import settings and adjust your experiance"
				L"";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(46, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 80);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Sign in";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(482, 673);
			this->panel2->TabIndex = 0;
			this->panel2->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20.25F));
			this->button1->Location = System::Drawing::Point(179, 488);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 56);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 13.25F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(195, 461);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"No Account\?\r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(151, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(270, 48);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Be a lifeline, donate blood \r\nsomeone is counting on you.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(116, 93);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 249);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		   
		   void readData(string fileName, vector<string>& v) {
			   fstream File;
			   File.open(fileName);
			   if (File.is_open()) {
				   string line;
				   // Read all lines from the given Text File
				   while (getline(File, line))
				   {
					   string value;
					   istringstream   linestream(line);
					   // Split every line into values "email,password ...."
					   while (getline(linestream, value, ','))
					   {
						   v.push_back(value);
					   }
				   }
			   }
			   File.close();
		   }
		   



		   //make email panel disapper when click
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "EMAIL")
		{
			textBox1->Text = "";
		}
		if (textBox2->Text == "")
		{
			textBox2->Text = "PASSWORD";
		}
	}

		   //make password panel disapper when click
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "PASSWORD")
		{
			textBox2->Text = "";
		}
		if (textBox1->Text == "")
		{
			textBox1->Text = "EMAIL";
		}
	}

		   //make email and password apper when click any where in the screen
	private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			textBox1->Text = "EMAIL";
		}
		if (textBox2->Text == "")
		{
			textBox2->Text = "PASSWORD";
		}
	}

		   //disaple reciepent and admin checkbox when donor is checked
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked)
		{
			checkBox3->Enabled = false;
			checkBox1->Enabled = false;
			button2->Enabled = true;
		}
		else
		{
			checkBox3->Enabled = true;
			checkBox1->Enabled = true;
			button2->Enabled = false;
		}

	}

		   //disaple donor and admin checkbox when reciepent is checked 
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox3->Checked)
		{
			checkBox2->Enabled = false;
			checkBox1->Enabled = false;
			button2->Enabled = true;
		}
		else
		{
			checkBox2->Enabled = true;
			checkBox1->Enabled = true;
			button2->Enabled = false;
		}
	}

		   //disaple donor and reciepent checkbox when admin is checked
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			checkBox2->Enabled = false;
			checkBox3->Enabled = false;
			button2->Enabled = true;
		}
		else
		{
			checkBox2->Enabled = true;
			checkBox3->Enabled = true;
			button2->Enabled = false;
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{

		//Read email and password from user 
		bool success = false;
		String^ email = textBox1->Text;
		string Email = msclr::interop::marshal_as<string>(email);
		String^ password = textBox2->Text;
		string PassWord = msclr::interop::marshal_as<string>(password);

		//Read form Donor file
		if (checkBox2->Checked) {
			ifstream DonorFile;
			vector<string> DonorData;
			DonorFile.open("DonorLogIn.txt");
			if (DonorFile.is_open())
			{
				string line;
				// Read all lines from the given Text File
				while (getline(DonorFile, line))
				{
					string value;
					istringstream   linestream(line);
					// Split every line into values "email,password ...."
					while (getline(linestream, value, ','))
					{
						DonorData.push_back(value);
					}
				}
				//Check if the entered email is correct or not
				for (int i = 0; i < DonorData.size() - 1; i++) {
					if (DonorData.at(i) == Email) {
						if (DonorData.at(i + 1) == PassWord) {

							success = true;
							DonorUI^ DonorForm = gcnew DonorUI(this, textBox1->Text);
							DonorForm->Show();
							this->Hide();
						}
					}
				}

				if (success == false) {

					MessageBox::Show("Error! : Wrong Email or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				DonorFile.close();
			}

		}



		else if (checkBox3->Checked) {

			ifstream RecipientFile;
			vector<string> RecipientData;
			RecipientFile.open("RecipientLogIn.txt");
			if (RecipientFile.is_open())
			{
				string line;
				// Read all lines from the given Text File
				while (getline(RecipientFile, line))
				{
					string value;
					istringstream   linestream(line);
					// Split every line into values "email,password ...."
					while (getline(linestream, value, ','))
					{
						RecipientData.push_back(value);
					}
				}
				//Check if the entered email is correct or not
				for (int i = 0; i < RecipientData.size() - 1; i++) {
					if (RecipientData.at(i) == Email) {
						if (RecipientData.at(i + 1) == PassWord) {
							success = true;
							RecipientUi^ recui = gcnew RecipientUi(this, textBox1->Text);
							recui->Show();
							this->Hide();
						}
					}
				}
				if (success == false) {

					MessageBox::Show("Error! : Wrong Email or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			RecipientFile.close();
		}



		// Admin Login
		else if (checkBox1->Checked)
		{
			if (textBox1->Text == "admin" && textBox2->Text == "admin")
			{
				Admin^ AdminForm = gcnew Admin(this);
				AdminForm->Show();
				this->Hide();
			}
			else
			{
				MessageBox::Show("Error! : Wrong Email or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Registration^ RegistrationForm = gcnew Registration(this);
		RegistrationForm->Show();
		this->Hide();
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox4->Checked)
		{
			textBox2->UseSystemPasswordChar = false;
		}
		else
		{
			textBox2->UseSystemPasswordChar = true;
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
