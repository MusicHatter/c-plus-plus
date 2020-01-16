#pragma once

namespace MoneyConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox3;
	protected: 
	private: System::Windows::Forms::RadioButton^  RE;
	private: System::Windows::Forms::RadioButton^  ER;
	private: System::Windows::Forms::RadioButton^  RD;
	private: System::Windows::Forms::RadioButton^  DR;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtResult2;
	private: System::Windows::Forms::Label^  lblOper2;
	private: System::Windows::Forms::Label^  lblOper;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Button^  btnConvert;
	private: System::Windows::Forms::Button^  btnClose;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->RE = (gcnew System::Windows::Forms::RadioButton());
			this->ER = (gcnew System::Windows::Forms::RadioButton());
			this->RD = (gcnew System::Windows::Forms::RadioButton());
			this->DR = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtResult2 = (gcnew System::Windows::Forms::TextBox());
			this->lblOper2 = (gcnew System::Windows::Forms::Label());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox3->Controls->Add(this->RE);
			this->groupBox3->Controls->Add(this->ER);
			this->groupBox3->Controls->Add(this->RD);
			this->groupBox3->Controls->Add(this->DR);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->groupBox3->Location = System::Drawing::Point(394, 4);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(333, 158);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Направление конвертации";
			// 
			// RE
			// 
			this->RE->AutoSize = true;
			this->RE->ForeColor = System::Drawing::SystemColors::ControlText;
			this->RE->Location = System::Drawing::Point(9, 130);
			this->RE->Margin = System::Windows::Forms::Padding(4);
			this->RE->Name = L"RE";
			this->RE->Size = System::Drawing::Size(115, 21);
			this->RE->TabIndex = 3;
			this->RE->Text = L"Рубли в евро";
			this->RE->UseVisualStyleBackColor = true;
			this->RE->CheckedChanged += gcnew System::EventHandler(this, &Form1::RE_CheckedChanged);
			// 
			// ER
			// 
			this->ER->AutoSize = true;
			this->ER->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ER->Location = System::Drawing::Point(9, 102);
			this->ER->Margin = System::Windows::Forms::Padding(4);
			this->ER->Name = L"ER";
			this->ER->Size = System::Drawing::Size(115, 21);
			this->ER->TabIndex = 2;
			this->ER->Text = L"Евро в рубли";
			this->ER->UseVisualStyleBackColor = true;
			this->ER->CheckedChanged += gcnew System::EventHandler(this, &Form1::ER_CheckedChanged);
			// 
			// RD
			// 
			this->RD->AutoSize = true;
			this->RD->ForeColor = System::Drawing::SystemColors::ControlText;
			this->RD->Location = System::Drawing::Point(8, 55);
			this->RD->Margin = System::Windows::Forms::Padding(4);
			this->RD->Name = L"RD";
			this->RD->Size = System::Drawing::Size(142, 21);
			this->RD->TabIndex = 1;
			this->RD->Text = L"Рубли в доллары";
			this->RD->UseVisualStyleBackColor = true;
			this->RD->CheckedChanged += gcnew System::EventHandler(this, &Form1::RD_CheckedChanged);
			// 
			// DR
			// 
			this->DR->AutoSize = true;
			this->DR->Checked = true;
			this->DR->ForeColor = System::Drawing::SystemColors::ControlText;
			this->DR->Location = System::Drawing::Point(9, 27);
			this->DR->Margin = System::Windows::Forms::Padding(4);
			this->DR->Name = L"DR";
			this->DR->Size = System::Drawing::Size(144, 21);
			this->DR->TabIndex = 0;
			this->DR->TabStop = true;
			this->DR->Text = L"Доллары в рубли";
			this->DR->UseVisualStyleBackColor = true;
			this->DR->CheckedChanged += gcnew System::EventHandler(this, &Form1::DR_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->txtResult2);
			this->groupBox2->Controls->Add(this->lblOper2);
			this->groupBox2->Controls->Add(this->lblOper);
			this->groupBox2->Controls->Add(this->txtResult);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->groupBox2->Location = System::Drawing::Point(5, 135);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(379, 82);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результат конвертации";
			// 
			// txtResult2
			// 
			this->txtResult2->BackColor = System::Drawing::SystemColors::Window;
			this->txtResult2->Location = System::Drawing::Point(208, 33);
			this->txtResult2->Margin = System::Windows::Forms::Padding(4);
			this->txtResult2->Name = L"txtResult2";
			this->txtResult2->ReadOnly = true;
			this->txtResult2->Size = System::Drawing::Size(132, 22);
			this->txtResult2->TabIndex = 3;
			// 
			// lblOper2
			// 
			this->lblOper2->AutoSize = true;
			this->lblOper2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblOper2->Location = System::Drawing::Point(183, 37);
			this->lblOper2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOper2->Name = L"lblOper2";
			this->lblOper2->Size = System::Drawing::Size(16, 17);
			this->lblOper2->TabIndex = 2;
			this->lblOper2->Text = L"=";
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblOper->Location = System::Drawing::Point(155, 37);
			this->lblOper->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(16, 17);
			this->lblOper->TabIndex = 1;
			this->lblOper->Text = L"$";
			// 
			// txtResult
			// 
			this->txtResult->BackColor = System::Drawing::SystemColors::Window;
			this->txtResult->Location = System::Drawing::Point(13, 33);
			this->txtResult->Margin = System::Windows::Forms::Padding(4);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(132, 22);
			this->txtResult->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->txt2);
			this->groupBox1->Controls->Add(this->txt1);
			this->groupBox1->Controls->Add(this->lbl2);
			this->groupBox1->Controls->Add(this->lbl1);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->groupBox1->Location = System::Drawing::Point(5, 4);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(381, 123);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(215, 65);
			this->txt2->Margin = System::Windows::Forms::Padding(4);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(132, 22);
			this->txt2->TabIndex = 3;
			this->txt2->Text = L"0,00";
			this->txt2->MouseLeave += gcnew System::EventHandler(this, &Form1::txt2_MouseLeave_1);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(215, 29);
			this->txt1->Margin = System::Windows::Forms::Padding(4);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(132, 22);
			this->txt1->TabIndex = 2;
			this->txt1->MouseLeave += gcnew System::EventHandler(this, &Form1::txt1_MouseLeave_1);
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl2->Location = System::Drawing::Point(9, 65);
			this->lbl2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(153, 17);
			this->lbl2->TabIndex = 1;
			this->lbl2->Text = L"Курс обмена (руб./$) :";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl1->Location = System::Drawing::Point(5, 29);
			this->lbl1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(202, 17);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Сумма для конвертирования:";
			// 
			// btnConvert
			// 
			this->btnConvert->Location = System::Drawing::Point(392, 169);
			this->btnConvert->Margin = System::Windows::Forms::Padding(4);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(204, 50);
			this->btnConvert->TabIndex = 11;
			this->btnConvert->Text = L"Конвертировать";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Form1::btnConvert_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(604, 169);
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(123, 50);
			this->btnClose->TabIndex = 10;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Form1::btnClose_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 228);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->btnClose);
			this->Name = L"Form1";
			this->Text = L"Converter";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double sum;
		double course;
		double course1;
		double course2;
		double course3;
		double course4;
		double Result;

	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((!Double::TryParse(txt1->Text, sum) || (!Double::TryParse(txt2->Text, course))) || ((sum < 0) || (course <= 0))) {
				 this->txtResult->Text = "";
				 this->txtResult2->Text = "";
				 MessageBox::Show("Введите допустимое значение", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 return;
			 }
				 sum = Convert::ToDouble(txt1->Text);
				 course = Convert::ToDouble(txt2->Text);
				 if (DR->Checked)
				 {
					 Result = Math::Truncate(sum*course*100)/100;
				 this->txtResult->Text=Convert::ToString(sum);
				 this->txtResult2->Text=Convert::ToString(Result);
				 }
				 else if(RD->Checked)
				 {
					 Result = Math::Truncate(sum/course*100)/100;
				 this->txtResult->Text=Convert::ToString(sum);
				 this->txtResult2->Text=Convert::ToString(Result);
				 }
				 else if (ER->Checked)
				 {
					 Result = Math::Truncate(sum*course*100)/100;
				 this->txtResult->Text=Convert::ToString(sum);
				 this->txtResult2->Text=Convert::ToString(Result);
				 }
				 else if(RE->Checked)
				 {
					 Result = Math::Truncate(sum/course*100)/100;
				 this->txtResult->Text=Convert::ToString(sum);
				 this->txtResult2->Text=Convert::ToString(Result);
				 }
				 if (!txtResult->Text->Length == 0)
			 {
			 double course = Convert::ToDouble(txtResult->Text);
			 this->txtResult->Text = course.ToString("F2");}
		 }
private: System::Void DR_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->lblOper->Text = "$";
			 this->lblOper2->Text = "=";
			 if	(DR->Checked == true)
			 {
				 this->txt2->Text = course1.ToString("F2");
			 }
			 else
			 {
				 if (!txt2->Text->Length == 0)
				course1 = Convert::ToDouble(txt2->Text);
			 this->txt1->Text = "";
			 this->txtResult->Text = "";
			 this->txtResult2->Text = "";
		 }
		 }
private: System::Void RD_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->lblOper->Text = "Р";
			 this->lblOper2->Text = "=";
			 if	(RD->Checked == true)
			 {
				 this->txt2->Text = course2.ToString("F2");
			 }
			 else
			 {
				 if (!txt2->Text->Length == 0)
				 course2 = Convert::ToDouble(txt2->Text);
			 this->txt1->Text = "";
			 this->txtResult->Text = "";
			 this->txtResult2->Text = "";
		 }
		 }
private: System::Void ER_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->lblOper->Text = "€";
			 this->lblOper2->Text = "=";
			 if	(ER->Checked == true)
			 {
				 this->txt2->Text = course3.ToString("F2");
			 }
			 else
			 {
				 if (!txt2->Text->Length == 0)
				 course3 = Convert::ToDouble(txt2->Text);
			 this->txt1->Text = "";
			 this->txtResult->Text = "";
			 this->txtResult2->Text = "";
		 }
		 }
private: System::Void RE_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->lblOper->Text = "Р";
			 this->lblOper2->Text = "=";
			 if	(RE->Checked == true)
			 {
				 this->txt2->Text = course4.ToString("F2");
			 }
			 else
			 {
				 if (!txt2->Text->Length == 0)
				 course4 = Convert::ToDouble(txt2->Text);
			 this->txt1->Text = "";
			 this->txtResult->Text = "";
			 this->txtResult2->Text = "";
			 }
		 }
private: System::Void txt1_MouseLeave_1(System::Object^  sender, System::EventArgs^  e) {
			 if (!txt1->Text->Length == 0)
			 {
			 double sum = Convert::ToDouble(txt1->Text);
			 this->txt1->Text = sum.ToString("F2");
			 }
		 }
private: System::Void txt2_MouseLeave_1(System::Object^  sender, System::EventArgs^  e) {
			 if (!txt2->Text->Length == 0)
			 {
			 double course = Convert::ToDouble(txt2->Text);
			 this->txt2->Text = course.ToString("F2");}
		 }
};
}

