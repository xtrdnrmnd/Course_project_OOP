#pragma once
#include "MainForm.cpp"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Globalization;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  cashbtn;
	protected:
	private: System::Windows::Forms::Button^  balancebtn;
	private: System::Windows::Forms::Button^  paymentsbtn;
	private: System::Windows::Forms::Button^  leavebtn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  blnc;
	private: System::Windows::Forms::Label^  text1;
	private: System::Windows::Forms::Button^  backbtn;

	private:
	private:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::PictureBox^  pictureBox5;
			this->cashbtn = (gcnew System::Windows::Forms::Button());
			this->balancebtn = (gcnew System::Windows::Forms::Button());
			this->paymentsbtn = (gcnew System::Windows::Forms::Button());
			this->leavebtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->blnc = (gcnew System::Windows::Forms::Label());
			this->text1 = (gcnew System::Windows::Forms::Label());
			this->backbtn = (gcnew System::Windows::Forms::Button());
			pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// cashbtn
			// 
			this->cashbtn->AutoEllipsis = true;
			this->cashbtn->BackColor = System::Drawing::Color::SandyBrown;
			this->cashbtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->cashbtn->FlatAppearance->BorderSize = 5;
			this->cashbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cashbtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cashbtn->Location = System::Drawing::Point(161, 164);
			this->cashbtn->Margin = System::Windows::Forms::Padding(4);
			this->cashbtn->Name = L"cashbtn";
			this->cashbtn->Size = System::Drawing::Size(313, 113);
			this->cashbtn->TabIndex = 0;
			this->cashbtn->Text = L"ВЫДАЧА НАЛИЧНЫХ";
			this->cashbtn->UseVisualStyleBackColor = false;
			this->cashbtn->Click += gcnew System::EventHandler(this, &MainForm::cashbtn_Click);
			// 
			// balancebtn
			// 
			this->balancebtn->BackColor = System::Drawing::Color::SandyBrown;
			this->balancebtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->balancebtn->FlatAppearance->BorderSize = 5;
			this->balancebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->balancebtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balancebtn->Location = System::Drawing::Point(161, 285);
			this->balancebtn->Margin = System::Windows::Forms::Padding(4);
			this->balancebtn->Name = L"balancebtn";
			this->balancebtn->Size = System::Drawing::Size(313, 113);
			this->balancebtn->TabIndex = 1;
			this->balancebtn->Text = L"ПРОВЕРКА БАЛАНСА";
			this->balancebtn->UseVisualStyleBackColor = false;
			this->balancebtn->Click += gcnew System::EventHandler(this, &MainForm::balancebtn_Click);
			// 
			// paymentsbtn
			// 
			this->paymentsbtn->BackColor = System::Drawing::Color::SandyBrown;
			this->paymentsbtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->paymentsbtn->FlatAppearance->BorderSize = 5;
			this->paymentsbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->paymentsbtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paymentsbtn->Location = System::Drawing::Point(482, 164);
			this->paymentsbtn->Margin = System::Windows::Forms::Padding(4);
			this->paymentsbtn->Name = L"paymentsbtn";
			this->paymentsbtn->Size = System::Drawing::Size(313, 113);
			this->paymentsbtn->TabIndex = 2;
			this->paymentsbtn->Text = L"Платежи";
			this->paymentsbtn->UseVisualStyleBackColor = false;
			this->paymentsbtn->Click += gcnew System::EventHandler(this, &MainForm::paymentsbtn_Click);
			// 
			// leavebtn
			// 
			this->leavebtn->BackColor = System::Drawing::Color::SandyBrown;
			this->leavebtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->leavebtn->FlatAppearance->BorderSize = 5;
			this->leavebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->leavebtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->leavebtn->Location = System::Drawing::Point(482, 285);
			this->leavebtn->Margin = System::Windows::Forms::Padding(4);
			this->leavebtn->Name = L"leavebtn";
			this->leavebtn->Size = System::Drawing::Size(313, 113);
			this->leavebtn->TabIndex = 3;
			this->leavebtn->Text = L"ЗАВЕРШИТЬ ОБСЛУЖИВАНИЕ";
			this->leavebtn->UseVisualStyleBackColor = false;
			this->leavebtn->Click += gcnew System::EventHandler(this, &MainForm::leavebtn_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Sh1", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(952, 146);
			this->label2->TabIndex = 6;
			this->label2->Text = L"LOCAL BANK";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// blnc
			// 
			this->blnc->AutoSize = true;
			this->blnc->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->blnc->Location = System::Drawing::Point(426, 164);
			this->blnc->Name = L"blnc";
			this->blnc->Size = System::Drawing::Size(71, 30);
			this->blnc->TabIndex = 7;
			this->blnc->Text = L"label1";
			this->blnc->Visible = false;
			// 
			// text1
			// 
			this->text1->AutoSize = true;
			this->text1->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text1->Location = System::Drawing::Point(324, 164);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(96, 30);
			this->text1->TabIndex = 8;
			this->text1->Text = L"Баланс: ";
			this->text1->Visible = false;
			// 
			// backbtn
			// 
			this->backbtn->BackColor = System::Drawing::Color::SandyBrown;
			this->backbtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->backbtn->FlatAppearance->BorderSize = 5;
			this->backbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backbtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->backbtn->Location = System::Drawing::Point(329, 217);
			this->backbtn->Name = L"backbtn";
			this->backbtn->Size = System::Drawing::Size(313, 113);
			this->backbtn->TabIndex = 9;
			this->backbtn->Text = L"Назад";
			this->backbtn->UseVisualStyleBackColor = false;
			this->backbtn->Visible = false;
			this->backbtn->Click += gcnew System::EventHandler(this, &MainForm::backbtn_Click);
			// 
			// pictureBox5
			// 
			pictureBox5->Enabled = false;
			pictureBox5->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\Курсовая 2.0 — копия (3) — копия\\Project3\\Project3\\Без"
				L" названия.png";
			pictureBox5->Location = System::Drawing::Point(614, 0);
			pictureBox5->Name = L"pictureBox5";
			pictureBox5->Size = System::Drawing::Size(203, 143);
			pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			pictureBox5->TabIndex = 21;
			pictureBox5->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(952, 539);
			this->Controls->Add(pictureBox5);
			this->Controls->Add(this->backbtn);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->blnc);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->leavebtn);
			this->Controls->Add(this->paymentsbtn);
			this->Controls->Add(this->balancebtn);
			this->Controls->Add(this->cashbtn);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion
//Кнопка перехода к стартовой форме 
private: System::Void leavebtn_Click(System::Object^  sender, System::EventArgs^  e)
{
	auto res = Project3::MessageBox::Show("Вы действительно хотите завершить обслуживание?", "Подтвердите выход", Project3::MessageBoxButtons::YesNo, Project3::MessageBoxIcon::Question);
	if (res == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Restart();
	}
}
//Кнопка, при нажатии на которую происходит переходит переход к форме для оплаты мобильного телефона или интернета
private: System::Void paymentsbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1^ f1 = gcnew MyForm1();
	f1->Show();
}
//Кнопка вывода баланса пользоателя
private: System::Void balancebtn_Click(System::Object^  sender, System::EventArgs^  e) {
	balancebtn->Visible = false;
	paymentsbtn->Visible = false;
	cashbtn->Visible = false;
	leavebtn->Visible = false;
	text1->Visible = true;
	blnc->Visible = true;
	backbtn->Visible = true;
	//Label присваеивается значение переменной, созданной для хранения значения баланса пользователя
	this->blnc->Text = Convert::ToString(bank.GetAccount());
}
//Кнопка открытия формы для снятия наличных с карты
private: System::Void cashbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		CashOut^ cash = gcnew CashOut();
		cash->Show();
}
//Кнопка звкрытия окна баланса
private: System::Void backbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	balancebtn->Visible = true;
	paymentsbtn->Visible = true;
	cashbtn->Visible = true;
	leavebtn->Visible = true;
	text1->Visible = false;
	blnc->Visible = false;
	backbtn->Visible = false;
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
