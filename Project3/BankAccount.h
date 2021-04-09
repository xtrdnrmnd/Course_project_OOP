#pragma once

class BankAccount
{
private: 
	int i;
	double account;
public:
	//Конструктор по умолчанию
	BankAccount() {
		account = 0;
		i = 0;
	}
	// Конструктор с параметрами
	BankAccount(double _account, int _i) {
		account = _account;
		i = _i;
	}
	//Метод установки ПИНа
	void setI(int _i) {
		i = _i;
	}\
	//Метод возвращения значения ПИНа
	int GetI() {
		return i;
	}
	//Метод установки значения баланса счета
	void SetAccount(double _account) {
		account = _account;
	}
	//метод получения значения баланса счета
	double GetAccount() {
		return account;
	}
};

//глобальная переменная
extern double aaaccount;
extern BankAccount bank;