#pragma once

namespace FirstFileForGUI {

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

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::ComboBox^ comboBox1;








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





	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ Label6;


private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button7;


















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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel2->SuspendLayout();
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
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(12, 428);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(978, 160);
			this->panel3->TabIndex = 2;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->button7);
			this->panel6->Controls->Add(this->button6);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->button25);
			this->panel6->Location = System::Drawing::Point(650, 16);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(319, 132);
			this->panel6->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Location = System::Drawing::Point(3, 16);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(309, 132);
			this->panel4->TabIndex = 3;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 42);
			this->label2->TabIndex = 0;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 42);
			this->label3->TabIndex = 1;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(138, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 42);
			this->label4->TabIndex = 2;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(138, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 42);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label5";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Control;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->comboBox1);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(319, 16);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(320, 132);
			this->panel7->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(138, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 42);
			this->label7->TabIndex = 2;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(8, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 42);
			this->label8->TabIndex = 1;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(8, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 42);
			this->label9->TabIndex = 0;
			this->label9->Text = L"label9";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(136, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(113, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(4, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(134, 59);
			this->button25->TabIndex = 11;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(4, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(101, 93);
			this->button19->TabIndex = 32;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(107, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(101, 93);
			this->button20->TabIndex = 31;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(211, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(101, 93);
			this->button21->TabIndex = 30;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(4, 102);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(101, 93);
			this->button13->TabIndex = 35;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(107, 102);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(101, 93);
			this->button14->TabIndex = 34;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(211, 102);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(101, 93);
			this->button15->TabIndex = 33;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(4, 201);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(101, 93);
			this->button16->TabIndex = 38;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(107, 201);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(101, 93);
			this->button17->TabIndex = 37;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(211, 201);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(101, 93);
			this->button18->TabIndex = 36;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(4, 300);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(101, 93);
			this->button22->TabIndex = 41;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(107, 300);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(101, 93);
			this->button23->TabIndex = 40;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(211, 300);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(101, 93);
			this->button24->TabIndex = 39;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->Label6);
			this->panel2->Controls->Add(this->button40);
			this->panel2->Controls->Add(this->button39);
			this->panel2->Controls->Add(this->button38);
			this->panel2->Controls->Add(this->button37);
			this->panel2->Controls->Add(this->button36);
			this->panel2->Controls->Add(this->button35);
			this->panel2->Controls->Add(this->button34);
			this->panel2->Controls->Add(this->button33);
			this->panel2->Controls->Add(this->button30);
			this->panel2->Controls->Add(this->button29);
			this->panel2->Controls->Add(this->button28);
			this->panel2->Controls->Add(this->button27);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(646, 377);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(324, 61);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 93);
			this->button2->TabIndex = 34;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(217, 61);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 93);
			this->button3->TabIndex = 35;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(110, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 93);
			this->button4->TabIndex = 36;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(3, 61);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 93);
			this->button5->TabIndex = 37;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(538, 61);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(101, 93);
			this->button11->TabIndex = 43;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(431, 61);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(101, 93);
			this->button12->TabIndex = 44;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(3, 160);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(101, 93);
			this->button27->TabIndex = 45;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(3, 259);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(101, 93);
			this->button28->TabIndex = 46;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(324, 160);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(101, 93);
			this->button29->TabIndex = 47;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(217, 160);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(101, 93);
			this->button30->TabIndex = 48;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(324, 259);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(101, 93);
			this->button33->TabIndex = 51;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(538, 259);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(101, 93);
			this->button34->TabIndex = 52;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(431, 259);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(101, 93);
			this->button35->TabIndex = 53;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(431, 160);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(101, 93);
			this->button36->TabIndex = 54;
			this->button36->Text = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(538, 160);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(101, 93);
			this->button37->TabIndex = 55;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(217, 259);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(101, 93);
			this->button38->TabIndex = 56;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(110, 259);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(101, 93);
			this->button39->TabIndex = 57;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(110, 160);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(101, 93);
			this->button40->TabIndex = 58;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
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
			this->Label6->Size = System::Drawing::Size(110, 39);
			this->Label6->TabIndex = 59;
			this->Label6->Text = L"label6";
			this->Label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
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
			this->label10->Size = System::Drawing::Size(110, 39);
			this->label10->TabIndex = 60;
			this->label10->Text = L"label6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(178, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 59);
			this->button1->TabIndex = 12;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(4, 66);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(134, 59);
			this->button6->TabIndex = 13;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(178, 66);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(134, 59);
			this->button7->TabIndex = 14;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(996, 596);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
};
}
