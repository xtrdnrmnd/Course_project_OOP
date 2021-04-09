#pragma once

class BankAccount
{
private: 
	int i;
	double account;
public:
	//����������� �� ���������
	BankAccount() {
		account = 0;
		i = 0;
	}
	// ����������� � �����������
	BankAccount(double _account, int _i) {
		account = _account;
		i = _i;
	}
	//����� ��������� ����
	void setI(int _i) {
		i = _i;
	}\
	//����� ����������� �������� ����
	int GetI() {
		return i;
	}
	//����� ��������� �������� ������� �����
	void SetAccount(double _account) {
		account = _account;
	}
	//����� ��������� �������� ������� �����
	double GetAccount() {
		return account;
	}
};

//���������� ����������
extern double aaaccount;
extern BankAccount bank;