#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include <msclr\marshal_cppstd.h>
#include <cassert>
#include<Windows.h>
#include<MMsystem.h>
#include<stdio.h>

namespace BloodBank {
	using namespace std;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	/// <summary>
	/// Summary for Recipient
	/// </summary>
	public ref class Recipient : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Recipient(void)
		{
			InitializeComponent();
		
			//
			//TODO: Add the constructor code here
			//
		}
		Recipient(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			R_BloodType->Text = "A+";
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Recipient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ R_Name;
	private: System::Windows::Forms::TextBox^ R_ID;
	private: System::Windows::Forms::TextBox^ R_Email;
	private: System::Windows::Forms::TextBox^ R_Password;
	private: System::Windows::Forms::TextBox^ R_Age;
	private: System::Windows::Forms::ComboBox^ R_BloodType;
	protected:






	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ R_Doc;

	private: System::Windows::Forms::TextBox^ R_Hospital;
	private: System::Windows::Forms::CheckBox^ Male;
	private: System::Windows::Forms::CheckBox^ Female;
	private: System::Windows::Forms::CheckBox^ AcceptTerms;
	private: System::Windows::Forms::Button^ Create_acc;











	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ backk3;
	private: System::Windows::Forms::CheckBox^ checkBox1;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Recipient::typeid));
			this->R_Name = (gcnew System::Windows::Forms::TextBox());
			this->R_ID = (gcnew System::Windows::Forms::TextBox());
			this->R_Email = (gcnew System::Windows::Forms::TextBox());
			this->R_Password = (gcnew System::Windows::Forms::TextBox());
			this->R_Age = (gcnew System::Windows::Forms::TextBox());
			this->R_BloodType = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->backk3 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Create_acc = (gcnew System::Windows::Forms::Button());
			this->AcceptTerms = (gcnew System::Windows::Forms::CheckBox());
			this->Female = (gcnew System::Windows::Forms::CheckBox());
			this->R_Doc = (gcnew System::Windows::Forms::TextBox());
			this->Male = (gcnew System::Windows::Forms::CheckBox());
			this->R_Hospital = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backk3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// R_Name
			// 
			this->R_Name->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_Name->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_Name->ForeColor = System::Drawing::Color::Black;
			this->R_Name->Location = System::Drawing::Point(28, 90);
			this->R_Name->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_Name->Name = L"R_Name";
			this->R_Name->Size = System::Drawing::Size(384, 35);
			this->R_Name->TabIndex = 1;
			this->R_Name->Text = L"Name";
			this->R_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->R_Name->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_Name_MouseClick);
			this->R_Name->TextChanged += gcnew System::EventHandler(this, &Recipient::R_Name_TextChanged);
			// 
			// R_ID
			// 
			this->R_ID->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_ID->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_ID->ForeColor = System::Drawing::Color::Black;
			this->R_ID->Location = System::Drawing::Point(28, 155);
			this->R_ID->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_ID->Name = L"R_ID";
			this->R_ID->Size = System::Drawing::Size(384, 35);
			this->R_ID->TabIndex = 5;
			this->R_ID->Text = L"ID";
			this->R_ID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->R_ID->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_ID_MouseClick);
			this->R_ID->TextChanged += gcnew System::EventHandler(this, &Recipient::R_ID_TextChanged);
			// 
			// R_Email
			// 
			this->R_Email->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_Email->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_Email->ForeColor = System::Drawing::Color::Black;
			this->R_Email->Location = System::Drawing::Point(28, 218);
			this->R_Email->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_Email->Name = L"R_Email";
			this->R_Email->Size = System::Drawing::Size(384, 35);
			this->R_Email->TabIndex = 6;
			this->R_Email->Text = L"Email";
			this->R_Email->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->R_Email->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_Email_MouseClick);
			this->R_Email->TextChanged += gcnew System::EventHandler(this, &Recipient::R_Email_TextChanged);
			// 
			// R_Password
			// 
			this->R_Password->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_Password->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_Password->ForeColor = System::Drawing::Color::Black;
			this->R_Password->Location = System::Drawing::Point(28, 283);
			this->R_Password->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_Password->Name = L"R_Password";
			this->R_Password->Size = System::Drawing::Size(384, 35);
			this->R_Password->TabIndex = 7;
			this->R_Password->Text = L"Password";
			this->R_Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->R_Password->UseSystemPasswordChar = true;
			this->R_Password->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_Password_MouseClick);
			this->R_Password->TextChanged += gcnew System::EventHandler(this, &Recipient::R_Password_TextChanged);
			// 
			// R_Age
			// 
			this->R_Age->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_Age->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_Age->ForeColor = System::Drawing::Color::Black;
			this->R_Age->Location = System::Drawing::Point(511, 90);
			this->R_Age->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_Age->Name = L"R_Age";
			this->R_Age->Size = System::Drawing::Size(384, 35);
			this->R_Age->TabIndex = 18;
			this->R_Age->Text = L"Age";
			this->R_Age->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->R_Age->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_Age_MouseClick);
			// 
			// R_BloodType
			// 
			this->R_BloodType->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_BloodType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->R_BloodType->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->R_BloodType->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_BloodType->ForeColor = System::Drawing::Color::Black;
			this->R_BloodType->FormattingEnabled = true;
			this->R_BloodType->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->R_BloodType->Location = System::Drawing::Point(511, 282);
			this->R_BloodType->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_BloodType->Name = L"R_BloodType";
			this->R_BloodType->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->R_BloodType->Size = System::Drawing::Size(384, 36);
			this->R_BloodType->TabIndex = 21;
			this->R_BloodType->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_BloodType_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->backk3);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Create_acc);
			this->panel1->Controls->Add(this->AcceptTerms);
			this->panel1->Controls->Add(this->Female);
			this->panel1->Controls->Add(this->R_Doc);
			this->panel1->Controls->Add(this->Male);
			this->panel1->Controls->Add(this->R_BloodType);
			this->panel1->Controls->Add(this->R_Hospital);
			this->panel1->Controls->Add(this->R_Name);
			this->panel1->Controls->Add(this->R_ID);
			this->panel1->Controls->Add(this->R_Age);
			this->panel1->Controls->Add(this->R_Email);
			this->panel1->Controls->Add(this->R_Password);
			this->panel1->Location = System::Drawing::Point(13, 135);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1087, 527);
			this->panel1->TabIndex = 22;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(419, 294);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 48;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Recipient::checkBox1_CheckedChanged);
			// 
			// backk3
			// 
			this->backk3->BackColor = System::Drawing::Color::Transparent;
			this->backk3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backk3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backk3.Image")));
			this->backk3->Location = System::Drawing::Point(19, 436);
			this->backk3->Name = L"backk3";
			this->backk3->Size = System::Drawing::Size(100, 50);
			this->backk3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backk3->TabIndex = 47;
			this->backk3->TabStop = false;
			this->backk3->Click += gcnew System::EventHandler(this, &Recipient::backk3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::SteelBlue;
			this->label9->Location = System::Drawing::Point(513, 256);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 23);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Blood type";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::SteelBlue;
			this->label8->Location = System::Drawing::Point(522, 194);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 23);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Doctor of the case";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(522, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 23);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Hospital";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Location = System::Drawing::Point(529, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 23);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Age";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::SteelBlue;
			this->label5->Location = System::Drawing::Point(41, 258);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 23);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(38, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 23);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(38, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 23);
			this->label3->TabIndex = 28;
			this->label3->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(38, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 23);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Name";
			// 
			// Create_acc
			// 
			this->Create_acc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Create_acc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Create_acc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Create_acc->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Create_acc->ForeColor = System::Drawing::SystemColors::Control;
			this->Create_acc->Location = System::Drawing::Point(132, 429);
			this->Create_acc->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Create_acc->Name = L"Create_acc";
			this->Create_acc->Size = System::Drawing::Size(561, 68);
			this->Create_acc->TabIndex = 26;
			this->Create_acc->Text = L"Create Account";
			this->Create_acc->UseVisualStyleBackColor = false;
			this->Create_acc->Click += gcnew System::EventHandler(this, &Recipient::Create_acc_Click);
			this->Create_acc->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::Create_acc_MouseClick);
			// 
			// AcceptTerms
			// 
			this->AcceptTerms->AutoSize = true;
			this->AcceptTerms->BackColor = System::Drawing::Color::Transparent;
			this->AcceptTerms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AcceptTerms->ForeColor = System::Drawing::Color::Black;
			this->AcceptTerms->Location = System::Drawing::Point(240, 405);
			this->AcceptTerms->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->AcceptTerms->Name = L"AcceptTerms";
			this->AcceptTerms->Size = System::Drawing::Size(341, 20);
			this->AcceptTerms->TabIndex = 24;
			this->AcceptTerms->Tag = L"";
			this->AcceptTerms->Text = L"I Agree To The Terms Of Service And Privacy Policy";
			this->AcceptTerms->UseVisualStyleBackColor = false;
			this->AcceptTerms->CheckedChanged += gcnew System::EventHandler(this, &Recipient::AcceptTerms_CheckedChanged);
			// 
			// Female
			// 
			this->Female->AutoSize = true;
			this->Female->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Female->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Female->ForeColor = System::Drawing::Color::Black;
			this->Female->Location = System::Drawing::Point(491, 360);
			this->Female->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Female->Name = L"Female";
			this->Female->Size = System::Drawing::Size(86, 25);
			this->Female->TabIndex = 25;
			this->Female->Text = L"Female";
			this->Female->UseVisualStyleBackColor = true;
			this->Female->CheckedChanged += gcnew System::EventHandler(this, &Recipient::Female_CheckedChanged);
			this->Female->Click += gcnew System::EventHandler(this, &Recipient::Female_CheckedChanged);
			// 
			// R_Doc
			// 
			this->R_Doc->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_Doc->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_Doc->ForeColor = System::Drawing::Color::Black;
			this->R_Doc->Location = System::Drawing::Point(511, 217);
			this->R_Doc->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_Doc->Name = L"R_Doc";
			this->R_Doc->Size = System::Drawing::Size(384, 35);
			this->R_Doc->TabIndex = 20;
			this->R_Doc->Text = L"Doctor of the case";
			this->R_Doc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->R_Doc->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_Doc_MouseClick);
			this->R_Doc->TextChanged += gcnew System::EventHandler(this, &Recipient::R_Doc_TextChanged);
			// 
			// Male
			// 
			this->Male->AutoSize = true;
			this->Male->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Male->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Male->ForeColor = System::Drawing::Color::Black;
			this->Male->Location = System::Drawing::Point(323, 361);
			this->Male->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Male->Name = L"Male";
			this->Male->Size = System::Drawing::Size(67, 25);
			this->Male->TabIndex = 24;
			this->Male->Text = L"Male";
			this->Male->UseVisualStyleBackColor = true;
			this->Male->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::Male_MouseClick);
			// 
			// R_Hospital
			// 
			this->R_Hospital->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R_Hospital->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_Hospital->ForeColor = System::Drawing::Color::Black;
			this->R_Hospital->Location = System::Drawing::Point(511, 156);
			this->R_Hospital->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->R_Hospital->Name = L"R_Hospital";
			this->R_Hospital->Size = System::Drawing::Size(384, 35);
			this->R_Hospital->TabIndex = 19;
			this->R_Hospital->Text = L"Hospital";
			this->R_Hospital->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->R_Hospital->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Recipient::R_Hospital_MouseClick);
			this->R_Hospital->TextChanged += gcnew System::EventHandler(this, &Recipient::R_Hospital_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(44, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(189, 161);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(241, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(582, 71);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Create new Account";
			// 
			// Recipient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->MinimizeBox = false;
			this->Name = L"Recipient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recipient";
			this->Load += gcnew System::EventHandler(this, &Recipient::Recipient_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backk3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AcceptTerms_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Female_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// lock "Male" checkBox if "Female" checkBox was Checked
		if (Female->Checked) {

			Male->Enabled = false;
		}
		else
			Male->Enabled = true;
	}
	private: System::Void Male_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// lock "Female" checkBox if "Male" checkBox was Checked
		if (Male->Checked) {

			Female->Enabled = false;
		}
		else
			Female->Enabled = true;


	}
	private: System::Void R_Name_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_Name->Text == "Name")
		{
			R_Name->Text = "";
		}
		if (R_ID->Text == "")
		{
			R_ID->Text = "ID";
		}
		if (R_Email->Text == "")
		{
			R_Email->Text = "Email";
		}
		if (R_Password->Text == "")
		{
			R_Password->Text = "Password";
		}
		if (R_Age->Text == "")
		{
			R_Age->Text = "Age";
		}
		if (R_Hospital->Text == "")
		{
			R_Hospital->Text = "Hospital";
		}
		if (R_Doc->Text == "")
		{
			R_Doc->Text = "Doctor of the case";
		}
		if (R_BloodType->Text == "")
		{
			R_BloodType->Text = "  Blood Type";
		}
	}
	private: System::Void R_ID_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_ID->Text == "ID")
		{
			R_ID->Text = "";
		}
		if (R_Name->Text == "")
		{
			R_Name->Text = "Name";
		}
		if (R_Email->Text == "")
		{
			R_Email->Text = "Email";
		}
		if (R_Password->Text == "")
		{
			R_Password->Text = "Password";
		}
		if (R_Age->Text == "")
		{
			R_Age->Text = "Age";
		}
		if (R_Hospital->Text == "")
		{
			R_Hospital->Text = "Hospital";
		}
		if (R_Doc->Text == "")
		{
			R_Doc->Text = "Doctor of the case";
		}
		if (R_BloodType->Text == "")
		{
			R_BloodType->Text = "  Blood Type";
		}
	}
	private: System::Void R_Email_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_Email->Text == "Email")
		{
			R_Email->Text = "";
		}
		if (R_ID->Text == "")
		{
			R_ID->Text = "ID";
		}
		if (R_Name->Text == "")
		{
			R_Name->Text = "Name";
		}
		if (R_Password->Text == "")
		{
			R_Password->Text = "Password";
		}
		if (R_Age->Text == "")
		{
			R_Age->Text = "Age";
		}
		if (R_Hospital->Text == "")
		{
			R_Hospital->Text = "Hospital";
		}
		if (R_Doc->Text == "")
		{
			R_Doc->Text = "Doctor of the case";
		}
		if (R_BloodType->Text == "")
		{
			R_BloodType->Text = "  Blood Type";
		}
	}
	private: System::Void R_Password_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_Password->Text == "Password")
		{
			R_Password->Text = "";
		}
		if (R_Email->Text == "")
		{
			R_Email->Text = "Email";
		}
		if (R_ID->Text == "")
		{
			R_ID->Text = "ID";
		}
		if (R_Name->Text == "")
		{
			R_Name->Text = "Name";
		}
		if (R_Age->Text == "")
		{
			R_Age->Text = "Age";
		}
		if (R_Hospital->Text == "")
		{
			R_Hospital->Text = "Hospital";
		}
		if (R_Doc->Text == "")
		{
			R_Doc->Text = "Doctor of the case";
		}
		if (R_BloodType->Text == "")
		{
			R_BloodType->Text = "  Blood Type";
		}
	}
	private: System::Void R_Age_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_Age->Text == "Age")
		{
			R_Age->Text = "";
		}
		if (R_Name->Text == "")
		{
			R_Name->Text = "Name";
		}
		if (R_Password->Text == "")
		{
			R_Password->Text = "Password";
		}
		if (R_Email->Text == "")
		{
			R_Email->Text = "Email";
		}
		if (R_ID->Text == "")
		{
			R_ID->Text = "ID";
		}
		if (R_Hospital->Text == "")
		{
			R_Hospital->Text = "Hospital";
		}
		if (R_Doc->Text == "")
		{
			R_Doc->Text = "Doctor of the case";
		}
		if (R_BloodType->Text == "")
		{
			R_BloodType->Text = "  Blood Type";
		}
	}
	private: System::Void R_Hospital_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_Hospital->Text == "Hospital")
		{
			R_Hospital->Text = "";
		}
		if (R_Doc->Text == "")
		{
			R_Doc->Text = "Doctor of the case";
		}
		if (R_Age->Text == "")
		{
			R_Age->Text = "Age";
		}
		if (R_Name->Text == "")
		{
			R_Name->Text = "Name";
		}
		if (R_Password->Text == "")
		{
			R_Password->Text = "Password";
		}
		if (R_Email->Text == "")
		{
			R_Email->Text = "Email";
		}
		if (R_ID->Text == "")
		{
			R_ID->Text = "ID";
		}
		if (R_BloodType->Text == "")
		{
			R_BloodType->Text = "  Blood Type";
		}
	}
	private: System::Void R_Doc_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_Doc->Text == "Doctor of the case")
		{
			R_Doc->Text = "";
		}
		if (R_Hospital->Text == "")
		{
			R_Hospital->Text = "Hospital";
		}
		if (R_Age->Text == "")
		{
			R_Age->Text = "Age";
		}
		if (R_Name->Text == "")
		{
			R_Name->Text = "Name";
		}
		if (R_Password->Text == "")
		{
			R_Password->Text = "Password";
		}
		if (R_Email->Text == "")
		{
			R_Email->Text = "Email";
		}
		if (R_ID->Text == "")
		{
			R_ID->Text = "ID";
		}
		if (R_BloodType->Text == "")
		{
			R_BloodType->Text = "  Blood Type";
		}
	}
	private: System::Void R_BloodType_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Handle Cursor
		if (R_BloodType->Text == "  Blood Type")
		{
			R_BloodType->Text = "";
		}
		if (R_Doc->Text == "")
		{
			R_Doc->Text = "Doctor of the case";
		}
		if (R_Hospital->Text == "")
		{
			R_Hospital->Text = "Hospital";
		}
		if (R_Age->Text == "")
		{
			R_Age->Text = "Age";
		}
		if (R_Name->Text == "")
		{
			R_Name->Text = "Name";
		}
		if (R_Password->Text == "")
		{
			R_Password->Text = "Password";
		}
		if (R_Email->Text == "")
		{
			R_Email->Text = "Email";
		}
		if (R_ID->Text == "")
		{
			R_ID->Text = "ID";
		}
	}
	private: System::Void Create_acc_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// if all fields not filled show ERROR!!
		String^ PassWord = R_Password->Text;
		string password = msclr::interop::marshal_as<string>(PassWord);
		int password_digit = password.length();
		if (password_digit < 8) {
			MessageBox::Show("Error! : Password must be 8 digits", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (!AcceptTerms->Checked || R_Name->Text == "Name" || R_ID->Text == "ID" || R_Email->Text == "Email" || R_Password->Text == "Password" || R_Hospital->Text == "Hospital" || R_Doc->Text == "Doctor of the case") {
				MessageBox::Show("Error! : check all fields is filled", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (!Male->Checked && !Female->Checked)
		{
			MessageBox::Show("Error! :You Must choose Your Gender", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else {
			//Get input from Recipient "USER"
			String^ Name = R_Name->Text;
			String^ ID = R_ID->Text;
			String^ Email = R_Email->Text;
			String^ Age = R_Age->Text;
			String^ Hospital = R_Hospital->Text;
			String^ DocOfCase = R_Doc->Text;
			String^ BloodType = R_BloodType->Text;
			String^ Gender;
			if (Male->Checked) {
				Gender = "Male";
			}
			else if (Female->Checked) {
				Gender = "Female";
			}
			else
			{
				Gender = "not selected";
			}
			//Convert DataType of all attributes
			string name = msclr::interop::marshal_as<string>(Name);
			string id = msclr::interop::marshal_as<string>(ID);
			string email = msclr::interop::marshal_as<string>(Email);
			string age = msclr::interop::marshal_as<string>(Age);
			string hospital = msclr::interop::marshal_as<string>(Hospital);
			string doctor_of_case = msclr::interop::marshal_as<string>(DocOfCase);
			string blood_type = msclr::interop::marshal_as<string>(BloodType);
			string gender = msclr::interop::marshal_as<string>(Gender);
			bool unComplete = false;
			if (name == "Name"
				|| id == "ID"
				|| email == "Email"
				|| password == "Password"
				|| age == "Age"
				|| hospital == "Hospital?"
				|| doctor_of_case == "Doctor of the case"
				|| blood_type == "  Blood Type") {
				unComplete = true;


			}
			if (unComplete == false)
			{
				if (AcceptTerms->Checked) {
					if (Male->Checked || Female->Checked)
					{
						ofstream RecipientData;
						ofstream RecipientLogInData;
						ofstream RecipientEmails;
						ifstream users;

						RecipientLogInData.open("RecipientLogIn.txt", ios::app);
						RecipientData.open("Recipient.txt", ios::app);
						RecipientEmails.open("RecipientEmails.txt", ios::app);

						vector <string> RecipientArr;
						//vector <string> UsersArray;
						vector<string> emailsArr;



						//put the information entered by a user into "Array" RecipientArr
						RecipientArr.push_back(name);
						RecipientArr.push_back(id);
						RecipientArr.push_back(email);
						RecipientArr.push_back(password);
						RecipientArr.push_back(gender);
						RecipientArr.push_back(age);
						RecipientArr.push_back(hospital);
						RecipientArr.push_back(blood_type);
						RecipientArr.push_back(doctor_of_case);

						// get all Email into an "array" of type string

						bool state = false;
						users.open("RecipientEmails.txt");
						string value;
						while (getline(users, value)) {
							emailsArr.push_back(value);
							if (email == value) {
								break;
							}
						}
						// Check if the entered Email is used before or not
						if (emailsArr.size() > 0) {
							if (emailsArr[emailsArr.size() - 1] != email) {
								for (int i = 0; i < 9; i++)
								{
									if (i != 8)
									{
										RecipientData << RecipientArr.at(i) << ",";
									}
									else
									{
										RecipientData << RecipientArr.at(i);
									}

								}
								RecipientData << "\n";
								RecipientLogInData << RecipientArr.at(2) << "," << RecipientArr.at(3) << "\n";
								RecipientEmails << RecipientArr.at(2) << "\n";
								RecipientArr.empty();
								state = true;
							}
							else
							{
								MessageBox::Show("This email Is Already Used", "Used Email", MessageBoxButtons::OK, MessageBoxIcon::Error);
								state = false;

							}
						}

						else
						{
							RecipientData << "Name,ID,Email,Pass,Gender,Age,Hospital,Btpe,Doctor" << "\n";
							RecipientLogInData << "Email,Pass" << "\n";
							RecipientEmails << "Email" << "\n";
							MessageBox::Show("In order to save your information, please click again..", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

						}
						//close Recipient form after finishing Registration
						emailsArr.clear();
						if (state == true)
						{
							MessageBox::Show("Our team is dedicated to providing you with high-quality care and blood products..", "Welcome to our blood bank..", MessageBoxButtons::OK, MessageBoxIcon::Information);
							this->Hide();
							obj->Show();
							

						}
					}

				}

			}
		}
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
	}
	private: System::Void R_Name_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void R_ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R_Email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R_Password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void R_Hospital_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void R_Doc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Create_acc_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Recipient_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void backk3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	obj->Show();

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		R_Password->UseSystemPasswordChar = false;
	}
	else
	{
		R_Password->UseSystemPasswordChar = true;
	}
}
};
}
