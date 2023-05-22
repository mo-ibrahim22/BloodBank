#pragma once
#include<ctime>
#include<iostream>
#include<string>
#include<fstream>
#include <vector>
#include <msclr\marshal_cppstd.h>
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
	/// Summary for Donor
	/// </summary>
	public ref class Donor : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Donor(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

		Donor (Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			Dieseases->Text = "None of Them";
			Donor_BloodTypee->Text = "O+";
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Donor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1s;
	private: System::Windows::Forms::TextBox^ Donor_Name;



	private: System::Windows::Forms::CheckBox^ accept_terms;
	private: System::Windows::Forms::Button^ Sign_up;



	private: System::Windows::Forms::TextBox^ Donor_id;


	private: System::Windows::Forms::TextBox^ Donor_email;


	private: System::Windows::Forms::TextBox^ Donor_pass;




	private: System::Windows::Forms::DateTimePicker^ Donor_DateofthelatestDonation;











	private: System::Windows::Forms::CheckBox^ Male;
	private: System::Windows::Forms::CheckBox^ Female;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::ComboBox^ Donor_BloodTypee;
	private: System::Windows::Forms::ComboBox^ Dieseases;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ Age1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ backk2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
















	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Donor::typeid));
			this->label1s = (gcnew System::Windows::Forms::Label());
			this->Donor_Name = (gcnew System::Windows::Forms::TextBox());
			this->accept_terms = (gcnew System::Windows::Forms::CheckBox());
			this->Sign_up = (gcnew System::Windows::Forms::Button());
			this->Donor_id = (gcnew System::Windows::Forms::TextBox());
			this->Donor_email = (gcnew System::Windows::Forms::TextBox());
			this->Donor_pass = (gcnew System::Windows::Forms::TextBox());
			this->Donor_DateofthelatestDonation = (gcnew System::Windows::Forms::DateTimePicker());
			this->Male = (gcnew System::Windows::Forms::CheckBox());
			this->Female = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Donor_BloodTypee = (gcnew System::Windows::Forms::ComboBox());
			this->Dieseases = (gcnew System::Windows::Forms::ComboBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Age1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->backk2 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backk2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1s
			// 
			this->label1s->AutoSize = true;
			this->label1s->BackColor = System::Drawing::Color::Transparent;
			this->label1s->Font = (gcnew System::Drawing::Font(L"Segoe UI", 40.8F, System::Drawing::FontStyle::Bold));
			this->label1s->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1s->Location = System::Drawing::Point(167, 65);
			this->label1s->Name = L"label1s";
			this->label1s->Size = System::Drawing::Size(692, 91);
			this->label1s->TabIndex = 0;
			this->label1s->Text = L"Create New Account";
			this->label1s->UseMnemonic = false;
			this->label1s->Click += gcnew System::EventHandler(this, &Donor::label1_Click);
			// 
			// Donor_Name
			// 
			this->Donor_Name->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Donor_Name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Donor_Name->Location = System::Drawing::Point(4, 12);
			this->Donor_Name->Name = L"Donor_Name";
			this->Donor_Name->Size = System::Drawing::Size(422, 27);
			this->Donor_Name->TabIndex = 1;
			this->Donor_Name->Text = L"Name";
			this->Donor_Name->Click += gcnew System::EventHandler(this, &Donor::Donor_Name_Click);
			this->Donor_Name->TextChanged += gcnew System::EventHandler(this, &Donor::textBox1_TextChanged);
			// 
			// accept_terms
			// 
			this->accept_terms->AutoSize = true;
			this->accept_terms->BackColor = System::Drawing::Color::Transparent;
			this->accept_terms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->accept_terms->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->accept_terms->Location = System::Drawing::Point(331, 536);
			this->accept_terms->Name = L"accept_terms";
			this->accept_terms->Size = System::Drawing::Size(259, 24);
			this->accept_terms->TabIndex = 4;
			this->accept_terms->Text = L"Accept all terms and Privacy Policy";
			this->accept_terms->UseVisualStyleBackColor = false;
			this->accept_terms->CheckedChanged += gcnew System::EventHandler(this, &Donor::accept_terms_CheckedChanged);
			// 
			// Sign_up
			// 
			this->Sign_up->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->Sign_up->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sign_up->FlatAppearance->BorderSize = 0;
			this->Sign_up->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sign_up->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19));
			this->Sign_up->ForeColor = System::Drawing::Color::White;
			this->Sign_up->Location = System::Drawing::Point(187, 561);
			this->Sign_up->Name = L"Sign_up";
			this->Sign_up->Size = System::Drawing::Size(485, 49);
			this->Sign_up->TabIndex = 5;
			this->Sign_up->Text = L"Create Account";
			this->Sign_up->UseVisualStyleBackColor = false;
			this->Sign_up->Click += gcnew System::EventHandler(this, &Donor::Sign_up_Click);
			// 
			// Donor_id
			// 
			this->Donor_id->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Donor_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Donor_id->Location = System::Drawing::Point(4, 11);
			this->Donor_id->Name = L"Donor_id";
			this->Donor_id->Size = System::Drawing::Size(427, 27);
			this->Donor_id->TabIndex = 7;
			this->Donor_id->Text = L"ID";
			this->Donor_id->Click += gcnew System::EventHandler(this, &Donor::Donor_id_Click);
			this->Donor_id->TextChanged += gcnew System::EventHandler(this, &Donor::Donor_id_TextChanged);
			// 
			// Donor_email
			// 
			this->Donor_email->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Donor_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Donor_email->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Donor_email->Location = System::Drawing::Point(3, 10);
			this->Donor_email->Name = L"Donor_email";
			this->Donor_email->Size = System::Drawing::Size(423, 27);
			this->Donor_email->TabIndex = 9;
			this->Donor_email->Text = L"E-mail";
			this->Donor_email->Click += gcnew System::EventHandler(this, &Donor::Donor_email_Click);
			this->Donor_email->TextChanged += gcnew System::EventHandler(this, &Donor::Donor_email_TextChanged);
			// 
			// Donor_pass
			// 
			this->Donor_pass->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Donor_pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Donor_pass->Location = System::Drawing::Point(4, 11);
			this->Donor_pass->Name = L"Donor_pass";
			this->Donor_pass->Size = System::Drawing::Size(423, 27);
			this->Donor_pass->TabIndex = 14;
			this->Donor_pass->Text = L"Password";
			this->Donor_pass->UseSystemPasswordChar = true;
			this->Donor_pass->Click += gcnew System::EventHandler(this, &Donor::Donor_pass_Click);
			this->Donor_pass->TextChanged += gcnew System::EventHandler(this, &Donor::Donor_pass_TextChanged);
			// 
			// Donor_DateofthelatestDonation
			// 
			this->Donor_DateofthelatestDonation->CustomFormat = L"dd/mm/yy";
			this->Donor_DateofthelatestDonation->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->Donor_DateofthelatestDonation->Location = System::Drawing::Point(522, 424);
			this->Donor_DateofthelatestDonation->MaxDate = System::DateTime(2023, 12, 31, 0, 0, 0, 0);
			this->Donor_DateofthelatestDonation->MinDate = System::DateTime(1963, 1, 1, 0, 0, 0, 0);
			this->Donor_DateofthelatestDonation->Name = L"Donor_DateofthelatestDonation";
			this->Donor_DateofthelatestDonation->Size = System::Drawing::Size(150, 34);
			this->Donor_DateofthelatestDonation->TabIndex = 16;
			this->Donor_DateofthelatestDonation->Value = System::DateTime(1963, 1, 1, 0, 0, 0, 0);
			this->Donor_DateofthelatestDonation->ValueChanged += gcnew System::EventHandler(this, &Donor::Donor_DateofthelatestDonation_ValueChanged);
			// 
			// Male
			// 
			this->Male->AutoSize = true;
			this->Male->BackColor = System::Drawing::Color::Transparent;
			this->Male->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Male->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->Male->Location = System::Drawing::Point(356, 498);
			this->Male->Name = L"Male";
			this->Male->Size = System::Drawing::Size(64, 24);
			this->Male->TabIndex = 23;
			this->Male->Text = L"Male";
			this->Male->UseVisualStyleBackColor = false;
			this->Male->CheckedChanged += gcnew System::EventHandler(this, &Donor::Male_CheckedChanged);
			this->Male->Click += gcnew System::EventHandler(this, &Donor::Male_Click);
			// 
			// Female
			// 
			this->Female->AutoSize = true;
			this->Female->BackColor = System::Drawing::Color::Transparent;
			this->Female->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Female->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->Female->Location = System::Drawing::Point(437, 498);
			this->Female->Name = L"Female";
			this->Female->Size = System::Drawing::Size(79, 24);
			this->Female->TabIndex = 24;
			this->Female->Text = L"Female";
			this->Female->UseVisualStyleBackColor = false;
			this->Female->CheckedChanged += gcnew System::EventHandler(this, &Donor::Female_CheckedChanged);
			this->Female->Click += gcnew System::EventHandler(this, &Donor::Female_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(25, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(144, 134);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel1->Controls->Add(this->Donor_Name);
			this->panel1->Location = System::Drawing::Point(25, 214);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(394, 45);
			this->panel1->TabIndex = 32;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Donor::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Controls->Add(this->Donor_id);
			this->panel2->Location = System::Drawing::Point(24, 287);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(395, 45);
			this->panel2->TabIndex = 33;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel3->Controls->Add(this->Donor_email);
			this->panel3->Location = System::Drawing::Point(24, 360);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(395, 45);
			this->panel3->TabIndex = 34;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel4->Controls->Add(this->Donor_pass);
			this->panel4->Location = System::Drawing::Point(24, 433);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(395, 45);
			this->panel4->TabIndex = 35;
			// 
			// Donor_BloodTypee
			// 
			this->Donor_BloodTypee->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Donor_BloodTypee->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Donor_BloodTypee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Donor_BloodTypee->FormattingEnabled = true;
			this->Donor_BloodTypee->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"O+", L"O-", L"A+", L"A-", L"B+", L"B-",
					L"AB+", L"AB-"
			});
			this->Donor_BloodTypee->Location = System::Drawing::Point(522, 352);
			this->Donor_BloodTypee->Name = L"Donor_BloodTypee";
			this->Donor_BloodTypee->Size = System::Drawing::Size(242, 36);
			this->Donor_BloodTypee->TabIndex = 36;
			this->Donor_BloodTypee->SelectedIndexChanged += gcnew System::EventHandler(this, &Donor::Donor_BloodTypee_SelectedIndexChanged);
			// 
			// Dieseases
			// 
			this->Dieseases->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Dieseases->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Dieseases->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Dieseases->FormattingEnabled = true;
			this->Dieseases->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Blood Pressure Disorders", L"Thyroid Disease",
					L"Diabetes", L"Cancer", L"Heart Disorders", L"Hepatitis", L"None of Them"
			});
			this->Dieseases->Location = System::Drawing::Point(522, 288);
			this->Dieseases->Name = L"Dieseases";
			this->Dieseases->Size = System::Drawing::Size(242, 36);
			this->Dieseases->TabIndex = 37;
			this->Dieseases->SelectedIndexChanged += gcnew System::EventHandler(this, &Donor::Dieseases_SelectedIndexChanged);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel5->Controls->Add(this->Age1);
			this->panel5->Location = System::Drawing::Point(522, 214);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(242, 45);
			this->panel5->TabIndex = 35;
			// 
			// Age1
			// 
			this->Age1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Age1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Age1->Location = System::Drawing::Point(3, 10);
			this->Age1->Name = L"Age1";
			this->Age1->Size = System::Drawing::Size(423, 27);
			this->Age1->TabIndex = 9;
			this->Age1->Text = L"Age";
			this->Age1->Click += gcnew System::EventHandler(this, &Donor::Age1_Click);
			this->Age1->TextChanged += gcnew System::EventHandler(this, &Donor::Age1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(25, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 23);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(27, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 23);
			this->label3->TabIndex = 39;
			this->label3->Text = L"ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(23, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 23);
			this->label4->TabIndex = 40;
			this->label4->Text = L"E-mail";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::SteelBlue;
			this->label5->Location = System::Drawing::Point(23, 408);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 23);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Location = System::Drawing::Point(518, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 23);
			this->label6->TabIndex = 42;
			this->label6->Text = L"Age";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::SteelBlue;
			this->label9->Location = System::Drawing::Point(521, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 23);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Blood type";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(521, 263);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 23);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Suffer of any disease \?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(521, 398);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 23);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Date of last donation";
			// 
			// backk2
			// 
			this->backk2->BackColor = System::Drawing::Color::Transparent;
			this->backk2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backk2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backk2.Image")));
			this->backk2->Location = System::Drawing::Point(41, 560);
			this->backk2->Name = L"backk2";
			this->backk2->Size = System::Drawing::Size(100, 50);
			this->backk2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->backk2->TabIndex = 46;
			this->backk2->TabStop = false;
			this->backk2->Click += gcnew System::EventHandler(this, &Donor::backk2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(425, 444);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 47;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Donor::checkBox1_CheckedChanged);
			// 
			// Donor
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->backk2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->Dieseases);
			this->Controls->Add(this->Donor_BloodTypee);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Female);
			this->Controls->Add(this->Male);
			this->Controls->Add(this->Donor_DateofthelatestDonation);
			this->Controls->Add(this->Sign_up);
			this->Controls->Add(this->accept_terms);
			this->Controls->Add(this->label1s);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximizeBox = false;
			this->Name = L"Donor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Donor register form";
			this->Load += gcnew System::EventHandler(this, &Donor::Donor_Load);
			this->Click += gcnew System::EventHandler(this, &Donor::otherclick1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backk2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool vali_date = true;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Donor_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Username_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DOB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void accept_terms_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Donor_DateofthelatestDonation_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	  bool correct_DonationDate = false;
		//take local time
		time_t now = time(0);
		tm* date_time = localtime(&now);
		// store user last donation time 
		DateTime date = Donor_DateofthelatestDonation->Value.Date;
		// check more than or equal 3 months or not to verfied sign up
		if (date.Year < (date_time->tm_year + 1900)) {
			correct_DonationDate = true;
		}
		if (date.Year == (date_time->tm_year + 1900)) {
			if ((date_time->tm_mon + 1) - date.Month > 3) {
				correct_DonationDate = true;
			}
			else if ((date_time->tm_mon + 1) - date.Month == 3) {
				if (date_time->tm_mday - date.Day == 0 || date_time->tm_mday - date.Day > 0) {
					correct_DonationDate = true;
				}
			}
		}
		if (correct_DonationDate == false) {
			vali_date = false;
		}
		else 
			vali_date = true;
	}
	

	private: System::Void Sign_up_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		String^ ID = Donor_id->Text;
		String^ PassWord = Donor_pass->Text;
		string id = msclr::interop::marshal_as<string>(ID);
		string password = msclr::interop::marshal_as<string>(PassWord);
		int id_digit = id.length();
		int password_digit = password.length();
		 if (password_digit < 8) {
			MessageBox::Show("Error! : Password must be 8 digits", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// if all fields not filled show ERROR!!
		else if (!accept_terms->Checked || Donor_Name->Text == "Name" 
			|| Donor_id->Text == "ID" || Donor_email->Text == "E-mail" || Donor_pass->Text == "Password") {
			MessageBox::Show("Error! : check all fields is filled", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (!Male->Checked && !Female->Checked)
		{
			MessageBox::Show("Error! :You Must choose Your Gender", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else if (vali_date == false)
		{

			MessageBox::Show("Last donation date must be at least 3 months", "Error!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			//Get input from Donor "USER"
			String^ Name = Donor_Name->Text;
			String^ Email = Donor_email->Text;
			String^ ArrDisease = Dieseases->Text;
			String^ BloodType = Donor_BloodTypee->Text;
			String^ Agee = Age1->Text;
			String^ DateOfLastDonation = Donor_DateofthelatestDonation->Text;
			String^ Gender;

			if (Male->Checked) {
				Gender = "Male";
			}
			else if (Female->Checked)
			{
				Gender = "Female";
			}
			else
			{
				Gender = "not selected";
			}
			//Convert DataType of all attributes
			string name = msclr::interop::marshal_as<string>(Name);
			string email = msclr::interop::marshal_as<string>(Email);
			string arr_disease = msclr::interop::marshal_as<string>(ArrDisease);
			string blood_type = msclr::interop::marshal_as<string>(BloodType);
			string age = msclr::interop::marshal_as<string>(Agee);
			string date_of_last_donation = msclr::interop::marshal_as<string>(DateOfLastDonation);
			string gender = msclr::interop::marshal_as<string>(Gender);
			bool unComplete = false;
			if (name == "Name"
				|| id == "ID"
				|| email == "Email"
				|| password == "Password"
				|| age == "Age"
				|| arr_disease == "if you suffer from any diseases"
				|| blood_type == "Select your blood type") {
				unComplete = true;

			}

			if (unComplete == false) {
				if (accept_terms->Checked) {
					if (Male->Checked || Female->Checked) 
					{
						ofstream DonorData;
						ofstream DonorLogInData;
						ofstream DonorsEmails;
						ifstream users;

						DonorLogInData.open("DonorLogIn.txt", ios::app);
						DonorData.open("Donor.txt", ios::app);
						DonorsEmails.open("DonorEmails.txt", ios::app);

						vector <string> DonorsArray;
						vector<string> emailArr;


						//put the information entered by a user into "Array" DonorsArray
						DonorsArray.push_back(name);
						DonorsArray.push_back(id);
						DonorsArray.push_back(email);
						DonorsArray.push_back(password);
						DonorsArray.push_back(arr_disease);
						DonorsArray.push_back(blood_type);
						DonorsArray.push_back(age);
						DonorsArray.push_back(date_of_last_donation);
						DonorsArray.push_back(gender);



						// get all emails into an "array" of type string
						bool state = false; //check if email already exist
						users.open("DonorEmails.txt");
						string value;
						while (getline(users, value))
						{
							emailArr.push_back(value);
							if (email == value) {
								break;
							}
						}
						// Check if the entered email is used before or not
						if (emailArr.size() > 0)
						{
							if (emailArr[emailArr.size() - 1] != email)
							{
								for (int i = 0; i < 9; i++)
								{
									if (i != 8) {
										DonorData << DonorsArray.at(i) << ",";
									}
									else {
										DonorData << DonorsArray.at(i);

									}

								}
								DonorData << "\n";
								DonorLogInData << DonorsArray.at(2) << "," << DonorsArray.at(3) << "\n";
								DonorsEmails << DonorsArray.at(2) << "\n";
								DonorsArray.empty();
								state = true;
							}

							else
							{
								MessageBox::Show("This Email Is Already Used", "Used Email", MessageBoxButtons::OK, MessageBoxIcon::Error);
								state = false;

							}

						}

						else {
							DonorData << "Name,ID,Email,Pass,Dis,Btype,Age,Date,Gender" << "\n";
							DonorLogInData << "Email,Pass" << "\n";
							DonorsEmails << "Email" << "\n";
							MessageBox::Show("In order to save your information, please click again..", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

						}

						//close Donor form after finishing Registration
						emailArr.clear();
						if (state == true)
						{
							MessageBox::Show("Thank you for giving the gift of life..", "Welcome to our blood bank..", MessageBoxButtons::OK, MessageBoxIcon::Information);
							this->Hide();
							obj->Show();
						}
					}
				}
			}

		}

	}
	private: System::Void otherclick1(System::Object^ sender, System::EventArgs^ e) {
		// if text is empty then write textbox's name
		if (Donor_Name->Text == "")
		{
			Donor_Name->Text = "Name";
		}
		if (Donor_email->Text == "")
		{
			Donor_email->Text = "E-mail";
		}
		if (Donor_id->Text == "")
		{
			Donor_id->Text = "ID";
		}
		if (Donor_pass->Text == "")
		{
			Donor_pass->Text = "Password";
		}
		if (Age1->Text == "")
		{
			Age1->Text = "Age";
		}

	}
	private: System::Void Donor_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Donor_Name_Click(System::Object^ sender, System::EventArgs^ e) {
		// if press in text box its name disappered to user begin to write
		if (Donor_Name->Text == "Name")
		{
			Donor_Name->Text = "";
		}
		if (Donor_id->Text == "")
		{
			Donor_id->Text = "ID";
		}
		if (Donor_email->Text == "")
		{
			Donor_email->Text = "E-mail";
		}
		if (Donor_pass->Text == "")
		{
			Donor_pass->Text = "Password";
		}
		if (Age1->Text == "")
		{
			Age1->Text = "Age";
		}

	}
	private: System::Void Donor_id_Click(System::Object^ sender, System::EventArgs^ e) {
		// if press in text box its name disappered to user begin to write
		if (Donor_id->Text == "ID")
		{
			Donor_id->Text = "";
		}
		if (Donor_Name->Text == "")
		{
			Donor_Name->Text = "Name";
		}
		if (Donor_email->Text == "")
		{
			Donor_email->Text = "E-mail";
		}
		if (Donor_pass->Text == "")
		{
			Donor_pass->Text = "Password";
		}
		if (Age1->Text == "")
		{
			Age1->Text = "Age";
		}

	}
	private: System::Void Donor_email_Click(System::Object^ sender, System::EventArgs^ e) {
		// if press in text box its name disappered to user begin to write
		if (Donor_email->Text == "E-mail")
		{
			Donor_email->Text = "";
		}
		if (Donor_pass->Text == "")
		{
			Donor_pass->Text = "Password";
		}
		if (Donor_Name->Text == "")
		{
			Donor_Name->Text = "Name";
		}
		if (Donor_id->Text == "")
		{
			Donor_id->Text = "ID";
		}
		if (Age1->Text == "")
		{
			Age1->Text = "Age";
		}
	}
	private: System::Void Donor_pass_Click(System::Object^ sender, System::EventArgs^ e) {
		// if press in text box its name disappered to user begin to write
		if (Donor_pass->Text == "Password")
		{
			Donor_pass->Text = "";
		}
		if (Donor_Name->Text == "")
		{
			Donor_Name->Text = "Name";
		}
		if (Donor_id->Text == "")
		{
			Donor_id->Text = "ID";
		}
		if (Donor_email->Text == "")
		{
			Donor_email->Text = "E-mail";
		}
		if (Age1->Text == "")
		{
			Age1->Text = "Age";
		}
	}

	private: System::Void Age_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Male_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Donor_Bloodtype_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Male_Click(System::Object^ sender, System::EventArgs^ e) {
		// if user choose male , female disenabled
		if (Male->Checked) {
			Female->Enabled = false;
		}
		else {
			Female->Enabled = true;
		}

	}
	private: System::Void Female_Click(System::Object^ sender, System::EventArgs^ e) {
		// if user choose female , male disenabled
		if (Female->Checked) {
			Male->Enabled = false;
		}
		else {
			Male->Enabled = true;
		}

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Donor_email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Donor_pass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Donor_BloodType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void Age_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Age1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Age1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Age1->Text == "Age")
		{
			Age1->Text = "";
		}
		if (Donor_id->Text == "")
		{
			Donor_id->Text = "ID";
		}
		if (Donor_email->Text == "")
		{
			Donor_email->Text = "E-mail";
		}
		if (Donor_pass->Text == "")
		{
			Donor_pass->Text = "Password";
		}
		if (Donor_Name->Text == "")
		{
			Donor_Name->Text = "Name";
		}
	}
private: System::Void Dieseases_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Donor_BloodTypee_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void backk2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Hide();
	obj->Show();

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		Donor_pass->UseSystemPasswordChar = false;
	}
	else
	{
		Donor_pass->UseSystemPasswordChar = true;
	}
}
private: System::Void Female_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
