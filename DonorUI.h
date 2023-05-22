#pragma once
#include<fstream>
#include<string>
#include<iostream>
#include<sstream>
#include <msclr\marshal_cppstd.h>
#include<vector>

namespace BloodBank {
	using namespace std;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DonorUI
	/// </summary>
	public ref class DonorUI : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		DonorUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		DonorUI(Form^ obj1, String^ data)
		{
			obj = obj1;
			InitializeComponent();
			textBox12->Text = data;
			textBox6->Text = data;
			textBox1->Text = data;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DonorUI()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ Donation_Request_Panel;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::ComboBox^ CB_Disease;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ Delete_Account_Panel;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button6;

	private:

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::DateTimePicker^ Last_Donation;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DonorUI::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Delete_Account_Panel = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Donation_Request_Panel = (gcnew System::Windows::Forms::Panel());
			this->Last_Donation = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->CB_Disease = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->Delete_Account_Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->Donation_Request_Panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(408, 833);
			this->panel2->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(89, 622);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(205, 63);
			this->button8->TabIndex = 30;
			this->button8->Text = L"Logout";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &DonorUI::button8_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(21, 482);
			this->button2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(367, 71);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Delete Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DonorUI::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(21, 239);
			this->button4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(367, 71);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Donation Request ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DonorUI::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(21, 365);
			this->button5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(367, 71);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Edit Account";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DonorUI::button5_Click);
			// 
			// Delete_Account_Panel
			// 
			this->Delete_Account_Panel->BackColor = System::Drawing::Color::Transparent;
			this->Delete_Account_Panel->Controls->Add(this->textBox4);
			this->Delete_Account_Panel->Controls->Add(this->textBox6);
			this->Delete_Account_Panel->Controls->Add(this->pictureBox1);
			this->Delete_Account_Panel->Controls->Add(this->pictureBox4);
			this->Delete_Account_Panel->Controls->Add(this->button1);
			this->Delete_Account_Panel->Location = System::Drawing::Point(548, 82);
			this->Delete_Account_Panel->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Delete_Account_Panel->Name = L"Delete_Account_Panel";
			this->Delete_Account_Panel->Size = System::Drawing::Size(800, 530);
			this->Delete_Account_Panel->TabIndex = 33;
			this->Delete_Account_Panel->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(80, 212);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(688, 47);
			this->textBox4->TabIndex = 44;
			this->textBox4->Text = L"Password";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->Click += gcnew System::EventHandler(this, &DonorUI::textBox4_Click_1);
			this->textBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DonorUI::textBox4_MouseClick);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Black;
			this->textBox6->Location = System::Drawing::Point(80, 123);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(688, 47);
			this->textBox6->TabIndex = 43;
			this->textBox6->Text = L"Email";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->Click += gcnew System::EventHandler(this, &DonorUI::textBox6_Click);
			this->textBox6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DonorUI::textBox6_MouseClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(27, 212);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(45, 47);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 41;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(27, 123);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(45, 47);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 40;
			this->pictureBox4->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(280, 341);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(340, 73);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Delete Account";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DonorUI::button1_Click);
			// 
			// Donation_Request_Panel
			// 
			this->Donation_Request_Panel->BackColor = System::Drawing::Color::Transparent;
			this->Donation_Request_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Donation_Request_Panel->Controls->Add(this->Last_Donation);
			this->Donation_Request_Panel->Controls->Add(this->label4);
			this->Donation_Request_Panel->Controls->Add(this->button3);
			this->Donation_Request_Panel->Controls->Add(this->CB_Disease);
			this->Donation_Request_Panel->Controls->Add(this->label8);
			this->Donation_Request_Panel->Controls->Add(this->textBox2);
			this->Donation_Request_Panel->Controls->Add(this->textBox1);
			this->Donation_Request_Panel->Location = System::Drawing::Point(415, 12);
			this->Donation_Request_Panel->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Donation_Request_Panel->Name = L"Donation_Request_Panel";
			this->Donation_Request_Panel->Size = System::Drawing::Size(1093, 821);
			this->Donation_Request_Panel->TabIndex = 2;
			this->Donation_Request_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DonorUI::Donation_Request_Panel_Paint);
			// 
			// Last_Donation
			// 
			this->Last_Donation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Last_Donation->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->Last_Donation->Location = System::Drawing::Point(140, 445);
			this->Last_Donation->MaxDate = System::DateTime(2023, 10, 10, 0, 0, 0, 0);
			this->Last_Donation->MinDate = System::DateTime(1965, 10, 10, 0, 0, 0, 0);
			this->Last_Donation->Name = L"Last_Donation";
			this->Last_Donation->Size = System::Drawing::Size(177, 34);
			this->Last_Donation->TabIndex = 36;
			this->Last_Donation->Value = System::DateTime(1965, 10, 10, 0, 0, 0, 0);
			this->Last_Donation->ValueChanged += gcnew System::EventHandler(this, &DonorUI::Last_Donation_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(128, 58);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(421, 62);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Donation Request";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(140, 501);
			this->button3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(679, 94);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Place Your Request";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DonorUI::button3_Click_1);
			// 
			// CB_Disease
			// 
			this->CB_Disease->BackColor = System::Drawing::Color::LightSteelBlue;
			this->CB_Disease->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->CB_Disease->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CB_Disease->ForeColor = System::Drawing::Color::Black;
			this->CB_Disease->FormattingEnabled = true;
			this->CB_Disease->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Blood Pressure Disorders", L"Thyroid Disease",
					L"Diabetes", L"Cancer", L"Heart Disorders", L"Hepatitis", L"None of Them"
			});
			this->CB_Disease->Location = System::Drawing::Point(140, 387);
			this->CB_Disease->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->CB_Disease->Name = L"CB_Disease";
			this->CB_Disease->Size = System::Drawing::Size(242, 30);
			this->CB_Disease->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(124, 345);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(366, 24);
			this->label8->TabIndex = 23;
			this->label8->Text = L" Your disease and Last Donation Date ..";
			this->label8->Click += gcnew System::EventHandler(this, &DonorUI::label8_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(140, 290);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(253, 35);
			this->textBox2->TabIndex = 22;
			this->textBox2->Text = L"Age";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->Click += gcnew System::EventHandler(this, &DonorUI::textBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(140, 220);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(399, 35);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"Email";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DonorUI::textBox1_MouseClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Location = System::Drawing::Point(443, 25);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1032, 740);
			this->panel1->TabIndex = 34;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DonorUI::panel1_Paint);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Location = System::Drawing::Point(239, 2);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(468, 239);
			this->panel5->TabIndex = 30;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(91, 40);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(286, 28);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Welcome to our blood bank..";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &DonorUI::label2_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::Black;
			this->textBox12->Location = System::Drawing::Point(45, 88);
			this->textBox12->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(384, 35);
			this->textBox12->TabIndex = 24;
			this->textBox12->Text = L"Email";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->UseWaitCursor = true;
			this->textBox12->Click += gcnew System::EventHandler(this, &DonorUI::textBox12_Click);
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &DonorUI::textBox12_TextChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(146, 147);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(205, 63);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Display your data";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &DonorUI::button6_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->checkBox3);
			this->panel3->Controls->Add(this->checkBox2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->comboBox4);
			this->panel3->Location = System::Drawing::Point(476, 247);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(551, 374);
			this->panel3->TabIndex = 27;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(105, 206);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(86, 25);
			this->checkBox3->TabIndex = 24;
			this->checkBox3->Text = L"Female";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &DonorUI::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(4, 206);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 25);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->Text = L"Male";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &DonorUI::checkBox2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(0, 127);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 22);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Date of the latest donation";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(0, 283);
			this->button7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(547, 73);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Edit Account";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &DonorUI::button7_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::Black;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::White;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::Hiragana;
			this->dateTimePicker1->Location = System::Drawing::Point(4, 152);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(188, 32);
			this->dateTimePicker1->TabIndex = 21;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &DonorUI::dateTimePicker1_ValueChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Enabled = false;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox2->Location = System::Drawing::Point(4, 9);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox2->Size = System::Drawing::Size(188, 36);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->Click += gcnew System::EventHandler(this, &DonorUI::comboBox2_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->ForeColor = System::Drawing::Color::Black;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Blood Pressure Disorders", L"Thyroid Disease",
					L"Diabetes", L"Cancer", L"Heart Disorders", L"Hepatitis", L"None of Them"
			});
			this->comboBox4->Location = System::Drawing::Point(1, 73);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(405, 36);
			this->comboBox4->TabIndex = 18;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &DonorUI::comboBox4_SelectedIndexChanged);
			this->comboBox4->Click += gcnew System::EventHandler(this, &DonorUI::comboBox4_Click);
			// 
			// panel4
			// 
			this->panel4->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->checkBox1);
			this->panel4->Controls->Add(this->textBox5);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Location = System::Drawing::Point(4, 247);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(447, 374);
			this->panel4->TabIndex = 25;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DonorUI::panel4_Paint);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(422, 203);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(95, 20);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &DonorUI::checkBox1_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(29, 73);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(384, 35);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"ID";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->Click += gcnew System::EventHandler(this, &DonorUI::textBox5_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(29, 255);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(384, 35);
			this->textBox3->TabIndex = 17;
			this->textBox3->Text = L"Age";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->Click += gcnew System::EventHandler(this, &DonorUI::textBox3_Click_1);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Black;
			this->textBox7->Location = System::Drawing::Point(29, 134);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(384, 35);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"Email";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->Click += gcnew System::EventHandler(this, &DonorUI::textBox7_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::Black;
			this->textBox10->Location = System::Drawing::Point(29, 194);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(384, 35);
			this->textBox10->TabIndex = 1;
			this->textBox10->Text = L"Password";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->UseSystemPasswordChar = true;
			this->textBox10->Click += gcnew System::EventHandler(this, &DonorUI::textBox10_Click);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::Black;
			this->textBox11->Location = System::Drawing::Point(29, 10);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(384, 35);
			this->textBox11->TabIndex = 0;
			this->textBox11->Text = L"Name";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->UseWaitCursor = true;
			this->textBox11->Click += gcnew System::EventHandler(this, &DonorUI::textBox11_Click);
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &DonorUI::textBox11_TextChanged);
			// 
			// DonorUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1508, 833);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Donation_Request_Panel);
			this->Controls->Add(this->Delete_Account_Panel);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Name = L"DonorUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DonorUI";
			this->Load += gcnew System::EventHandler(this, &DonorUI::DonorUI_Load);
			this->panel2->ResumeLayout(false);
			this->Delete_Account_Panel->ResumeLayout(false);
			this->Delete_Account_Panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->Donation_Request_Panel->ResumeLayout(false);
			this->Donation_Request_Panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
					   // Split every line into values "Email, Password ...."
					   while (getline(linestream, value, ','))
					   {
						   v.push_back(value);
					   }
				   }
			   }
			   File.close();
		   }

	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (textBox1->Text == "Email")
		{
			textBox1->Text = "";
		}
		if (textBox2->Text == "")
		{
			textBox2->Text = "Age";
		}
	}
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "Age")
		{
			textBox2->Text = "";
		}
		if (textBox1->Text == "")
		{
			textBox1->Text = "Email";
		}
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

		//flage for check  
		bool Check_Age = false;
		bool Disease = false;
		bool Check_Date = false;
		//convert from String^ to string 
		String^ x = textBox2->Text;
		string y = msclr::interop::marshal_as<string>(x);

		//convert from string to int (to make comparison opertaions) 

		istringstream z(y);
		int n;
		z >> n;

		//check age in the range (17:60)

		if (n < 17 || n > 60)
		{
			Check_Age = true;

		}
		else {
			Check_Age = false;
		}

		//error message if age isn't in the range

		if (Check_Age == true)
		{

			MessageBox::Show("Error! : Your Age isn't Allowed", "You Can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		// to get time now by library (<ctime>)

		time_t now = time(0);
		tm* ltm = localtime(&now);

		// to get month only from date now
		int day = ltm->tm_mday;
		int month = 1 + ltm->tm_mon;
		int year = 1900 + ltm->tm_year;
		DateTime LastDonationDate = Last_Donation->Value.Date;

	
		//check if the duration grater than 3 monthes or not (error message if not grater than 3 )
		if (year > LastDonationDate.Year) {
			Check_Date = true;
		}

		if (year == LastDonationDate.Year)
		{
			if (month - LastDonationDate.Month > 3) {
				Check_Date = true;
			}
			
			else if (month - LastDonationDate.Month == 3){
				if (day - LastDonationDate.Day == 0 || day - LastDonationDate.Day > 0) {
					Check_Date = true;
				}
			}
			else {
				Check_Date = false;
			}
			
		}
		if (Check_Date == false)
		{
			MessageBox::Show("Error! : The Last Donation Date Must Be More Than 3 Months", "You Can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		if (CB_Disease->SelectedIndex == -1)
		{
			Disease = true;
			MessageBox::Show("For your safety, please inform us of any disease you have..", "Any disease not selected", MessageBoxButtons::OK, MessageBoxIcon::Error);

		
		}
		else if (CB_Disease->Text != "None of Them")
		{
			Disease = true;
			MessageBox::Show("Error! : Your health is the top priority. Please take care of yourself and refrain from donation at this time.", "You Can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else
		{
			Disease = false;
		}

		


		//convert String^ data get from FORM to string to save it in files 

		vector<string> DonorsArray;

		String^ Email = textBox1->Text;
		string email = msclr::interop::marshal_as<string>(Email);
		String^ Age = textBox2->Text;
		string age = msclr::interop::marshal_as<string>(Age);
		String^ LastDate = Last_Donation->Text;
		string lastDate = msclr::interop::marshal_as<string>(LastDate);


		
		//push data from FORM to DonorsArray Vector

		DonorsArray.push_back(email);
		DonorsArray.push_back(age);
		DonorsArray.push_back(lastDate);

		// flag to check if email is correct or not

		bool email_exist = false;

		// make file and open Donor file to check email and get some data from it

		fstream DonorData;
		DonorData.open("Donor.txt");

		//make DonorDat Vector to push data from file to it 

		vector <string> DonorDat;

		//make Don Vector to push data from DonorDat Vector to it (name , gender , bloodType)

		vector <string> Don;

		readData("Donor.txt", DonorDat);

		for (int i = 1; i < DonorDat.size(); i = i + 9) {

			// i =1 (index [2]) if email is correct
			if (DonorDat.at(i + 1) == email)
			{

				//make flag =true if find emil in Donor File
				email_exist = true;
				//To get Name from Donor File as it in index [0]
				Don.push_back(DonorDat.at(i - 1));
				//To get Gender from Donor File as it in index [8]
				Don.push_back(DonorDat.at(i + 7));
				//To get BloodType from Donor File as it in index [5]
				Don.push_back(DonorDat.at(i + 4));

			}
		}
		// to send Donation date
		int timeNow[3];
		timeNow[0] = ltm->tm_mday;
		timeNow[1] = 1 + ltm->tm_mon;
		timeNow[2] = 1900 + ltm->tm_year;

		// make file and open new file (DonorUiDate) to save DononrRequest 
		fstream DonorUiData;
		DonorUiData.open("DonorUiData.txt", ios::app);
		if (DonorUiData.is_open()) {
			//check falg state (if true it's mean email is correct ) to save data in the file
			if (email_exist == true && Check_Age == false && Check_Date == true && Disease==false)
			{
				for (int i = 0; i < 3; i++) {
					//save data from FORM (email , age ,last date ) to file
					DonorUiData << DonorsArray.at(i) << ",";
				}
				//save data from Donor file (Name , Gender ,BloodType ) to file
				for (int i = 0; i < Don.size(); i++) {
					DonorUiData << Don.at(i) << ",";
				}
				// to send Donation date
				for (int i = 0; i < 3; i++) {

					if (i != 2) {
						DonorUiData << timeNow[i] << ",";
					}
					else {
						DonorUiData << timeNow[i];

					}


				}

				//end line after save all data 
				DonorUiData << endl;
				//close files 
				DonorUiData.close();
				DonorData.close();
				MessageBox::Show("Thank you for helping us save lives", " successful operation", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			//check falg state (if false it's mean Email is wrong ) to show error and it can't save data in the file
			if (email_exist == false)
			{
				MessageBox::Show("Error! : Wrong Email", " You can't Donate", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Display Donation Request "PANEL"
		Delete_Account_Panel->Hide();
		Donation_Request_Panel->Show();
		panel1->Hide();


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		// Display Delete Account "PANEL"
		Donation_Request_Panel->Hide();
		Delete_Account_Panel->Show();
		panel1->Hide();

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		Donation_Request_Panel->Hide();
		Delete_Account_Panel->Hide();
		panel1->Show();
		panel5->Show();

	}

		   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void textBox6_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//handle cursor
		if (textBox6->Text == "Email") {
			textBox6->Text = "";
		}
		if (textBox4->Text == "") {
			textBox4->Text = "Password";
		}
	}
	private: System::Void textBox4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//handle cursor
		if (textBox6->Text == "")
		{
			textBox6->Text = "Email";
		}
		if (textBox4->Text == "Password")
		{
			textBox4->Text = "";
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int tmp = 0;
		bool success = false;
		bool b = false;
		String^ email = textBox6->Text;
		string Email = msclr::interop::marshal_as<string>(email);
		String^ password = textBox4->Text;
		string PassWord = msclr::interop::marshal_as<string>(password);
		vector<string> DonorData;
		//Read form Donor file
		readData("Donor.txt", DonorData);
		//Check if the entered email is correct or not
		for (int j = 1; j < DonorData.size(); j = j + 9)
		{
			if (DonorData.at(j + 1) == Email)
			{
				if (DonorData.at(j + 2) == PassWord)
				{
					success = true;
					tmp = j;
					break;
				}
			}
		}
		if (success == false)
		{

			MessageBox::Show("Error! : Wrong Email or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		b = success;
		if (success == true)
		{
			remove("Donor.txt");
			remove("DonorLogIn.txt");
			remove("DonorEmails.txt");

			for (int j = 0; j < 9; j++) {
				DonorData.erase(DonorData.begin() + tmp - 1);
			}

			ofstream edit;
			edit.open("Donor.txt", ios::app);
			for (int i = 0; i < DonorData.size(); i++) {
				if (i % 9 != 8 || i == 0) {
					edit << DonorData.at(i) << ",";
				}
				else {
					edit << DonorData.at(i);
					edit << "\n";
				}
			}

			ofstream usern;
			usern.open("DonorEmails.txt", ios::app);
			for (int i = 1; i < DonorData.size(); i += 9) {
				usern << DonorData.at(i + 1) << "\n";
			}

			ofstream loginn;
			loginn.open("DonorLogIn.txt", ios::app);
			for (int i = 1; i < DonorData.size(); i += 9) {
				loginn << DonorData.at(i + 1) + "," + DonorData.at(i + 2) << "\n";
			}


			loginn.close();
			edit.close();
			usern.close();
			DonorData.clear();
			MessageBox::Show("Success! :Your account has been Deleted", " Delete Success ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//back to home page
			this->Hide();
			obj->Show();
		}
	}

		   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		   int tmp = 0;
		   bool b = false;
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		bool succeed = false;
		String^ email = textBox12->Text;
		string Email = msclr::interop::marshal_as<string>(email);

		vector<string> DonorData;
		//Read form Donor file
		readData("Donor.txt", DonorData);
		//Check if the entered email is correct or not
		for (int j = 1; j < DonorData.size() - 1; j = j + 9) {
			if (DonorData.at(j + 1) == Email) {

				succeed = true;
				tmp = j;
				break;

			}
		}
		if (succeed == true) {
			MessageBox::Show("Please review your data carefully before making any changes..", "Attention:", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		if (succeed == false) {

			MessageBox::Show("Error! : Wrong Email!", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		b = succeed;

		if (succeed == true) {
			String^ Name = msclr::interop::marshal_as<String^>(DonorData[tmp - 1]);
			textBox11->Text = Name;

			String^ id = msclr::interop::marshal_as<String^>(DonorData[tmp]);
			textBox5->Text = id;

			String^ mail = msclr::interop::marshal_as<String^>(DonorData[tmp + 1]);
			textBox7->Text = mail;

			String^ pas = msclr::interop::marshal_as<String^>(DonorData[tmp + 2]);
			textBox10->Text = pas;

			String^ dis = msclr::interop::marshal_as<String^>(DonorData[tmp + 3]);
			comboBox4->Text = dis;

			String^ blood = msclr::interop::marshal_as<String^>(DonorData[tmp + 4]);
			comboBox2->Text = blood;

			String^ age = msclr::interop::marshal_as<String^>(DonorData[tmp + 5]);
			textBox3->Text = age;

			String^ date = msclr::interop::marshal_as<String^>(DonorData[tmp + 6]);
			dateTimePicker1->Text = date;


		}
		DonorData.clear();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		if (b == true)
		{
			String^ PassWordd = textBox10->Text;
			string passwordd = msclr::interop::marshal_as<string>(PassWordd);
			int password_digit = passwordd.length();
			if (password_digit < 8) {
				MessageBox::Show("Error! : Password must be 8 digits", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (checkBox2->Checked || checkBox3->Checked)
			{

				String^ username = textBox12->Text;
				string UserName = msclr::interop::marshal_as<string>(username);



				vector<string> ArrDonorData;
				//Read form Donor file
				readData("Donor.txt", ArrDonorData);
				remove("Donor.txt");
				remove("DonorLogIn.txt");
				remove("DonorEmails.txt");

				for (int j = 0; j < 9; j++) {
					ArrDonorData.erase(ArrDonorData.begin() + tmp - 1);
				}

				String^ Name = textBox11->Text;
				String^ Id = textBox5->Text;
				String^ Email = textBox7->Text;
				String^ ArrDisease = comboBox4->Text;
				String^ BloodType = comboBox2->Text;
				String^ Age = textBox3->Text;
				String^ DateOfLastDonation = dateTimePicker1->Text;
				String^ Gender;
				if (checkBox2->Checked) {
					Gender = "Male";
				}
				else if (checkBox3->Checked) {
					Gender = "Female";
				}
				string name = msclr::interop::marshal_as<string>(Name);
				string ID = msclr::interop::marshal_as<string>(Id);
				string email = msclr::interop::marshal_as<string>(Email);
				string arr_disease = msclr::interop::marshal_as<string>(ArrDisease);
				string blood_type = msclr::interop::marshal_as<string>(BloodType);
				string age = msclr::interop::marshal_as<string>(Age);
				string date_of_last_donation = msclr::interop::marshal_as<string>(DateOfLastDonation);
				string gender = msclr::interop::marshal_as<string>(Gender);

				ArrDonorData.push_back(name);
				ArrDonorData.push_back(ID);
				ArrDonorData.push_back(email);
				ArrDonorData.push_back(passwordd);
				ArrDonorData.push_back(arr_disease);
				ArrDonorData.push_back(blood_type);
				ArrDonorData.push_back(age);
				ArrDonorData.push_back(date_of_last_donation);
				ArrDonorData.push_back(gender);

				ofstream edit;
				edit.open("Donor.txt", ios::app);
				for (int i = 0; i < ArrDonorData.size(); i++) {
					if (i % 9 != 8 || i == 0) {
						edit << ArrDonorData.at(i) << ",";
					}
					else {
						edit << ArrDonorData.at(i);
						edit << "\n";
					}
				}

				ofstream usern;
				usern.open("DonorEmails.txt", ios::app);
				for (int i = 1; i < ArrDonorData.size(); i += 9) {
					usern << ArrDonorData.at(i + 1) << "\n";
				}

				ofstream loginn;
				loginn.open("DonorLogIn.txt", ios::app);
				for (int i = 1; i < ArrDonorData.size(); i += 9) {
					loginn << ArrDonorData.at(i + 1) + "," + ArrDonorData.at(i + 2) << "\n";
				}


				loginn.close();
				edit.close();
				usern.close();
				ArrDonorData.clear();
				MessageBox::Show("In order to update your information, please log in again to your account..", "Update Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//back to home page
				this->Hide();
				obj->Show();

			}
			else {
				MessageBox::Show("Error! :You Must choose Your Gender", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Error! : You must display your data first ", "Update Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}

	private: System::Void textBox11_Click(System::Object^ sender, System::EventArgs^ e) {
		// Handle Cursor
		if (textBox11->Text == "Name")
		{
			textBox11->Text = "";
		}
		if (textBox5->Text == "")
		{
			textBox5->Text = "ID";
		}
		if (textBox7->Text == "")
		{
			textBox7->Text = "Email";
		}
		if (textBox10->Text == "")
		{
			textBox10->Text = "Password";
		}
		if (textBox3->Text == "")
		{
			textBox3->Text = "Age";
		}
		if (comboBox2->Text == "")
		{
			comboBox2->Text = "  Blood Type";
		}
		if (comboBox4->Text == "")
		{
			comboBox4->Text = " if you suffer from any diseases";
		}
	}
	private: System::Void textBox5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Handle Cursor
		if (textBox11->Text == "")
		{
			textBox11->Text = "Name";
		}
		if (textBox5->Text == "ID")
		{
			textBox5->Text = "";
		}
		if (textBox7->Text == "")
		{
			textBox7->Text = "Email";
		}
		if (textBox10->Text == "")
		{
			textBox10->Text = "Password";
		}
		if (textBox3->Text == "")
		{
			textBox3->Text = "Age";
		}
		if (comboBox2->Text == "")
		{
			comboBox2->Text = "  Blood Type";
		}
		if (comboBox4->Text == "")
		{
			comboBox4->Text = " if you suffer from any diseases";
		}
	}
	private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		// Handle Cursor
		if (textBox11->Text == "")
		{
			textBox11->Text = "Name";
		}
		if (textBox5->Text == "")
		{
			textBox5->Text = "ID";
		}
		if (textBox7->Text == "Email")
		{
			textBox7->Text = "";
		}
		if (textBox10->Text == "")
		{
			textBox10->Text = "Password";
		}
		if (textBox3->Text == "")
		{
			textBox3->Text = "Age";
		}
		if (comboBox2->Text == "")
		{
			comboBox2->Text = "  Blood Type";
		}
		if (comboBox4->Text == "")
		{
			comboBox4->Text = " if you suffer from any diseases";
		}
	}
	private: System::Void textBox10_Click(System::Object^ sender, System::EventArgs^ e) {
		// Handle Cursor
		if (textBox11->Text == "")
		{
			textBox11->Text = "Name";
		}
		if (textBox5->Text == "")
		{
			textBox5->Text = "ID";
		}
		if (textBox7->Text == "")
		{
			textBox7->Text = "Email";
		}
		if (textBox10->Text == "Password")
		{
			textBox10->Text = "";
		}
		if (textBox3->Text == "")
		{
			textBox3->Text = "Age";
		}
		if (comboBox2->Text == "")
		{
			comboBox2->Text = "  Blood Type";
		}
		if (comboBox4->Text == "")
		{
			comboBox4->Text = " if you suffer from any diseases";
		}
	}
	private: System::Void textBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Handle Cursor
		if (textBox11->Text == "")
		{
			textBox11->Text = "Name";
		}
		if (textBox5->Text == "")
		{
			textBox5->Text = "ID";
		}
		if (textBox7->Text == "")
		{
			textBox7->Text = "Email";
		}
		if (textBox10->Text == "")
		{
			textBox10->Text = "Password";
		}
		if (textBox3->Text == "Age")
		{
			textBox3->Text = "";
		}
		if (comboBox2->Text == "")
		{
			comboBox2->Text = "  Blood Type";
		}
		if (comboBox4->Text == "")
		{
			comboBox4->Text = " if you suffer from any diseases";
		}
	}

	private: System::Void comboBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Handle Cursor
		if (textBox11->Text == "")
		{
			textBox11->Text = "Name";
		}
		if (textBox5->Text == "")
		{
			textBox5->Text = "ID";
		}
		if (textBox7->Text == "")
		{
			textBox7->Text = "Email";
		}
		if (textBox10->Text == "")
		{
			textBox10->Text = "Password";
		}
		if (textBox3->Text == "")
		{
			textBox3->Text = "Age";
		}
		if (comboBox2->Text == "  Blood Type")
		{
			comboBox2->Text = "";
		}
		if (comboBox4->Text == "")
		{
			comboBox4->Text = " if you suffer from any diseases";
		}
	}
	private: System::Void comboBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Handle Cursor
		if (textBox11->Text == "")
		{
			textBox11->Text = "Name";
		}
		if (textBox5->Text == "")
		{
			textBox5->Text = "ID";
		}
		if (textBox7->Text == "")
		{
			textBox7->Text = "Email";
		}
		if (textBox10->Text == "")
		{
			textBox10->Text = "Password";
		}
		if (textBox3->Text == "")
		{
			textBox3->Text = "Age";
		}
		if (comboBox2->Text == "")
		{
			comboBox2->Text = "  Blood Type";
		}
		if (comboBox4->Text == " if you suffer from any diseases")
		{
			comboBox4->Text = "";
		}
	}
	private: System::Void textBox12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox12->Text == "Email")
		{
			textBox12->Text = "";
		}

	}

	private: System::Void Donation_Request_Panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DonorUI_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		obj->Show();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			textBox10->UseSystemPasswordChar = false;
		}
		else
		{
			textBox10->UseSystemPasswordChar = true;
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// if user choose male , female disenabled
		if (checkBox2->Checked) {
			checkBox3->Enabled = false;
		}
		else {
			checkBox3->Enabled = true;
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// if user choose female , male disenabled
		if (checkBox3->Checked) {
			checkBox2->Enabled = false;
		}
		else {
			checkBox2->Enabled = true;
		}
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Last_Donation_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
