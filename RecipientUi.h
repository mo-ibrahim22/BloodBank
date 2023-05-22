#pragma once
#include <fstream>
#include<sstream>
#include<stack>
#include<iostream>
#include<string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <queue>
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
	/// Summary for RecipientUi
	/// </summary>
	public ref class RecipientUi : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		RecipientUi(void)
		{
			InitializeComponent();
		
			//
			//TODO: Add the constructor code here
			//
		}

		RecipientUi(Form^ obj1, String^ data)
		{
			obj = obj1;
			InitializeComponent();
			textBox11->Text = data;
			textBox12->Text = data;
			textBox9->Text = data;
			comboBox2->Text = "A+";
			comboBox1->Text = "1";
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RecipientUi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ available;
	private: System::Windows::Forms::DataGridView^ dataGrid;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Label^ Quantity;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ ABm_Button;
	private: System::Windows::Forms::Button^ Bm_Button;
	private: System::Windows::Forms::Button^ Om_Button;
	private: System::Windows::Forms::Button^ Am_Button;
	private: System::Windows::Forms::Button^ ABp_Button;
	private: System::Windows::Forms::Button^ Bp_Button;
	private: System::Windows::Forms::Button^ Op_Button;
	private: System::Windows::Forms::Button^ Ap_Button;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::CheckBox^ checkBox1;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RecipientUi::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Quantity = (gcnew System::Windows::Forms::Label());
			this->available = (gcnew System::Windows::Forms::Label());
			this->ABm_Button = (gcnew System::Windows::Forms::Button());
			this->Bm_Button = (gcnew System::Windows::Forms::Button());
			this->Om_Button = (gcnew System::Windows::Forms::Button());
			this->Am_Button = (gcnew System::Windows::Forms::Button());
			this->ABp_Button = (gcnew System::Windows::Forms::Button());
			this->Bp_Button = (gcnew System::Windows::Forms::Button());
			this->Op_Button = (gcnew System::Windows::Forms::Button());
			this->Ap_Button = (gcnew System::Windows::Forms::Button());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(280, 548);
			this->panel1->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(64, 490);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 51);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Logout";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &RecipientUi::button9_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(10, 174);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(257, 51);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Request Blood Type";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &RecipientUi::button7_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(10, 431);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(257, 51);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Delete Account";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &RecipientUi::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(10, 366);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(257, 51);
			this->button5->TabIndex = 34;
			this->button5->Text = L"Update Account";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &RecipientUi::button5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(10, 302);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(257, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Display Blood Data";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RecipientUi::button2_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::Control;
			this->button13->Location = System::Drawing::Point(10, 237);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(257, 51);
			this->button13->TabIndex = 0;
			this->button13->Text = L"Search Blood Type";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &RecipientUi::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->Quantity);
			this->panel3->Controls->Add(this->available);
			this->panel3->Controls->Add(this->ABm_Button);
			this->panel3->Controls->Add(this->Bm_Button);
			this->panel3->Controls->Add(this->Om_Button);
			this->panel3->Controls->Add(this->Am_Button);
			this->panel3->Controls->Add(this->ABp_Button);
			this->panel3->Controls->Add(this->Bp_Button);
			this->panel3->Controls->Add(this->Op_Button);
			this->panel3->Controls->Add(this->Ap_Button);
			this->panel3->Location = System::Drawing::Point(303, 18);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(820, 531);
			this->panel3->TabIndex = 3;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RecipientUi::panel3_Paint);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::SteelBlue;
			this->label1->Location = System::Drawing::Point(37, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 69);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Number of donors :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Quantity
			// 
			this->Quantity->BackColor = System::Drawing::Color::Transparent;
			this->Quantity->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quantity->ForeColor = System::Drawing::Color::Indigo;
			this->Quantity->Location = System::Drawing::Point(325, 18);
			this->Quantity->Name = L"Quantity";
			this->Quantity->Size = System::Drawing::Size(63, 58);
			this->Quantity->TabIndex = 9;
			this->Quantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Quantity->UseMnemonic = false;
			// 
			// available
			// 
			this->available->AutoSize = true;
			this->available->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 17, System::Drawing::FontStyle::Bold));
			this->available->ForeColor = System::Drawing::Color::Indigo;
			this->available->Location = System::Drawing::Point(576, 8);
			this->available->MaximumSize = System::Drawing::Size(257, 69);
			this->available->Name = L"available";
			this->available->Padding = System::Windows::Forms::Padding(17, 16, 17, 16);
			this->available->Size = System::Drawing::Size(109, 65);
			this->available->TabIndex = 8;
			this->available->Text = L"Status";
			this->available->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->available->UseCompatibleTextRendering = true;
			this->available->Click += gcnew System::EventHandler(this, &RecipientUi::available_Click);
			// 
			// ABm_Button
			// 
			this->ABm_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ABm_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ABm_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ABm_Button->Location = System::Drawing::Point(627, 279);
			this->ABm_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ABm_Button->Name = L"ABm_Button";
			this->ABm_Button->Size = System::Drawing::Size(176, 114);
			this->ABm_Button->TabIndex = 7;
			this->ABm_Button->Text = L"AB-";
			this->ABm_Button->UseVisualStyleBackColor = false;
			this->ABm_Button->Click += gcnew System::EventHandler(this, &RecipientUi::ABm_Button_Click);
			// 
			// Bm_Button
			// 
			this->Bm_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Bm_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bm_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Bm_Button->Location = System::Drawing::Point(435, 279);
			this->Bm_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Bm_Button->Name = L"Bm_Button";
			this->Bm_Button->Size = System::Drawing::Size(176, 114);
			this->Bm_Button->TabIndex = 6;
			this->Bm_Button->Text = L"B-";
			this->Bm_Button->UseVisualStyleBackColor = false;
			this->Bm_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Bm_Button_Click);
			// 
			// Om_Button
			// 
			this->Om_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Om_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Om_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Om_Button->Location = System::Drawing::Point(235, 279);
			this->Om_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Om_Button->Name = L"Om_Button";
			this->Om_Button->Size = System::Drawing::Size(176, 114);
			this->Om_Button->TabIndex = 5;
			this->Om_Button->Text = L"O-";
			this->Om_Button->UseVisualStyleBackColor = false;
			this->Om_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Om_Button_Click);
			// 
			// Am_Button
			// 
			this->Am_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Am_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Am_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Am_Button->Location = System::Drawing::Point(39, 279);
			this->Am_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Am_Button->Name = L"Am_Button";
			this->Am_Button->Size = System::Drawing::Size(176, 114);
			this->Am_Button->TabIndex = 4;
			this->Am_Button->Text = L"A-";
			this->Am_Button->UseVisualStyleBackColor = false;
			this->Am_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Am_Button_Click);
			// 
			// ABp_Button
			// 
			this->ABp_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ABp_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ABp_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->ABp_Button->Location = System::Drawing::Point(631, 117);
			this->ABp_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ABp_Button->Name = L"ABp_Button";
			this->ABp_Button->Size = System::Drawing::Size(176, 114);
			this->ABp_Button->TabIndex = 3;
			this->ABp_Button->Text = L"AB+";
			this->ABp_Button->UseVisualStyleBackColor = false;
			this->ABp_Button->Click += gcnew System::EventHandler(this, &RecipientUi::ABp_Button_Click);
			// 
			// Bp_Button
			// 
			this->Bp_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Bp_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Bp_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Bp_Button->Location = System::Drawing::Point(435, 117);
			this->Bp_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Bp_Button->Name = L"Bp_Button";
			this->Bp_Button->Size = System::Drawing::Size(176, 114);
			this->Bp_Button->TabIndex = 2;
			this->Bp_Button->Text = L"B+";
			this->Bp_Button->UseVisualStyleBackColor = false;
			this->Bp_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Bp_Button_Click);
			// 
			// Op_Button
			// 
			this->Op_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Op_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Op_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Op_Button->Location = System::Drawing::Point(235, 117);
			this->Op_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Op_Button->Name = L"Op_Button";
			this->Op_Button->Size = System::Drawing::Size(176, 114);
			this->Op_Button->TabIndex = 1;
			this->Op_Button->Text = L"O+";
			this->Op_Button->UseVisualStyleBackColor = false;
			this->Op_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Op_Button_Click);
			// 
			// Ap_Button
			// 
			this->Ap_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Ap_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Ap_Button->Font = (gcnew System::Drawing::Font(L"Symbol", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->Ap_Button->Location = System::Drawing::Point(43, 117);
			this->Ap_Button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ap_Button->Name = L"Ap_Button";
			this->Ap_Button->Size = System::Drawing::Size(176, 114);
			this->Ap_Button->TabIndex = 0;
			this->Ap_Button->Text = L"A+";
			this->Ap_Button->UseVisualStyleBackColor = false;
			this->Ap_Button->Click += gcnew System::EventHandler(this, &RecipientUi::Ap_Button_Click);
			// 
			// dataGrid
			// 
			this->dataGrid->AllowUserToAddRows = false;
			this->dataGrid->AllowUserToDeleteRows = false;
			this->dataGrid->AllowUserToOrderColumns = true;
			this->dataGrid->AllowUserToResizeColumns = false;
			this->dataGrid->AllowUserToResizeRows = false;
			this->dataGrid->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGrid->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGrid->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Traditional Arabic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::WhiteSmoke;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid->ColumnHeadersHeight = 45;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column3,
					this->Column4
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGrid->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGrid->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGrid->Location = System::Drawing::Point(18, 18);
			this->dataGrid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			this->dataGrid->RowHeadersWidth = 51;
			this->dataGrid->RowTemplate->Height = 26;
			this->dataGrid->Size = System::Drawing::Size(825, 812);
			this->dataGrid->TabIndex = 0;
			this->dataGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RecipientUi::dataGrid_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Blood Type";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Rec Date";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Exp Date";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->dataGrid);
			this->panel2->Location = System::Drawing::Point(285, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(861, 503);
			this->panel2->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->checkBox1);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Location = System::Drawing::Point(270, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(891, 500);
			this->panel4->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(705, 174);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 33;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &RecipientUi::checkBox1_CheckedChanged);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->checkBox3);
			this->panel5->Controls->Add(this->textBox7);
			this->panel5->Controls->Add(this->checkBox2);
			this->panel5->Controls->Add(this->comboBox3);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->textBox5);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Location = System::Drawing::Point(253, 23);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(482, 480);
			this->panel5->TabIndex = 28;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(21, 369);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(424, 91);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Edit Account";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RecipientUi::button3_Click);
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &RecipientUi::button3_MouseClick);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(305, 333);
			this->checkBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(69, 21);
			this->checkBox3->TabIndex = 25;
			this->checkBox3->Text = L"Female";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Black;
			this->textBox7->Location = System::Drawing::Point(21, 268);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(425, 30);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"Doctor of the case";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(305, 310);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(53, 21);
			this->checkBox2->TabIndex = 24;
			this->checkBox2->Text = L"Male";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &RecipientUi::checkBox2_CheckedChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Black;
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Enabled = false;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->ForeColor = System::Drawing::Color::White;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox3->Location = System::Drawing::Point(21, 310);
			this->comboBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox3->Size = System::Drawing::Size(278, 30);
			this->comboBox3->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Black;
			this->textBox6->Location = System::Drawing::Point(21, 225);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(425, 30);
			this->textBox6->TabIndex = 19;
			this->textBox6->Text = L"Hospital";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(21, 20);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(425, 30);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->UseWaitCursor = true;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(21, 59);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(425, 30);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"ID";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(21, 184);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(425, 30);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"Age";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(21, 102);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(425, 30);
			this->textBox4->TabIndex = 6;
			this->textBox4->Text = L"Email";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(21, 143);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(425, 30);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Password";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox9);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Location = System::Drawing::Point(30, 23);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(496, 400);
			this->panel6->TabIndex = 32;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::Black;
			this->textBox9->Location = System::Drawing::Point(18, 130);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(194, 30);
			this->textBox9->TabIndex = 29;
			this->textBox9->Text = L"Email";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->UseWaitCursor = true;
			this->textBox9->Click += gcnew System::EventHandler(this, &RecipientUi::textBox9_Click);
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &RecipientUi::textBox9_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(21, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 46);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Display your data";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RecipientUi::button1_Click_2);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->textBox10);
			this->panel7->Controls->Add(this->textBox11);
			this->panel7->Location = System::Drawing::Point(342, 10);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(804, 513);
			this->panel7->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(197, 280);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(326, 88);
			this->button6->TabIndex = 32;
			this->button6->Text = L"Delete Account";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &RecipientUi::button6_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::Black;
			this->textBox10->Location = System::Drawing::Point(109, 207);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(492, 36);
			this->textBox10->TabIndex = 31;
			this->textBox10->Text = L"Password";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->UseSystemPasswordChar = true;
			this->textBox10->Click += gcnew System::EventHandler(this, &RecipientUi::textBox10_Click);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox11->Enabled = false;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::Black;
			this->textBox11->Location = System::Drawing::Point(109, 160);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(492, 36);
			this->textBox11->TabIndex = 30;
			this->textBox11->Text = L"Email";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->UseWaitCursor = true;
			this->textBox11->Click += gcnew System::EventHandler(this, &RecipientUi::textBox11_Click);
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &RecipientUi::textBox11_TextChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->comboBox2);
			this->panel8->Controls->Add(this->button8);
			this->panel8->Controls->Add(this->comboBox1);
			this->panel8->Controls->Add(this->textBox12);
			this->panel8->Controls->Add(this->label2);
			this->panel8->Controls->Add(this->label4);
			this->panel8->Location = System::Drawing::Point(300, 10);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(824, 531);
			this->panel8->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::Black;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"O+", L"B+", L"AB+", L"A-", L"O-", L"B-",
					L"AB-"
			});
			this->comboBox2->Location = System::Drawing::Point(165, 206);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBox2->Size = System::Drawing::Size(201, 30);
			this->comboBox2->TabIndex = 38;
			this->comboBox2->Click += gcnew System::EventHandler(this, &RecipientUi::comboBox2_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(77, 297);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(371, 65);
			this->button8->TabIndex = 37;
			this->button8->Text = L"Request Blood Type";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &RecipientUi::button8_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox1->Location = System::Drawing::Point(165, 248);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(201, 30);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Click += gcnew System::EventHandler(this, &RecipientUi::comboBox1_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::LightSteelBlue;
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->ForeColor = System::Drawing::Color::Black;
			this->textBox12->Location = System::Drawing::Point(77, 166);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(372, 30);
			this->textBox12->TabIndex = 1;
			this->textBox12->Text = L"Email";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->Click += gcnew System::EventHandler(this, &RecipientUi::textBox12_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(57, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 36);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Apply Request";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(6, 423);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 18);
			this->label4->TabIndex = 31;
			// 
			// RecipientUi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1156, 548);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"RecipientUi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RecipientUi";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Void dataGrid_Shown(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void available_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   /////////////////////////////////////////////////////// search ///////////////////////////////////////////////////////////////////////////////////////////


		   void searchButton(string bloodType) {
			   fstream RecipientData;
			   stack <string>Blood_Donations;
			   //vector <string> Display_Blood_Type;
			   RecipientData.open("DonorUiData.txt");
			   if (RecipientData.is_open()) {
				   string line;
				   // Read all lines from the given Text File
				   while (getline(RecipientData, line))
				   {
					   string value;
					   istringstream   linestream(line);
					   // Split every line into values "email,pass ...."
					   while (getline(linestream, value, ','))
					   {
						   Blood_Donations.push(value);
					   }
				   }
				   int q = 0;
				   string Poped_Value;
				   bool exist = 0;
				   for (int i = Blood_Donations.size(); i > 0; i--) {
					   Poped_Value = Blood_Donations.top();
					   if (Poped_Value == bloodType) {
						   q++;
						   available->Text = "Available";
						   exist = 1;
					   }
					   Blood_Donations.pop();
				   }
				   string b = to_string(q);
				   String^ quantity;
				   quantity = gcnew String(b.c_str());
				   Quantity->Text = quantity;
				   if (!exist) {
					   available->Text = "Not Available";
				   }

			   }
			   RecipientData.close();
		   }
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
					   // Split every line into values "Name,Username ...."
					   while (getline(linestream, value, ','))
					   {
						   v.push_back(value);
					   }
				   }
			   }
			   File.close();
		   }
////////////////////////////////////////////////////////////end search//////////////////////////////////////////////////////////////////////

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Show();
		panel3->Hide();
		panel2->Hide();
		panel7->Hide();
		panel8->Hide();
		panel6->Show();
	}
	private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox11->Text == "Email") {
			textBox11->Text = "";
		}
		if (textBox10->Text == "") {
			textBox10->Text = "Password";
		}
	}
	private: System::Void textBox10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox11->Text == "") {
			textBox11->Text = "Email";
		}
		if (textBox10->Text == "Password") {
			textBox10->Text = "";
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGrid->Hide();
		panel2->Hide();
		panel3->Show();
		panel4->Hide();
		panel7->Hide();
		panel8->Hide();
	}
	private: System::Void textBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox9->Text == "Email") {
			textBox9->Text = "";
		}

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
		panel2->Show();
		panel6->Hide();
		panel7->Hide();
		panel8->Hide();
		dataGrid->Show();
		panel4->Hide();
		dataGrid->Rows->Clear();
		vector<string>getData;
		//vector <string> Display_Blood_Type;
//////////////////////////////////////////////////////////////display data///////////////////////////////////////////////////////////////////
		readData("DonorUiData.txt", getData);
		for (int i = 5; i < getData.size(); i = i + 9)
		{
			string Blood_Type = getData.at(i);
			string Date1 = getData.at(i + 1);
			string Date2 = getData.at(i + 2);

			String^ blood_type = msclr::interop::marshal_as<String^>(Blood_Type);
			String^ date1 = msclr::interop::marshal_as<String^>(Date1);
			String^ date2 = msclr::interop::marshal_as<String^>(Date2);
			int date;
			date = stoi(Date2) + 1;

			dataGrid->Rows->Add(blood_type, date1 + " - " + date2, date1 + " - " + date.ToString());
		}
	}

	private: System::Void Ap_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("A+");
	}
	private: System::Void Op_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("O+");
	}
	private: System::Void Bp_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("B+");
	}
	private: System::Void ABp_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("AB+");
	}
	private: System::Void Am_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("A-");
	}
	private: System::Void Om_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("O-");
	}
	private: System::Void Bm_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("B-");
	}
	private: System::Void ABm_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		searchButton("AB-");
	}


		   /////show data//////
		   int counter = 0;
		   bool b = false;
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		bool passing = false;
		String^ l_email = textBox9->Text;
		string l_Email = msclr::interop::marshal_as<string>(l_email);
		vector<string> RecipientData;
		readData("Recipient.txt", RecipientData);
		//Check if the entered email is correct or not
		for (int j = 1; j < RecipientData.size(); j++)
		{
			if (RecipientData.at(j + 1) == l_Email)
			{
				passing = true;
				counter = j;
				break;

			}
		}
		if (passing == true) {

			MessageBox::Show("Please review your data carefully before making any changes..", "Attention:", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}
		if (passing == false)
		{

			MessageBox::Show("Error! : Wrong Email or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		b = passing;

		if (passing == true)
		{
			String^ Name = msclr::interop::marshal_as<String^>(RecipientData[counter - 1]);
			textBox1->Text = Name;
			String^ Id = msclr::interop::marshal_as<String^>(RecipientData[counter]);
			textBox5->Text = Id;
			String^ em = msclr::interop::marshal_as<String^>(RecipientData[counter + 1]);
			textBox4->Text = em;
			String^ pas = msclr::interop::marshal_as<String^>(RecipientData[counter + 2]);
			textBox2->Text = pas;
			String^ age = msclr::interop::marshal_as<String^>(RecipientData[counter + 4]);
			textBox3->Text = age;
			String^ blood = msclr::interop::marshal_as<String^>(RecipientData[counter + 6]);
			comboBox3->Text = blood;
			String^ hos = msclr::interop::marshal_as<String^>(RecipientData[counter + 5]);
			textBox6->Text = hos;
			String^ doc = msclr::interop::marshal_as<String^>(RecipientData[counter + 7]);
			textBox7->Text = doc;
			RecipientData.clear();
		}
	}

		   ///////////update//////////////
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		if (b == true) {
			String^ PassWordd = textBox2->Text;
			string passwordd = msclr::interop::marshal_as<string>(PassWordd);
			int password_digit = passwordd.length();
			if (password_digit < 8) {
				MessageBox::Show("Error! : Password must be 8 digits", "You Can't register", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (checkBox2->Checked || checkBox3->Checked)
			{
				String^ username = textBox9->Text;
				string UserName = msclr::interop::marshal_as<string>(username);


				vector<string> ArrRecipientData;

				//Read form Donor file
				readData("Recipient.txt", ArrRecipientData);
				remove("Recipient.txt");
				remove("RecipientLogIn.txt");
				remove("RecipientEmails.txt");


				for (int j = 0; j < 9; j++) {
					ArrRecipientData.erase(ArrRecipientData.begin() + counter - 1);
				}

				String^ Name = textBox1->Text;
				String^ ID = textBox5->Text;
				String^ Email = textBox4->Text;
				String^ Gender;
				String^ Age = textBox3->Text;
				String^ Hospital = textBox6->Text;
				String^ BloodType = comboBox3->Text;
				String^ Doctor = textBox7->Text;
				if (checkBox2->Checked) {
					Gender = "Male";
				}
				else if (checkBox3->Checked) {
					Gender = "Female";
				}


				string name = msclr::interop::marshal_as<string>(Name);
				string id = msclr::interop::marshal_as<string>(ID);
				string email = msclr::interop::marshal_as<string>(Email);
				string gender = msclr::interop::marshal_as<string>(Gender);
				string age = msclr::interop::marshal_as<string>(Age);
				string hospital = msclr::interop::marshal_as<string>(Hospital);
				string blood_type = msclr::interop::marshal_as<string>(BloodType);
				string doctor = msclr::interop::marshal_as<string>(Doctor);

				ArrRecipientData.push_back(name);
				ArrRecipientData.push_back(id);
				ArrRecipientData.push_back(email);
				ArrRecipientData.push_back(passwordd);
				ArrRecipientData.push_back(gender);
				ArrRecipientData.push_back(age);
				ArrRecipientData.push_back(hospital);
				ArrRecipientData.push_back(blood_type);
				ArrRecipientData.push_back(doctor);

				ofstream edit;
				edit.open("Recipient.txt", ios::app);
				for (int i = 0; i < ArrRecipientData.size(); i++) {
					if (i % 9 != 8 || i == 0) {
						edit << ArrRecipientData.at(i) << ",";
					}
					else {
						edit << ArrRecipientData.at(i);
						edit << "\n";
					}
				}

				ofstream usern;
				usern.open("RecipientEmails.txt", ios::app);
				for (int i = 1; i < ArrRecipientData.size(); i += 9) {
					usern << ArrRecipientData.at(i + 1) << "\n";
				}

				ofstream loginn;
				loginn.open("RecipientLogIn.txt", ios::app);
				for (int i = 1; i < ArrRecipientData.size(); i += 9) {
					loginn << ArrRecipientData.at(i + 1) + "," + ArrRecipientData.at(i + 2) << "\n";
				}
				loginn.close();
				edit.close();
				usern.close();
				ArrRecipientData.clear();
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


		   /////////////////////////////////////////////////////////////////delet////////////////////////////////////////////////////////////////////


	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{

		int counter1 = 0;
		bool Login_Success = false;
		bool a = false;
		String^ email = textBox11->Text;
		string Email = msclr::interop::marshal_as<string>(email);
		String^ password = textBox10->Text;
		string PassWord = msclr::interop::marshal_as<string>(password);
		vector<string> RecipientData;

		readData("Recipient.txt", RecipientData);

		//Check if the entered Email is correct or not
		for (int j = 1; j < RecipientData.size(); j = j + 9) {
			if (RecipientData.at(j + 1) == Email) {
				if (RecipientData.at(j + 2) == PassWord) {
					Login_Success = true;
					counter1 = j;
					break;
				}
			}
		}
		if (Login_Success == false) {

			MessageBox::Show("Error! : Wrong Email or Password", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		a = Login_Success;
		if (Login_Success == true)
		{
			remove("Recipient.txt");
			remove("RecipientLogIn.txt");
			remove("RecipientEmails.txt");
			for (int j = 0; j < 9; j++)
			{
				RecipientData.erase(RecipientData.begin() + counter1 - 1);
			}
			ofstream edit;
			edit.open("Recipient.txt", ios::app);
			for (int i = 0; i < RecipientData.size(); i++) {
				if (i % 9 != 8 || i == 0) {
					edit << RecipientData.at(i) << ",";
				}
				else {
					edit << RecipientData.at(i);
					edit << "\n";
				}
			}
			ofstream usern;
			usern.open("RecipientEmails.txt", ios::app);
			for (int i = 1; i < RecipientData.size(); i += 9)
			{
				usern << RecipientData.at(i + 1) << "\n";
			}
			ofstream loginn;
			loginn.open("RecipientLogIn.txt", ios::app);
			for (int i = 1; i < RecipientData.size(); i += 9)
			{
				loginn << RecipientData.at(i + 1) + "," + RecipientData.at(i + 2) << "\n";
			}
			loginn.close();
			edit.close();
			usern.close();
			RecipientData.clear();
			MessageBox::Show("Success! :Your account has been Deleted", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();
			obj->Show();
		}
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel7->Show();
		panel8->Hide();
		panel3->Hide();
		panel2->Hide();
		panel4->Hide();
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		panel7->Hide();
		panel8->Show();
		panel3->Hide();
		panel2->Hide();
		panel6->Hide();
		panel4->Hide();
	}
	private: System::Void textBox12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox12->Text == "Email") {
			textBox12->Text = "";
		}
		if (comboBox2->Text == "") {
			comboBox2->Text = "Blood Type";
		}
		if (comboBox1->Text == "") {
			comboBox1->Text = "Quantity";
		}
	}
	private: System::Void comboBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox12->Text == "") {
			textBox12->Text = "Email";
		}
		if (comboBox2->Text == "Blood Type") {
			comboBox2->Text = "";
		}
		if (comboBox1->Text == "") {
			comboBox1->Text = "Quantity";
		}
	}
	private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox12->Text == "") {
			textBox12->Text = "Email";
		}
		if (comboBox2->Text == "") {
			comboBox2->Text = "Blood Type";
		}
		if (comboBox1->Text == "Quantity") {
			comboBox1->Text = "";
		}
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{

		int tmp = 0;
		bool success = false;
		bool b = false;

		// take inputs from the user
		String^ email = textBox12->Text;
		String^ blood_type = comboBox2->Text;
		String^ quantity = comboBox1->Text;

		// convert inputs' datatype
		string Email = msclr::interop::marshal_as<string>(email);
		string Blood_Type = msclr::interop::marshal_as<string>(blood_type);
		string Quantity = msclr::interop::marshal_as<string>(quantity);


		//convert to int 
		int qt;
		qt = stoi(Quantity);
		queue<string> q_Recipient_Req_Data;


		bool Email_exist = false;

		// to open DonorUiData to take all Btype an push them into a vector
		fstream BLOOD_TYPES;

		BLOOD_TYPES.open("DonorUiData.txt");

		vector <string> v_Blood_Types;
		vector <string> bb;
		if (BLOOD_TYPES.is_open()) {
			string line;

			// Read all lines from the given Text File
			while (getline(BLOOD_TYPES, line))
			{
				string value;
				istringstream   linestream(line);

				// Split every line into values "email,pass ...."
				while (getline(linestream, value, ','))
				{
					string BloodTypes[8] = { "A+", "O+", "B+", "AB+","A-", "O-", "B-", "AB-" };
					for (int i = 0; i < 8; i++)
					{
						if (value == BloodTypes[i])
						{
							v_Blood_Types.push_back(value);
						}
					}
				}
			}
		}
		BLOOD_TYPES.close();


		// loop on the vector to check values of only one type and push into bb vector 
		for (int i = 0; i < v_Blood_Types.size(); i++)
		{
			if (Blood_Type == v_Blood_Types[i])
			{
				bb.push_back(v_Blood_Types[i]);
			}

		}

		//open Recipienttxt
		fstream RecipientData;
		RecipientData.open("Recipient.txt");

		vector <string> RecipData;

		stack <string> s_Don;

		if (RecipientData.is_open())
		{
			string line;

			// Read all lines from the given Text File

			while (getline(RecipientData, line))
			{
				string value;
				istringstream   linestream(line);

				// Split every line into values "email,pass ...."

				while (getline(linestream, value, ','))
				{

					RecipData.push_back(value);
				}
			}
			fstream DeleteDonation;

			vector <string> DeleteCompleteDonation;
			//read from DonorUiDatatxt
			readData("DonorUiData.txt", DeleteCompleteDonation);
			//check if quantity of one blood type <= bb vector size
			if (qt <= bb.size())
			{
				for (int i = 0; i < qt; i++)
				{
					for (int j = 0; j < DeleteCompleteDonation.size(); j += 9)
					{
						if (DeleteCompleteDonation.at(j + 5) == Blood_Type)
						{

							success = true;
							tmp = j;

							remove("DonorUiData.txt");

							for (int j = 0; j < 9; j++)
							{
								DeleteCompleteDonation.erase(DeleteCompleteDonation.begin() + tmp);

							}
							break;

						}
						else
						{
							success = false;


						}
					}

				}
			}
			else
			{
				MessageBox::Show("Regrettably, we do not have the desired amount of the blood type in the blood bank to meet your requirements.", "Regrettably,", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
			DeleteDonation.close();

			if (success == true)
			{
				//open DonorUiData and save 
				ofstream edit;

				edit.open("DonorUiData.txt", ios::app);

				for (int i = 0; i < DeleteCompleteDonation.size(); i++)
				{
					if (i % 9 != 8 || i == 0) {
						edit << DeleteCompleteDonation.at(i) << ",";
					}
					else {
						edit << DeleteCompleteDonation.at(i);
						edit << "\n";
					}
				}
				edit.close();
				DeleteCompleteDonation.clear();
			}


			//loop on Recipienttxt to take the btype of the reci... 
			for (int i = 1; i < RecipData.size(); i = i + 9)
			{

				if (RecipData.at(i + 1) == Email) {

					Email_exist = true;
					s_Don.push(RecipData.at(i + 6)); //blood type of Recepent
					break;
				}

			}
		}


		//check if the blood type is available by looping on vector
		bool found = false;
		String^ RequestedBloodType = comboBox2->Text;
		string Requested_BloodType = msclr::interop::marshal_as<string>(RequestedBloodType);
		for (int i = 0; i < v_Blood_Types.size(); i++)
		{
			if (Requested_BloodType == v_Blood_Types[i])
			{
				found = true;
			}

		}
		if (Email_exist == true)
		{
			q_Recipient_Req_Data.push(Email);
			q_Recipient_Req_Data.push(Blood_Type);
			q_Recipient_Req_Data.push(Quantity);
		}
		RecipientData.close();
		//open RecipientRequeststxt..
		fstream RecipientRequests;
		RecipientRequests.open("RecipientRequests.txt", ios::app);
		if (RecipientRequests.is_open())
		{
			// checked and then save into RecipientRequeststxt...
			if (Email_exist == true && found == true && success == true)
			{

				RecipientRequests << q_Recipient_Req_Data.front() << ",";
				q_Recipient_Req_Data.pop();
				RecipientRequests << q_Recipient_Req_Data.front() << ",";
				RecipientRequests << q_Recipient_Req_Data.back() << ",";
				RecipientRequests << s_Don.top() << "\n";
				MessageBox::Show("Success! : Hope you're feeling better..", "Request Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
		}

		if (Email_exist == false)
		{

			MessageBox::Show("Error! : Wrong Email", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}


		RecipientRequests.close();
	}


	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		obj->Show();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			textBox2->UseSystemPasswordChar = false;
		}
		else
		{
			textBox2->UseSystemPasswordChar = true;
		}
	}
};
}