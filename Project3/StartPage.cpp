#include "StartPage.h"

using namespace System::IO;//��������� ��� ������ ��� ������������� StreamReader
using namespace System;
using namespace System::Windows::Forms;

//������� �������
int main(cli::array<String^>^ args) {
	// ��������� ���������� �������� Windows �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::StartPage formForStart;
	// �������� �������� ���� � ��� ������
	Application::Run(%formForStart);
}
