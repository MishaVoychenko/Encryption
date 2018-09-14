#pragma once
#include"RSA.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(280, 264);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"creating a key";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(268, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"decryption";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(268, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"encryption";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(268, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"key generation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"D";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(68, 154);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(184, 20);
			this->textBox5->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"E";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(68, 128);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"n=p*q";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(68, 102);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(184, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"q";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(68, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"p";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(68, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Location = System::Drawing::Point(314, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(280, 264);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"key hacking";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 238);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(268, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"decryption";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(268, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"key recovery";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"D";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(72, 180);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(184, 20);
			this->textBox6->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(31, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"q";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(72, 154);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(184, 20);
			this->textBox7->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(31, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"p";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(72, 128);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(184, 20);
			this->textBox8->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(31, 79);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"n";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(72, 76);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(184, 20);
			this->textBox9->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(31, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"E";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(72, 50);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(184, 20);
			this->textBox10->TabIndex = 12;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 288);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Encryption";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		unsigned long long p, q, n, E, D;
		p = Generator();
		q = Generator();
		n = p * q;
		E = Generate_E(p, q);
		D = Inverse(E, (p - 1)*(q - 1));
		textBox1->Text = Convert::ToString(p);
		textBox2->Text = Convert::ToString(q);
		textBox3->Text = Convert::ToString(n);
		textBox4->Text = Convert::ToString(E);
		textBox5->Text = Convert::ToString(D);
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ filename;
	unsigned char p;
	unsigned int m;
	unsigned long long m1, c, n, E;
	n = Convert::ToUInt64(textBox3->Text);
	E = Convert::ToUInt64(textBox4->Text);
	openFileDialog1->ShowDialog();
	filename = openFileDialog1->FileName;
	BinaryReader^ binReader = gcnew BinaryReader(File::Open(filename, FileMode::Open));
	BinaryWriter^ binWriter = gcnew BinaryWriter(File::Open(filename + ".rsa", FileMode::Create));
	try
	{
		do
		{
			p = binReader->ReadByte();
			m1 = static_cast<unsigned long long>(p);
			c = StepMOD(m1, E, n); 
			m = static_cast<unsigned int>(c);
			binWriter->Write(m);
		} while (1);
	}
	catch (...) {}
	binReader->Close();
	binWriter->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ filename;
	unsigned char p;
	unsigned int c1;
	unsigned long long m, c, n, D;
	n = Convert::ToUInt64(textBox3->Text);
	D = Convert::ToUInt64(textBox5->Text);
	openFileDialog1->ShowDialog();
	filename = openFileDialog1->FileName;
	String^ filename_write =filename->Replace(".rsa", "");
	BinaryReader^ binReader = gcnew BinaryReader(File::Open(filename, FileMode::Open));
	BinaryWriter^ binWriter = gcnew BinaryWriter(File::Open(filename_write->Replace(".", "_new.") , FileMode::CreateNew));
	try
	{
		do
		{
			c1 = binReader->ReadUInt32();
			c = static_cast<unsigned long long>(c1);
			m = StepMOD(c, D, n);
			p = static_cast<unsigned char>(m);
			binWriter->Write(p);
		} while (1);
	}
	catch (...) {}
	binReader->Close();
	binWriter->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	unsigned long long p, q, n, E, D, i = 3;
	E = Convert::ToUInt64(textBox10->Text);
	n = Convert::ToUInt64(textBox9->Text);
	while (i <= n)
	{
		if (n%i == 0) break;
		i += 2;
	}
	p = i; q = n / p;
	D = Inverse(E, (p - 1)*(q - 1));
	textBox8->Text = Convert::ToString(p);
	textBox7->Text = Convert::ToString(q);
	textBox6->Text = Convert::ToString(D);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ filename;
	unsigned char p;
	unsigned int c1;
	unsigned long long m, c, n, D;
	n = Convert::ToUInt64(textBox9->Text);
	D = Convert::ToUInt64(textBox6->Text);
	openFileDialog1->ShowDialog();
	filename = openFileDialog1->FileName;
	String^ filename_write = filename->Replace(".rsa", "");
	BinaryReader^ binReader = gcnew BinaryReader(File::Open(filename, FileMode::Open));
	BinaryWriter^ binWriter = gcnew BinaryWriter(File::Open(filename_write->Replace(".", "_new."), FileMode::CreateNew));
	try
	{
		do
		{
			c1 = binReader->ReadUInt32();
			c = static_cast<unsigned long long>(c1);
			m = StepMOD(c, D, n);
			p = static_cast<unsigned char>(m);
			binWriter->Write(p);
		} while (1);
	}
	catch (...) {}
	binReader->Close();
	binWriter->Close();
}
};
}
