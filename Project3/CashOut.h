#pragma once
#include "BankAccount.h"

static int timeCounter;
static double sum;

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для CashOut
	/// </summary>
	public ref class CashOut : public System::Windows::Forms::Form
	{
	public:
		CashOut(void)
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
		~CashOut()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  fifty;
	private: System::Windows::Forms::Button^  hundred;
	private: System::Windows::Forms::Button^  hundred5;
	private: System::Windows::Forms::Button^  thousand;
	private: System::Windows::Forms::Button^  thousand5;
	private: System::Windows::Forms::Button^  other;
	private: System::Windows::Forms::Button^  back;
	private: System::Windows::Forms::Label^  confirmationlbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  takeBtn;



	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  timerlbl;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  enterSum;
	private: System::Windows::Forms::Button^  give;
	private: System::Windows::Forms::Button^  withoutReceipt;
	private: System::Windows::Forms::Button^  withReceipt;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->fifty = (gcnew System::Windows::Forms::Button());
			this->hundred = (gcnew System::Windows::Forms::Button());
			this->hundred5 = (gcnew System::Windows::Forms::Button());
			this->thousand = (gcnew System::Windows::Forms::Button());
			this->thousand5 = (gcnew System::Windows::Forms::Button());
			this->other = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->confirmationlbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->takeBtn = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerlbl = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->enterSum = (gcnew System::Windows::Forms::TextBox());
			this->give = (gcnew System::Windows::Forms::Button());
			this->withoutReceipt = (gcnew System::Windows::Forms::Button());
			this->withReceipt = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox5
			// 
			pictureBox5->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\Курсовая 2.0 — копия (3) — копия\\Project3\\Project3\\Без"
				L" названия.png";
			pictureBox5->Location = System::Drawing::Point(713, 3);
			pictureBox5->Name = L"pictureBox5";
			pictureBox5->Size = System::Drawing::Size(203, 143);
			pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			pictureBox5->TabIndex = 24;
			pictureBox5->TabStop = false;
			// 
			// fifty
			// 
			this->fifty->BackColor = System::Drawing::Color::SandyBrown;
			this->fifty->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->fifty->FlatAppearance->BorderSize = 5;
			this->fifty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fifty->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fifty->Location = System::Drawing::Point(2, 179);
			this->fifty->Name = L"fifty";
			this->fifty->Size = System::Drawing::Size(313, 113);
			this->fifty->TabIndex = 0;
			this->fifty->Text = L"50";
			this->fifty->UseVisualStyleBackColor = false;
			this->fifty->Click += gcnew System::EventHandler(this, &CashOut::button1_Click);
			// 
			// hundred
			// 
			this->hundred->BackColor = System::Drawing::Color::SandyBrown;
			this->hundred->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->hundred->FlatAppearance->BorderSize = 5;
			this->hundred->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hundred->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->hundred->Location = System::Drawing::Point(321, 179);
			this->hundred->Name = L"hundred";
			this->hundred->Size = System::Drawing::Size(313, 113);
			this->hundred->TabIndex = 1;
			this->hundred->Text = L"100";
			this->hundred->UseVisualStyleBackColor = false;
			this->hundred->Click += gcnew System::EventHandler(this, &CashOut::hundred_Click);
			// 
			// hundred5
			// 
			this->hundred5->BackColor = System::Drawing::Color::SandyBrown;
			this->hundred5->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->hundred5->FlatAppearance->BorderSize = 5;
			this->hundred5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hundred5->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->hundred5->Location = System::Drawing::Point(639, 179);
			this->hundred5->Name = L"hundred5";
			this->hundred5->Size = System::Drawing::Size(313, 113);
			this->hundred5->TabIndex = 2;
			this->hundred5->Text = L"500";
			this->hundred5->UseVisualStyleBackColor = false;
			this->hundred5->Click += gcnew System::EventHandler(this, &CashOut::hundred5_Click);
			// 
			// thousand
			// 
			this->thousand->BackColor = System::Drawing::Color::SandyBrown;
			this->thousand->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->thousand->FlatAppearance->BorderSize = 5;
			this->thousand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thousand->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->thousand->Location = System::Drawing::Point(2, 298);
			this->thousand->Name = L"thousand";
			this->thousand->Size = System::Drawing::Size(313, 113);
			this->thousand->TabIndex = 3;
			this->thousand->Text = L"1000";
			this->thousand->UseVisualStyleBackColor = false;
			this->thousand->Click += gcnew System::EventHandler(this, &CashOut::button4_Click);
			// 
			// thousand5
			// 
			this->thousand5->BackColor = System::Drawing::Color::SandyBrown;
			this->thousand5->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->thousand5->FlatAppearance->BorderSize = 5;
			this->thousand5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->thousand5->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->thousand5->Location = System::Drawing::Point(321, 298);
			this->thousand5->Name = L"thousand5";
			this->thousand5->Size = System::Drawing::Size(313, 113);
			this->thousand5->TabIndex = 4;
			this->thousand5->Text = L"5000";
			this->thousand5->UseVisualStyleBackColor = false;
			this->thousand5->Click += gcnew System::EventHandler(this, &CashOut::thousand5_Click);
			// 
			// other
			// 
			this->other->BackColor = System::Drawing::Color::SandyBrown;
			this->other->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->other->FlatAppearance->BorderSize = 5;
			this->other->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->other->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->other->Location = System::Drawing::Point(640, 298);
			this->other->Name = L"other";
			this->other->Size = System::Drawing::Size(313, 113);
			this->other->TabIndex = 5;
			this->other->Text = L"Другая сумма";
			this->other->UseVisualStyleBackColor = false;
			this->other->Click += gcnew System::EventHandler(this, &CashOut::other_Click);
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::SandyBrown;
			this->back->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->back->FlatAppearance->BorderSize = 5;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->back->Location = System::Drawing::Point(321, 417);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(313, 113);
			this->back->TabIndex = 6;
			this->back->Text = L"назад";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &CashOut::back_Click);
			// 
			// confirmationlbl
			// 
			this->confirmationlbl->AutoSize = true;
			this->confirmationlbl->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->confirmationlbl->Location = System::Drawing::Point(372, 146);
			this->confirmationlbl->Name = L"confirmationlbl";
			this->confirmationlbl->Size = System::Drawing::Size(183, 30);
			this->confirmationlbl->TabIndex = 7;
			this->confirmationlbl->Text = L"ВЫБЕРИТЕ сумму:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label1->Location = System::Drawing::Point(45, 146);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 30);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ЗАБЕРИТЕ ДЕНЬГИ И ЧЕК в течение";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label2->Location = System::Drawing::Point(104, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 30);
			this->label2->TabIndex = 9;
			this->label2->Text = L"ЗАБЕРИТЕ ДЕНЬГИ в течение";
			this->label2->Visible = false;
			// 
			// takeBtn
			// 
			this->takeBtn->BackColor = System::Drawing::Color::SandyBrown;
			this->takeBtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->takeBtn->FlatAppearance->BorderSize = 5;
			this->takeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->takeBtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->takeBtn->Location = System::Drawing::Point(305, 215);
			this->takeBtn->Name = L"takeBtn";
			this->takeBtn->Size = System::Drawing::Size(313, 113);
			this->takeBtn->TabIndex = 12;
			this->takeBtn->Text = L"ЗАБРАТЬ ";
			this->takeBtn->UseVisualStyleBackColor = false;
			this->takeBtn->Visible = false;
			this->takeBtn->Click += gcnew System::EventHandler(this, &CashOut::takeBtn_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &CashOut::timer1_Tick);
			// 
			// timerlbl
			// 
			this->timerlbl->AutoSize = true;
			this->timerlbl->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->timerlbl->Location = System::Drawing::Point(382, 146);
			this->timerlbl->Name = L"timerlbl";
			this->timerlbl->Size = System::Drawing::Size(32, 30);
			this->timerlbl->TabIndex = 13;
			this->timerlbl->Text = L"15";
			this->timerlbl->Visible = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Sh1", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(952, 146);
			this->label3->TabIndex = 15;
			this->label3->Text = L"LOCAL BANK";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label4->Location = System::Drawing::Point(282, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 30);
			this->label4->TabIndex = 16;
			this->label4->Text = L"введите сумму:";
			this->label4->Visible = false;
			// 
			// enterSum
			// 
			this->enterSum->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterSum->Location = System::Drawing::Point(457, 179);
			this->enterSum->MaxLength = 8;
			this->enterSum->Name = L"enterSum";
			this->enterSum->Size = System::Drawing::Size(100, 33);
			this->enterSum->TabIndex = 17;
			this->enterSum->Visible = false;
			// 
			// give
			// 
			this->give->BackColor = System::Drawing::Color::SandyBrown;
			this->give->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->give->FlatAppearance->BorderSize = 5;
			this->give->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->give->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->give->Location = System::Drawing::Point(272, 218);
			this->give->Name = L"give";
			this->give->Size = System::Drawing::Size(313, 113);
			this->give->TabIndex = 18;
			this->give->Text = L"выдать";
			this->give->UseVisualStyleBackColor = false;
			this->give->Visible = false;
			this->give->Click += gcnew System::EventHandler(this, &CashOut::give_Click);
			// 
			// withoutReceipt
			// 
			this->withoutReceipt->BackColor = System::Drawing::Color::SandyBrown;
			this->withoutReceipt->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->withoutReceipt->FlatAppearance->BorderSize = 5;
			this->withoutReceipt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->withoutReceipt->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->withoutReceipt->Location = System::Drawing::Point(138, 218);
			this->withoutReceipt->Name = L"withoutReceipt";
			this->withoutReceipt->Size = System::Drawing::Size(313, 113);
			this->withoutReceipt->TabIndex = 19;
			this->withoutReceipt->Text = L"БЕЗ ЧЕКА";
			this->withoutReceipt->UseVisualStyleBackColor = false;
			this->withoutReceipt->Visible = false;
			this->withoutReceipt->Click += gcnew System::EventHandler(this, &CashOut::withoutReceipt_Click);
			// 
			// withReceipt
			// 
			this->withReceipt->BackColor = System::Drawing::Color::SandyBrown;
			this->withReceipt->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->withReceipt->FlatAppearance->BorderSize = 5;
			this->withReceipt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->withReceipt->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->withReceipt->Location = System::Drawing::Point(457, 218);
			this->withReceipt->Name = L"withReceipt";
			this->withReceipt->Size = System::Drawing::Size(313, 113);
			this->withReceipt->TabIndex = 20;
			this->withReceipt->Text = L"НАПЕЧАТАТЬ ЧЕК";
			this->withReceipt->UseVisualStyleBackColor = false;
			this->withReceipt->Visible = false;
			this->withReceipt->Click += gcnew System::EventHandler(this, &CashOut::withReceipt_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label5->Location = System::Drawing::Point(412, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(504, 30);
			this->label5->TabIndex = 21;
			this->label5->Text = L"секунд,Иначе они будут возвращены в банкомат";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label6->Location = System::Drawing::Point(138, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 30);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Баланс карты:";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->label7->Location = System::Drawing::Point(300, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 30);
			this->label7->TabIndex = 23;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// CashOut
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(952, 539);
			this->Controls->Add(pictureBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->takeBtn);
			this->Controls->Add(this->withReceipt);
			this->Controls->Add(this->give);
			this->Controls->Add(this->enterSum);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->timerlbl);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confirmationlbl);
			this->Controls->Add(this->back);
			this->Controls->Add(this->other);
			this->Controls->Add(this->thousand5);
			this->Controls->Add(this->thousand);
			this->Controls->Add(this->hundred5);
			this->Controls->Add(this->hundred);
			this->Controls->Add(this->fifty);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->withoutReceipt);
			this->Name = L"CashOut";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CashOut";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Кнопка обработки выдачи пользователю 1000 наличными
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	sum = 1000;
	do
	{
		if (sum <= bank.GetAccount())
		{
			aaaccount = bank.GetAccount() - sum;
			bank.SetAccount(aaaccount);
			fifty->Visible = false;
			hundred->Visible = false;
			hundred5->Visible = false;
			thousand->Visible = false;
			thousand5->Visible = false;
			other->Visible = false;
			confirmationlbl->Visible = false;
			back->Visible = false;
			withoutReceipt->Visible = true;
			withReceipt->Visible = true;
			break;
		}
		else
		{
			MessageBox::Show("Сумма снятия превысила количество средств на вашем счету", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}
	} while (true);
}
//Кнопка обработки выдачи пользователю 50 наличными
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	sum = 50;
	if (sum > bank.GetAccount())
	{
		MessageBox::Show("Сумма снятия превысила количество средств на вашем счету", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		aaaccount = bank.GetAccount() - sum;
		bank.SetAccount(aaaccount);
		fifty->Visible = false;
		hundred->Visible = false;
		hundred5->Visible = false;
		thousand->Visible = false;
		thousand5->Visible = false;
		other->Visible = false;
		confirmationlbl->Visible = false;
		back->Visible = false;
		withoutReceipt->Visible = true;
		withReceipt->Visible = true;
	}
}
//Обработка отсчета времени при выдачи наличных
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	++timeCounter;
	timerlbl->Text =(15 - timeCounter % 16).ToString();
	if ((Convert::ToInt16(timerlbl->Text)) == 0)
	{
		this->Close();
		aaaccount = bank.GetAccount() + sum;
		bank.SetAccount(aaaccount);
		timer1->Enabled = false;
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
////Кнопка обработки выдачи пользователю наличными суммы, введенной вручную
private: System::Void other_Click(System::Object^  sender, System::EventArgs^  e) {
	fifty->Visible = false;
	hundred->Visible = false;
	hundred5->Visible = false;
	thousand->Visible = false;
	thousand5->Visible = false;
	other->Visible = false;
	confirmationlbl->Visible = false;
	back->Visible = false;
	label4->Visible = true;
	enterSum->Visible = true;
	withoutReceipt->Visible = true;
	withReceipt->Visible = true;
}
//Обработка кнопки снятия наличных без печати чека
private: System::Void withoutReceipt_Click(System::Object^  sender, System::EventArgs^  e) {
	withoutReceipt->Visible = false;
	withReceipt->Visible = false;
	takeBtn->Visible = true;
	label2->Visible = true;
	timerlbl->Visible = true;
	label5->Visible = true;
	timeCounter = 0;
	timer1->Interval = 1000;
	timer1->Enabled = true;
	label4->Visible = false;
	enterSum->Visible = false;
	if ((Convert::ToDouble(enterSum) != 0) && Convert::ToDouble(enterSum) <= bank.GetAccount())
	{
		aaaccount = bank.GetAccount() - Convert::ToDouble(enterSum);
		bank.SetAccount(aaaccount);
	}
}
//Обработка кнопки подтверждения введнной пользователем суммы
private: System::Void give_Click(System::Object^  sender, System::EventArgs^  e) {
	withoutReceipt->Visible = true;
	withReceipt->Visible = true;
	label4->Visible = false;
	enterSum->Visible = false;
	give->Visible = false;
	aaaccount = bank.GetAccount() - Convert::ToDouble(enterSum);
	bank.SetAccount(aaaccount);
}
private: System::Void takeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
//Реализация кнопки снятия средств с выводом чека на экран
private: System::Void withReceipt_Click(System::Object^  sender, System::EventArgs^  e) {
	withoutReceipt->Visible = false;
	withReceipt->Visible = false;
	label1->Visible = true;
	label5->Visible = true;
	takeBtn->Visible = true;
	timerlbl->Visible = true;
	timeCounter = 0;
	timer1->Interval = 1000;
	timer1->Enabled = true;
	label6->Visible = true;
	label7->Visible = true;
	if (Convert::ToDouble(enterSum->Text) != 0 && Convert::ToDouble(enterSum->Text)<= bank.GetAccount())
	{
		aaaccount = bank.GetAccount() - (Convert::ToDouble(enterSum->Text));
		bank.SetAccount(aaaccount);
	}
	label7->Text = Convert::ToString(bank.GetAccount());
	label4->Visible = false;
	enterSum->Visible = false;
}
//Кнопка возврата на основную форму
private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
//Кнопка выдачи пользователю 100 наличными
private: System::Void hundred_Click(System::Object^  sender, System::EventArgs^  e) {
	sum = 100;
	if (sum > bank.GetAccount())
	{
		MessageBox::Show("Сумма снятия превысила количество средств на вашем счету", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		aaaccount = bank.GetAccount() - Convert::ToDouble(enterSum);
		bank.SetAccount(aaaccount);
		fifty->Visible = false;
		hundred->Visible = false;
		hundred5->Visible = false;
		thousand->Visible = false;
		thousand5->Visible = false;
		other->Visible = false;
		confirmationlbl->Visible = false;
		back->Visible = false;
		withoutReceipt->Visible = true;
		withReceipt->Visible = true;
	}
}
//Кнопка выдачи пользователю 500 наличными
private: System::Void hundred5_Click(System::Object^  sender, System::EventArgs^  e) {
	sum = 500;
	if (sum > bank.GetAccount())
	{
		MessageBox::Show("Сумма снятия превысила количество средств на вашем счету", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		aaaccount = bank.GetAccount() - Convert::ToDouble(enterSum);
		bank.SetAccount(aaaccount);
		fifty->Visible = false;
		hundred->Visible = false;
		hundred5->Visible = false;
		thousand->Visible = false;
		thousand5->Visible = false;
		other->Visible = false;
		confirmationlbl->Visible = false;
		back->Visible = false;
		withoutReceipt->Visible = true;
		withReceipt->Visible = true;
	}
}
//Кнопка выдачи пользователю 5000 наличными
private: System::Void thousand5_Click(System::Object^  sender, System::EventArgs^  e) {
	sum = 5000;
	if (sum > bank.GetAccount())
	{
		MessageBox::Show("Сумма снятия превысила количество средств на вашем счету", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		aaaccount = bank.GetAccount() - Convert::ToDouble(enterSum);
		bank.SetAccount(aaaccount);
		fifty->Visible = false;
		hundred->Visible = false;
		hundred5->Visible = false;
		thousand->Visible = false;
		thousand5->Visible = false;
		other->Visible = false;
		confirmationlbl->Visible = false;
		back->Visible = false;
		withoutReceipt->Visible = true;
		withReceipt->Visible = true;
	}
}
};
}
