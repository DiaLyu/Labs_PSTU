#pragma once
#include "calc.h"

calc bankCalc;

namespace bankСalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->UseWaitCursor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(129, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseWaitCursor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(3, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Размер кредита";
			this->label1->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Годовая процентная ставка";
			this->label2->UseWaitCursor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LimeGreen;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 49);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel1->Size = System::Drawing::Size(156, 139);
			this->panel1->TabIndex = 5;
			this->panel1->UseWaitCursor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(135, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"%";
			this->label6->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Срок кредита(мес.)";
			this->label3->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->Location = System::Drawing::Point(112, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(239, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Сброс";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::GreenYellow;
			this->label5->Location = System::Drawing::Point(176, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Изменение ставки";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ставка";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(49, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(181, 6);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1, 28);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Действует с:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LimeGreen;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(174, 49);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(209, 49);
			this->panel2->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(103, 28);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"месяца выплаты";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(67, 25);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(37, 20);
			this->textBox5->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::GreenYellow;
			this->label9->Location = System::Drawing::Point(9, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Основная информация*";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->справкаToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(428, 24);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->справкаToolStripMenuItem->Text = L"О программе";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::GreenYellow;
			this->label11->Location = System::Drawing::Point(176, 117);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(146, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Изменение срока выплаты";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(67, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(120, 13);
			this->label13->TabIndex = 20;
			this->label13->Text = L"месяца выплаты срок";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1, 31);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 13);
			this->label14->TabIndex = 21;
			this->label14->Text = L"сокращается до ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(89, 28);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(34, 20);
			this->textBox7->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(129, 31);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(51, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"месяцев";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1, 8);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 18;
			this->label12->Text = L"С";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(21, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(40, 20);
			this->textBox6->TabIndex = 19;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LimeGreen;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Location = System::Drawing::Point(175, 132);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(207, 55);
			this->panel3->TabIndex = 24;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::MediumBlue;
			this->label16->Location = System::Drawing::Point(13, 226);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 17);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Общая сумма";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::MediumBlue;
			this->label17->Location = System::Drawing::Point(127, 226);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 17);
			this->label17->TabIndex = 26;
			this->label17->Text = L"-";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::MediumBlue;
			this->label18->Location = System::Drawing::Point(16, 255);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 17);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Переплата";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::MediumBlue;
			this->label19->Location = System::Drawing::Point(127, 255);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 17);
			this->label19->TabIndex = 28;
			this->label19->Text = L"-";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(428, 367);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(444, 406);
			this->MinimumSize = System::Drawing::Size(444, 406);
			this->Name = L"MyForm";
			this->Text = L"Кредитный калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//в textBox можно вводить только цифры
	String^ TorZ;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	TorZ = Globalization::NumberFormatInfo::CurrentInfo->NumberDecimalSeparator;
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	bool TZFound = false;
    if (Char::IsDigit(e->KeyChar) == true) return;
	if (e->KeyChar == (char)Keys::Back) return;
	if (textBox1->Text->IndexOf(TorZ) != -1)
		TZFound = true;
	if (TZFound == true) { e->Handled = true; return; }
	if (e->KeyChar.ToString() == TorZ) return;
    e->Handled = true;
}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	bool TZFound = false;
	if (Char::IsDigit(e->KeyChar) == true) return;
	if (e->KeyChar == (char)Keys::Back) return;
	if (textBox2->Text->IndexOf(TorZ) != -1)
		TZFound = true;
	if (TZFound == true) { e->Handled = true; return; }
	if (e->KeyChar.ToString() == TorZ) return;
	e->Handled = true;
}

private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	bool TZFound = false;
	if (Char::IsDigit(e->KeyChar) == true) return;
	if (e->KeyChar == (char)Keys::Back) return;
	if (textBox3->Text->IndexOf(TorZ) != -1)
		TZFound = true;
	if (TZFound == true) { e->Handled = true; return; }
	if (e->KeyChar.ToString() == TorZ) return;
	e->Handled = true;
}

private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	bool TZFound = false;
	if (Char::IsDigit(e->KeyChar) == true) return;
	if (e->KeyChar == (char)Keys::Back) return;
	if (textBox1->Text->IndexOf(TorZ) != -1)
		TZFound = true;
	if (TZFound == true) { e->Handled = true; return; }
	if (e->KeyChar.ToString() == TorZ) return;
	e->Handled = true;
}

private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	bool TZFound = false;
	if (Char::IsDigit(e->KeyChar) == true) return;
	if (e->KeyChar == (char)Keys::Back) return;
	if (textBox2->Text->IndexOf(TorZ) != -1)
		TZFound = true;
	if (TZFound == true) { e->Handled = true; return; }
	if (e->KeyChar.ToString() == TorZ) return;
	e->Handled = true;
}

private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	bool TZFound = false;
	if (Char::IsDigit(e->KeyChar) == true) return;
	if (e->KeyChar == (char)Keys::Back) return;
	if (textBox3->Text->IndexOf(TorZ) != -1)
		TZFound = true;
	if (TZFound == true) { e->Handled = true; return; }
	if (e->KeyChar.ToString() == TorZ) return;
	e->Handled = true;
}

private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	bool TZFound = false;
	if (Char::IsDigit(e->KeyChar) == true) return;
	if (e->KeyChar == (char)Keys::Back) return;
	if (textBox1->Text->IndexOf(TorZ) != -1)
		TZFound = true;
	if (TZFound == true) { e->Handled = true; return; }
	if (e->KeyChar.ToString() == TorZ) return;
	e->Handled = true;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Single a, b, c, d, f, g, k, l = 0;

	Single A = Single::TryParse(textBox1->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
	Single B = Single::TryParse(textBox2->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
	Single C = Single::TryParse(textBox3->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, c);
	Single D = Single::TryParse(textBox4->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, d);
	Single F = Single::TryParse(textBox5->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, f);
	Single G = Single::TryParse(textBox6->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, g);
	Single K = Single::TryParse(textBox7->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, k);
	bankCalc.set_credit(a);
	bankCalc.set_perc(b);
	bankCalc.set_month(c);
	bankCalc.set_perc1(d);
	bankCalc.set_month1(f);
	bankCalc.set_month2(g);
	bankCalc.set_month3(k);
	if (a == 0 && b == 0 && c == 0 || a == 0 && b == 0 || a == 0 && c == 0 || b == 0 && c == 0) {
		MessageBox::Show("Вы не заполнили основные формы!", "Ошибка");
		return;
	}
	if (d == 0 && f == 0 && g == 0 && k == 0 || g == 0 && k == 0 && f > c || d == 0 && f == 0 && g >= c) {
		bankCalc.sum();
	}
	else if (g == 0 && k == 0 || g >= c) {
		bankCalc.sum1();
	}
	else if (d == 0 && f == 0 || f > c) {
		bankCalc.sum2();
	}
	else bankCalc.sum3();
	label17->Text = String::Format(" {0:F2}", bankCalc.total_amount);
	label19->Text = String::Format(" {0:F2}", bankCalc.overpayment);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	label17->Text = "";
	label19->Text = "";
}
private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Данный кредитный калькулятор настроен на аннуитентный платеж. При вводе значений отделяйте целую часть числа от дробной запятой. Приятного пользования!", "О программе");
}
    };
};
