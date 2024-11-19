#pragma once
#include <string>

using namespace std;

class BankAccount
{
private:
	string accountNumber;
	double balance;

public:
	BankAccount();
	BankAccount(string newAccountNumber, double newBalance);

	~BankAccount();

	string GetAccountNumber();
	double GetAccountBalance();
};