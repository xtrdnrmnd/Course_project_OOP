#pragma once
#include "BankAccount.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Phone;
	protected:

	private: System::Windows::Forms::Button^  Internet;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  back;
	public: System::Windows::Forms::Button^  Beeline;
	private:

	private: System::Windows::Forms::Button^  Tele2;
	private: System::Windows::Forms::Button^  MTS;
	private: System::Windows::Forms::Button^  Megafon;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  enterBtn;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  megafonP;
	private: System::Windows::Forms::PictureBox^  tele2P;
	private: System::Windows::Forms::PictureBox^  beelineP;
	private: System::Windows::Forms::PictureBox^  mtsP;
	private: System::Windows::Forms::Button^  BackToOperator;
	private: System::Windows::Forms::Label^  paymentAcception;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::PictureBox^  pictureBox5;
			this->Phone = (gcnew System::Windows::Forms::Button());
			this->Internet = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->back = (gcnew System::Windows::Forms::Button());
			this->Beeline = (gcnew System::Windows::Forms::Button());
			this->Tele2 = (gcnew System::Windows::Forms::Button());
			this->MTS = (gcnew System::Windows::Forms::Button());
			this->Megafon = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->enterBtn = (gcnew System::Windows::Forms::Button());
			this->megafonP = (gcnew System::Windows::Forms::PictureBox());
			this->tele2P = (gcnew System::Windows::Forms::PictureBox());
			this->beelineP = (gcnew System::Windows::Forms::PictureBox());
			this->mtsP = (gcnew System::Windows::Forms::PictureBox());
			this->BackToOperator = (gcnew System::Windows::Forms::Button());
			this->paymentAcception = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->megafonP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tele2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->beelineP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mtsP))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox5
			// 
			pictureBox5->Enabled = false;
			pictureBox5->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\Курсовая 2.0 — копия (3) — копия\\Project3\\Project3\\Без"
				L" названия.png";
			pictureBox5->Location = System::Drawing::Point(621, 0);
			pictureBox5->Name = L"pictureBox5";
			pictureBox5->Size = System::Drawing::Size(203, 143);
			pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			pictureBox5->TabIndex = 20;
			pictureBox5->TabStop = false;
			// 
			// Phone
			// 
			this->Phone->BackColor = System::Drawing::Color::SandyBrown;
			this->Phone->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->Phone->FlatAppearance->BorderSize = 5;
			this->Phone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Phone->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Phone->Location = System::Drawing::Point(171, 150);
			this->Phone->Margin = System::Windows::Forms::Padding(4);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(313, 113);
			this->Phone->TabIndex = 0;
			this->Phone->Text = L"Мобильная связь";
			this->Phone->UseVisualStyleBackColor = false;
			this->Phone->Click += gcnew System::EventHandler(this, &MyForm1::Phone_Click);
			// 
			// Internet
			// 
			this->Internet->BackColor = System::Drawing::Color::SandyBrown;
			this->Internet->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->Internet->FlatAppearance->BorderSize = 5;
			this->Internet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Internet->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Internet->Location = System::Drawing::Point(492, 150);
			this->Internet->Margin = System::Windows::Forms::Padding(4);
			this->Internet->Name = L"Internet";
			this->Internet->Size = System::Drawing::Size(313, 113);
			this->Internet->TabIndex = 1;
			this->Internet->Text = L"Интернет";
			this->Internet->UseVisualStyleBackColor = false;
			this->Internet->Click += gcnew System::EventHandler(this, &MyForm1::Internet_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Sh1", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(952, 146);
			this->label2->TabIndex = 6;
			this->label2->Text = L"LOCAL BANK";
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::SandyBrown;
			this->back->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->back->FlatAppearance->BorderSize = 5;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->back->Location = System::Drawing::Point(334, 270);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(313, 113);
			this->back->TabIndex = 7;
			this->back->Text = L"Назад";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// Beeline
			// 
			this->Beeline->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Beeline->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Beeline->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->Beeline->FlatAppearance->BorderSize = 5;
			this->Beeline->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Beeline->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->Beeline->Location = System::Drawing::Point(173, 187);
			this->Beeline->Name = L"Beeline";
			this->Beeline->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->Beeline->Size = System::Drawing::Size(313, 113);
			this->Beeline->TabIndex = 8;
			this->Beeline->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Beeline->UseVisualStyleBackColor = true;
			this->Beeline->Visible = false;
			this->Beeline->Click += gcnew System::EventHandler(this, &MyForm1::Beeline_Click);
			// 
			// Tele2
			// 
			this->Tele2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Tele2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Tele2->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->Tele2->FlatAppearance->BorderSize = 5;
			this->Tele2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Tele2->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->Tele2->Location = System::Drawing::Point(492, 187);
			this->Tele2->Name = L"Tele2";
			this->Tele2->Size = System::Drawing::Size(313, 113);
			this->Tele2->TabIndex = 9;
			this->Tele2->UseVisualStyleBackColor = false;
			this->Tele2->Visible = false;
			this->Tele2->Click += gcnew System::EventHandler(this, &MyForm1::Tele2_Click);
			// 
			// MTS
			// 
			this->MTS->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->MTS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->MTS->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->MTS->FlatAppearance->BorderSize = 5;
			this->MTS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MTS->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->MTS->Location = System::Drawing::Point(173, 306);
			this->MTS->Name = L"MTS";
			this->MTS->Size = System::Drawing::Size(313, 113);
			this->MTS->TabIndex = 10;
			this->MTS->UseVisualStyleBackColor = false;
			this->MTS->Visible = false;
			this->MTS->Click += gcnew System::EventHandler(this, &MyForm1::MTS_Click);
			// 
			// Megafon
			// 
			this->Megafon->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Megafon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Megafon->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->Megafon->FlatAppearance->BorderSize = 5;
			this->Megafon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Megafon->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->Megafon->Location = System::Drawing::Point(492, 306);
			this->Megafon->Name = L"Megafon";
			this->Megafon->Size = System::Drawing::Size(313, 113);
			this->Megafon->TabIndex = 11;
			this->Megafon->UseVisualStyleBackColor = false;
			this->Megafon->Visible = false;
			this->Megafon->Click += gcnew System::EventHandler(this, &MyForm1::Megafon_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label1->Location = System::Drawing::Point(353, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 30);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Выберите оператора:";
			this->label1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label3->Location = System::Drawing::Point(283, 290);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 30);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Введите сумму:";
			this->label3->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(468, 284);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 36);
			this->textBox1->TabIndex = 14;
			this->textBox1->Visible = false;
			// 
			// enterBtn
			// 
			this->enterBtn->BackColor = System::Drawing::Color::SandyBrown;
			this->enterBtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->enterBtn->FlatAppearance->BorderSize = 5;
			this->enterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enterBtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->enterBtn->Location = System::Drawing::Point(492, 326);
			this->enterBtn->Name = L"enterBtn";
			this->enterBtn->Size = System::Drawing::Size(313, 113);
			this->enterBtn->TabIndex = 15;
			this->enterBtn->Text = L"Ввести";
			this->enterBtn->UseVisualStyleBackColor = false;
			this->enterBtn->Visible = false;
			this->enterBtn->Click += gcnew System::EventHandler(this, &MyForm1::enterBtn_Click);
			// 
			// megafonP
			// 
			this->megafonP->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\5.jpg";
			this->megafonP->Location = System::Drawing::Point(534, 315);
			this->megafonP->Name = L"megafonP";
			this->megafonP->Size = System::Drawing::Size(242, 95);
			this->megafonP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->megafonP->TabIndex = 16;
			this->megafonP->TabStop = false;
			this->megafonP->Visible = false;
			this->megafonP->Click += gcnew System::EventHandler(this, &MyForm1::Megafon_Click);
			// 
			// tele2P
			// 
			this->tele2P->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\Tele2_Logo.jpg";
			this->tele2P->Location = System::Drawing::Point(534, 196);
			this->tele2P->Name = L"tele2P";
			this->tele2P->Size = System::Drawing::Size(242, 95);
			this->tele2P->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->tele2P->TabIndex = 17;
			this->tele2P->TabStop = false;
			this->tele2P->Visible = false;
			this->tele2P->Click += gcnew System::EventHandler(this, &MyForm1::Tele2_Click);
			// 
			// beelineP
			// 
			this->beelineP->Enabled = false;
			this->beelineP->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\Курсовая 2.0 — копия (3) — копия\\Project3\\Project3\\bee"
				L"line.jpg";
			this->beelineP->Location = System::Drawing::Point(210, 196);
			this->beelineP->Name = L"beelineP";
			this->beelineP->Size = System::Drawing::Size(242, 95);
			this->beelineP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->beelineP->TabIndex = 18;
			this->beelineP->TabStop = false;
			this->beelineP->Visible = false;
			this->beelineP->Click += gcnew System::EventHandler(this, &MyForm1::Beeline_Click);
			// 
			// mtsP
			// 
			this->mtsP->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\mts.jpg";
			this->mtsP->Location = System::Drawing::Point(191, 315);
			this->mtsP->Name = L"mtsP";
			this->mtsP->Size = System::Drawing::Size(242, 95);
			this->mtsP->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mtsP->TabIndex = 19;
			this->mtsP->TabStop = false;
			this->mtsP->Visible = false;
			this->mtsP->Click += gcnew System::EventHandler(this, &MyForm1::MTS_Click);
			// 
			// BackToOperator
			// 
			this->BackToOperator->BackColor = System::Drawing::Color::SandyBrown;
			this->BackToOperator->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->BackToOperator->FlatAppearance->BorderSize = 5;
			this->BackToOperator->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackToOperator->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->BackToOperator->Location = System::Drawing::Point(171, 326);
			this->BackToOperator->Name = L"BackToOperator";
			this->BackToOperator->Size = System::Drawing::Size(313, 113);
			this->BackToOperator->TabIndex = 21;
			this->BackToOperator->Text = L"Назад";
			this->BackToOperator->UseVisualStyleBackColor = false;
			this->BackToOperator->Visible = false;
			this->BackToOperator->Click += gcnew System::EventHandler(this, &MyForm1::BackToOperator_Click);
			// 
			// paymentAcception
			// 
			this->paymentAcception->AutoSize = true;
			this->paymentAcception->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->paymentAcception->Location = System::Drawing::Point(376, 251);
			this->paymentAcception->Name = L"paymentAcception";
			this->paymentAcception->Size = System::Drawing::Size(192, 30);
			this->paymentAcception->TabIndex = 22;
			this->paymentAcception->Text = L"Платеж совершен.";
			this->paymentAcception->Visible = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(952, 539);
			this->Controls->Add(this->paymentAcception);
			this->Controls->Add(this->BackToOperator);
			this->Controls->Add(pictureBox5);
			this->Controls->Add(this->mtsP);
			this->Controls->Add(this->beelineP);
			this->Controls->Add(this->tele2P);
			this->Controls->Add(this->megafonP);
			this->Controls->Add(this->enterBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Megafon);
			this->Controls->Add(this->MTS);
			this->Controls->Add(this->Tele2);
			this->Controls->Add(this->Beeline);
			this->Controls->Add(this->back);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Internet);
			this->Controls->Add(this->Phone);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Payments";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->megafonP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tele2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->beelineP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mtsP))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Кнопка возврата к основной форме
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
this->Close();
}
private: System::Void Phone_Click(System::Object^  sender, System::EventArgs^  e) {
	megafonP->Visible = true;
	mtsP->Visible = true;
	tele2P->Visible = true;
	beelineP->Visible = true;
	Phone->Visible = false;
	back->Visible = false;
	Internet->Visible = false;
	MTS->Visible = true;
	Beeline->Visible = true;
	Megafon->Visible = true;
	Tele2->Visible = true;
	label1->Visible = true;
	back->Visible = false;
}
private: System::Void Beeline_Click(System::Object^  sender, System::EventArgs^  e) {
	megafonP->Visible = false;
	mtsP->Visible = false;
	tele2P->Visible = false;
	beelineP->Visible = false;
	MTS->Visible = false;
	Beeline->Visible = false;
	Megafon->Visible = false;
	Tele2->Visible = false;
	label1->Visible = false;
	textBox1->Visible = true;
	label3->Visible = true;
	enterBtn->Visible = true;
	BackToOperator->Visible = true;
}
private: System::Void Internet_Click(System::Object^  sender, System::EventArgs^  e) {
	Phone->Visible = false;
	Internet->Visible = false;
	back->Visible = false;
	textBox1->Visible = true;
	label3->Visible = true;
	enterBtn->Visible = true;
	BackToOperator->Visible = true;
}
private: System::Void Tele2_Click(System::Object^  sender, System::EventArgs^  e) {
	megafonP->Visible = false;
	mtsP->Visible = false;
	tele2P->Visible = false;
	beelineP->Visible = false;
	MTS->Visible = false;
	Beeline->Visible = false;
	Megafon->Visible = false;
	Tele2->Visible = false;
	label1->Visible = false;
	textBox1->Visible = true;
	label3->Visible = true;
	enterBtn->Visible = true;
	BackToOperator->Visible = true;
}
private: System::Void MTS_Click(System::Object^  sender, System::EventArgs^  e) {
	megafonP->Visible = false;
	mtsP->Visible = false;
	tele2P->Visible = false;
	beelineP->Visible = false;
	MTS->Visible = false;
	Beeline->Visible = false;
	Megafon->Visible = false;
	Tele2->Visible = false;
	label1->Visible = false;
	textBox1->Visible = true;
	label3->Visible = true;
	enterBtn->Visible = true;
	BackToOperator->Visible = true;
}
private: System::Void Megafon_Click(System::Object^  sender, System::EventArgs^  e) {
	megafonP->Visible = false;
	mtsP->Visible = false;
	tele2P->Visible = false;
	beelineP->Visible = false;
	MTS->Visible = false;
	Beeline->Visible = false;
	Megafon->Visible = false;
	Tele2->Visible = false;
	label1->Visible = false;
	textBox1->Visible = true;
	label3->Visible = true;
	enterBtn->Visible = true;
	BackToOperator->Visible = true;
}
// Кнопка обработки введенной пользователем суммы
private: System::Void enterBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (Convert::ToDouble(textBox1->Text) <= bank.GetAccount()) {
		aaaccount = bank.GetAccount() - (Convert::ToDouble(textBox1->Text));
		bank.SetAccount(aaaccount);
		paymentAcception->Visible = true;
		int timeCounterr = 0;
		++timeCounterr;
		timer1->Interval = 1000;
		timer1->Enabled = true;
		this->Close();
	}
	else {
		textBox1->Clear();
		MessageBox::Show("Сумма снятия превысила количество средств на вашем счету", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}	
}

//Кнопка назад
private: System::Void BackToOperator_Click(System::Object^  sender, System::EventArgs^  e) {
	megafonP->Visible = true;
	mtsP->Visible = true;
	tele2P->Visible = true;
	beelineP->Visible = true;
	MTS->Visible = true;
	Beeline->Visible = true;
	Megafon->Visible = true;
	Tele2->Visible = true;
	label1->Visible = true;
	textBox1->Visible = false;
	label3->Visible = false;
	enterBtn->Visible = false;
	BackToOperator->Visible = false;
}
};
}
