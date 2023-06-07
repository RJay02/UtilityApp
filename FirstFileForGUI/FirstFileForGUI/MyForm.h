#pragma once 
namespace FirstFileForGUI {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Panel^ panel4;





























	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ lblChange;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ Amount;
	private: System::Windows::Forms::Label^ Total;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::ComboBox^ Pay;









	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ panel2;












private: System::Windows::Forms::Label^ Label6;














private: System::Windows::Forms::Label^ label10;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->Pay = (gcnew System::Windows::Forms::ComboBox());
			this->lblChange = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Amount = (gcnew System::Windows::Forms::Label());
			this->Total = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->button16);
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button19);
			this->panel1->Controls->Add(this->button20);
			this->panel1->Controls->Add(this->button21);
			this->panel1->Location = System::Drawing::Point(664, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(319, 402);
			this->panel1->TabIndex = 0;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(4, 300);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(101, 93);
			this->button22->TabIndex = 41;
			this->button22->Text = L"0";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(107, 300);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(101, 93);
			this->button23->TabIndex = 40;
			this->button23->Text = L".";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(211, 300);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(101, 93);
			this->button24->TabIndex = 39;
			this->button24->Text = L"C";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(4, 201);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(101, 93);
			this->button16->TabIndex = 38;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(107, 201);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(101, 93);
			this->button17->TabIndex = 37;
			this->button17->Text = L"2";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(211, 201);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(101, 93);
			this->button18->TabIndex = 36;
			this->button18->Text = L"3";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(4, 102);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(101, 93);
			this->button13->TabIndex = 35;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(107, 102);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(101, 93);
			this->button14->TabIndex = 34;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(211, 102);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(101, 93);
			this->button15->TabIndex = 33;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(4, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(101, 93);
			this->button19->TabIndex = 32;
			this->button19->Text = L"7";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(107, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(101, 93);
			this->button20->TabIndex = 31;
			this->button20->Text = L"8";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(211, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(101, 93);
			this->button21->TabIndex = 30;
			this->button21->Text = L"9";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(12, 424);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(971, 160);
			this->panel3->TabIndex = 2;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Control;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->Amount);
			this->panel7->Controls->Add(this->lblChange);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Location = System::Drawing::Point(318, 11);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(320, 132);
			this->panel7->TabIndex = 4;
			// 
			// Pay
			// 
			this->Pay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pay->FormattingEnabled = true;
			this->Pay->Location = System::Drawing::Point(179, 17);
			this->Pay->Name = L"Pay";
			this->Pay->Size = System::Drawing::Size(111, 45);
			this->Pay->TabIndex = 3;
			this->Pay->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// lblChange
			// 
			this->lblChange->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblChange->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblChange->Location = System::Drawing::Point(199, 66);
			this->lblChange->Name = L"lblChange";
			this->lblChange->Size = System::Drawing::Size(111, 42);
			this->lblChange->TabIndex = 2;
			this->lblChange->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(8, 67);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 42);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Change";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(4, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(169, 42);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Pay using\r\n";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->button7);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->button25);
			this->panel6->Location = System::Drawing::Point(644, 11);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(319, 132);
			this->panel6->TabIndex = 4;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(19, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(274, 59);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Remove Item";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(159, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 59);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(19, 68);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(134, 59);
			this->button25->TabIndex = 11;
			this->button25->Text = L"Pay";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->Pay);
			this->panel4->Controls->Add(this->Total);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Location = System::Drawing::Point(3, 11);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(309, 132);
			this->panel4->TabIndex = 3;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// Amount
			// 
			this->Amount->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Amount->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Amount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Amount->Location = System::Drawing::Point(199, 11);
			this->Amount->Name = L"Amount";
			this->Amount->Size = System::Drawing::Size(111, 42);
			this->Amount->TabIndex = 3;
			this->Amount->Text = L"0";
			this->Amount->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Amount->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// Total
			// 
			this->Total->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Total->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Total->Location = System::Drawing::Point(179, 76);
			this->Total->Name = L"Total";
			this->Total->Size = System::Drawing::Size(111, 42);
			this->Total->TabIndex = 2;
			this->Total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Total->Click += gcnew System::EventHandler(this, &MyForm::Total_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 42);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Total";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-7, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 42);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Money Given";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->Label6);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(640, 371);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(473, 212);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(145, 145);
			this->button10->TabIndex = 70;
			this->button10->Text = L"£2.50";
			this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(318, 212);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(145, 145);
			this->button9->TabIndex = 69;
			this->button9->Text = L"£1.55";
			this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(167, 212);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(145, 145);
			this->button8->TabIndex = 68;
			this->button8->Text = L"£2.00";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(318, 61);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(145, 145);
			this->button6->TabIndex = 67;
			this->button6->Text = L"£2.00";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(16, 61);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(145, 145);
			this->button5->TabIndex = 66;
			this->button5->Text = L"£1.50";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(16, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(145, 145);
			this->button3->TabIndex = 65;
			this->button3->Text = L"£2.00";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(167, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(145, 145);
			this->button2->TabIndex = 64;
			this->button2->Text = L"£1.20";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(473, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(145, 145);
			this->button4->TabIndex = 63;
			this->button4->Text = L"£1.65";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(529, 3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 39);
			this->label10->TabIndex = 60;
			this->label10->Text = L"Items";
			// 
			// Label6
			// 
			this->Label6->AutoSize = true;
			this->Label6->BackColor = System::Drawing::SystemColors::Control;
			this->Label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label6->Location = System::Drawing::Point(3, 3);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(331, 39);
			this->Label6->TabIndex = 59;
			this->Label6->Text = L"RJ Vending Machine";
			this->Label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->dataGridView1);
			this->panel5->Location = System::Drawing::Point(989, 12);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(405, 572);
			this->panel5->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(359, 369);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Item";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Qty";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Amount";
			this->Column3->Name = L"Column3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1403, 596);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		Double CostofItem()
		{
			try {
				double sum = 0;
				for (int i = 0; i < dataGridView1->Rows->Count; i++)
				{
					sum = sum + Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value);
				}
				return sum;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		public: System::Void AddCost()
		{
			try
			{
				for (int i = 0; i < dataGridView1->Rows->Count; i++)
				{
					Total->Text = String::Format("{0:c2}", CostofItem());
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

			  private:System::Void Change()
			  {
				  try 
				  {
					  double q, c;
					  q = 0;
					  if (dataGridView1->Rows->Count > 0)
					  {
						  q = CostofItem();
						  c = Convert::ToInt32(Amount->Text);
						  lblChange->Text = String::Format("{0:c2}", (c - q));
 					  }
				  }
				  catch (Exception^ ex)
				  {
					  MessageBox::Show(ex->Message);
				  }
			  }

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Pay->Items->Add("Cash");
		Pay->Items->Add("Card");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 1.50;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	
private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {

	Button^ b = safe_cast<Button^>(sender);

	if (Amount->Text == "0")
	{
		Amount->Text = b->Text;
	}
	else if (b->Text == ".")
	{
		if (!Amount->Text->Contains("."))
		{
			Amount->Text = Amount->Text + b->Text;
		}
	}
		else
			Amount->Text = Amount->Text + b->Text;
	}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
			Amount->Text = "0";
}
private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 2.50;
	dataGridView1->Rows->Add("Dairy Milk Oreo", "1", PriceofItem);
	AddCost();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 1.55;
	dataGridView1->Rows->Add("Walkers McCoy's", "1", PriceofItem);
	AddCost();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 2;
	dataGridView1->Rows->Add("Walkers Max", "1", PriceofItem);
	AddCost();
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 1.5;
	dataGridView1->Rows->Add("Bueno", "1", PriceofItem);
	AddCost();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 2;
	dataGridView1->Rows->Add("Sensations", "1", PriceofItem);
	AddCost();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 1.2;
	dataGridView1->Rows->Add("Wispa", "1", PriceofItem);
	AddCost();
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 2;
	dataGridView1->Rows->Add("Lucozade", "1", PriceofItem);
	AddCost();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceofItem = 1.65;
	dataGridView1->Rows->Add("Ribena", "1", PriceofItem);
	AddCost();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Pay->Text == "Cash")
	{
		Change();
	}
	else
	{
		lblChange->Text = "";
		Amount->Text = "0";
	}
	MessageBox::Show("Your items has been dispensed");
	MessageBox::Show("You have received a change of " + (lblChange->Text));
	dataGridView1->Rows->Clear();
	lblChange->Text = "";
	Amount->Text = "0";
	Total->Text = "";
	Pay->Text = "";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	for each (DataGridViewRow ^ row in this->dataGridView1->SelectedRows)
	{
		dataGridView1->Rows->Remove(row);
	}
	AddCost();

	if (Pay->Text == "Cash")
	{
		Change();
	}
	else
	{
		lblChange->Text = "";
		Amount->Text = "0";
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	lblChange->Text = "";
	Amount->Text = "0";
	Total->Text = "";
	Pay->Text = "";
}
private: System::Void Total_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
