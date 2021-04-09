#include "StartPage.h"

using namespace System::IO;//Добавляем имя класса для использования StreamReader
using namespace System;
using namespace System::Windows::Forms;

//Главная функция
int main(cli::array<String^>^ args) {
	// Включение визуальных эффектов Windows до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::StartPage formForStart;
	// Создание главного окна и его запуск
	Application::Run(%formForStart);
}
