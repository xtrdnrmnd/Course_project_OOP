#pragma once
#include <cstdlib>
#include "msclr/marshal.h"
#include "MainForm.h"
#include "BankAccount.h"
#include <ctime>


//Переменная для подсчета количества ошибок при вводе ПИНа
static int mistake = 0;
static int bal;

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartPage
	/// </summary>
	public ref class StartPage : public System::Windows::Forms::Form
	{
	public:
		StartPage(void)
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
		~StartPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  textLabel1;
	private: System::Windows::Forms::Label^  pinLabel;
	private: System::Windows::Forms::Label^  pinLabel2;
	private: System::Windows::Forms::TextBox^  pinTxt;
	private: System::Windows::Forms::Button^  insert;
	private: System::Windows::Forms::Button^  signIn;
	private: System::Windows::Forms::Button^  exitBtn;

	protected:

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textLabel1 = (gcnew System::Windows::Forms::Label());
			this->pinLabel = (gcnew System::Windows::Forms::Label());
			this->pinLabel2 = (gcnew System::Windows::Forms::Label());
			this->pinTxt = (gcnew System::Windows::Forms::TextBox());
			this->insert = (gcnew System::Windows::Forms::Button());
			this->signIn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->CausesValidation = false;
			this->label5->Dock = System::Windows::Forms::DockStyle::Top;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Sh1", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(952, 157);
			this->label5->TabIndex = 5;
			this->label5->Text = L"LOCAL BANK";
			// 
			// textLabel1
			// 
			this->textLabel1->AutoSize = true;
			this->textLabel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textLabel1->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->textLabel1->Location = System::Drawing::Point(32, 127);
			this->textLabel1->Name = L"textLabel1";
			this->textLabel1->Size = System::Drawing::Size(105, 30);
			this->textLabel1->TabIndex = 6;
			this->textLabel1->Text = L"ВАШ ПИН:";
			this->textLabel1->Visible = false;
			// 
			// pinLabel
			// 
			this->pinLabel->AutoSize = true;
			this->pinLabel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pinLabel->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->pinLabel->Location = System::Drawing::Point(143, 127);
			this->pinLabel->Name = L"pinLabel";
			this->pinLabel->Size = System::Drawing::Size(73, 30);
			this->pinLabel->TabIndex = 7;
			this->pinLabel->Text = L"label7";
			this->pinLabel->Visible = false;
			// 
			// pinLabel2
			// 
			this->pinLabel2->AutoSize = true;
			this->pinLabel2->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 15));
			this->pinLabel2->Location = System::Drawing::Point(226, 191);
			this->pinLabel2->Name = L"pinLabel2";
			this->pinLabel2->Size = System::Drawing::Size(149, 30);
			this->pinLabel2->TabIndex = 8;
			this->pinLabel2->Text = L"ВВЕДИТЕ ПИН: ";
			this->pinLabel2->Visible = false;
			// 
			// pinTxt
			// 
			this->pinTxt->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pinTxt->Location = System::Drawing::Point(394, 188);
			this->pinTxt->MaxLength = 4;
			this->pinTxt->Name = L"pinTxt";
			this->pinTxt->PasswordChar = '*';
			this->pinTxt->Size = System::Drawing::Size(100, 33);
			this->pinTxt->TabIndex = 9;
			this->pinTxt->UseSystemPasswordChar = true;
			this->pinTxt->Visible = false;
			// 
			// insert
			// 
			this->insert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->insert->BackColor = System::Drawing::Color::SandyBrown;
			this->insert->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->insert->FlatAppearance->BorderSize = 5;
			this->insert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->insert->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->insert->Location = System::Drawing::Point(295, 191);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(313, 113);
			this->insert->TabIndex = 10;
			this->insert->Text = L"вставить карту";
			this->insert->UseVisualStyleBackColor = false;
			this->insert->Click += gcnew System::EventHandler(this, &StartPage::insert_Click);
			// 
			// signIn
			// 
			this->signIn->BackColor = System::Drawing::Color::SandyBrown;
			this->signIn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->signIn->FlatAppearance->BorderSize = 5;
			this->signIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signIn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->signIn->Location = System::Drawing::Point(119, 227);
			this->signIn->Name = L"signIn";
			this->signIn->Size = System::Drawing::Size(313, 113);
			this->signIn->TabIndex = 11;
			this->signIn->Text = L"войти";
			this->signIn->UseVisualStyleBackColor = false;
			this->signIn->Visible = false;
			this->signIn->Click += gcnew System::EventHandler(this, &StartPage::signIn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::SandyBrown;
			this->exitBtn->FlatAppearance->BorderColor = System::Drawing::Color::SaddleBrown;
			this->exitBtn->FlatAppearance->BorderSize = 5;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Zing Rust Demo Base", 22.2F, System::Drawing::FontStyle::Italic));
			this->exitBtn->Location = System::Drawing::Point(438, 227);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(313, 113);
			this->exitBtn->TabIndex = 12;
			this->exitBtn->Text = L"вернуть карту";
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Visible = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &StartPage::exitBtn_Click);
			// 
			// pictureBox5
			// 
			pictureBox5->Enabled = false;
			pictureBox5->ImageLocation = L"C:\\Users\\mazur\\Desktop\\ООП\\Курсовая 2.0 — копия (3) — копия\\Project3\\Project3\\Без"
				L" названия.png";
			pictureBox5->Location = System::Drawing::Point(641, 12);
			pictureBox5->Name = L"pictureBox5";
			pictureBox5->Size = System::Drawing::Size(203, 143);
			pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			pictureBox5->TabIndex = 21;
			pictureBox5->TabStop = false;
			// 
			// StartPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(952, 539);
			this->Controls->Add(pictureBox5);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->signIn);
			this->Controls->Add(this->pinTxt);
			this->Controls->Add(this->pinLabel2);
			this->Controls->Add(this->pinLabel);
			this->Controls->Add(this->textLabel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->insert);
			this->Name = L"StartPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//При нажатии на кнопку пользователю становится видна панель для ввода ПИНА или выхода из программы
	private: System::Void insert_Click(System::Object^  sender, System::EventArgs^  e) {
		textLabel1->Visible = true;
		pinLabel->Visible = true;
		pinLabel2->Visible = true;
		pinTxt->Visible = true;
		exitBtn->Visible = true;
		signIn->Visible = true;
		insert->Visible = false;
		//Для пользователя в label выводится ПИН-код из файла DataBase.txt
		StreamReader^ stream = File::OpenText("C:\DataBase.txt");
		srand(time(0));
//Переменной bal присваивается случайное четное значение от 2 до 10
		bal = rand() % 9 + 2;
		if (bal % 2 == 1)
			bal = bal + 1;
		for (int j = 1; j <= bal; j++)
		{
			if (j < bal)
				String^ r = stream->ReadLine();
			else
			{
				String^ s = stream->ReadLine();
				//Label присваивается значение ПИНа
				this->pinLabel->Text = s;
			}
		}
		delete (IDisposable^)stream;
		bank.setI(bal);
	}
//Кнопка выхода, при которой пользователю возвращается карта
private: System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	auto res = MessageBox::Show("Вы действительно хотите завершить обслуживание?", "Подтвердите выход", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (res == System::Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("Заберите карту.", "Выход", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//Интерфейс возвращается к исходному
		textLabel1->Visible = false;
		pinLabel->Visible = false;
		pinLabel2->Visible = false;
		pinTxt->Visible = false;
		exitBtn->Visible = false;
		signIn->Visible = false;
		insert->Visible = true;
	}
}
//Кнопка входа в систему 
private: System::Void signIn_Click(System::Object^  sender, System::EventArgs^  e) {
	while (true)
	{
		//Введенный пользователем ПИН сверяется со значением ПИНа в label
		if (pinLabel->Text == pinTxt->Text)
		{
			MainForm^ mainform = gcnew MainForm();
			mainform->Show();
			this->Hide();
			StreamReader^ stream1 = File::OpenText("C:\DataBase.txt");
			int amount = bal - 1;
			for (int j = 1; j <= amount; j++)
			{
				if (j < amount)
					String^ a = stream1->ReadLine();
				else
				{
					String^ b = stream1->ReadLine();
					Thread::CurrentThread->CurrentCulture = gcnew CultureInfo("en-US", false);
					NumberFormatInfo^ nfi = CultureInfo::CurrentCulture->NumberFormat;
					aaaccount = Double::Parse(b, nfi);
					bank.SetAccount(aaaccount);
				}
			}
			delete (IDisposable^)stream1;
		}
		else
		{
			mistake++;
			pinTxt->Clear();
			MessageBox::Show("ПИН введен неверно", "Пароль неверный", MessageBoxButtons::OK, MessageBoxIcon::Information);
			break;
		}
		break;
	}
//При некорректном вводе ПИНа более 3 раз интерфейс возвращается к исходному
	if (mistake == 3)
	{
		MessageBox::Show("Превышено количество попыток авторизации. Ваша карта будет возвращена в течение нескольких секунд", "Пароль неверный", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textLabel1->Visible = false;
		pinLabel->Visible = false;
		pinLabel2->Visible = false;
		pinTxt->Visible = false;
		exitBtn->Visible = false;
		signIn->Visible = false;
		insert->Visible = true;
		mistake = 0;
	}
}
};
}
