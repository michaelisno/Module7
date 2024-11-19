#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount()
{
	accountNumber = "1234567";
	balance = 10.0;
}

BankAccount::BankAccount(string newAccountNumber, double newBalance)
{
	accountNumber = newAccountNumber;
	balance = newBalance;
}

BankAccount::~BankAccount()
{
	cout << "Account with Number: " << accountNumber << " has been destroyed." << endl;
}

string BankAccount::GetAccountNumber()
{
	return accountNumber;
}

double BankAccount::GetAccountBalance()
{
	return balance;
}