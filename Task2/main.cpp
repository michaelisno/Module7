#include <iostream>
#include "BankAccount.h"

using namespace std;

int main()
{
	BankAccount* account1 = new BankAccount();
	BankAccount* account2 = new BankAccount("7654321", 1000);

	cout << "Account 1 - Number: " << account1->GetAccountNumber() << ", Balance: " << account1->GetAccountBalance() << endl;
	cout << "Account 2 - Number: " << account2->GetAccountNumber() << ", Balance: " << account2->GetAccountBalance() << endl;

	delete account1;
	delete account2;

	account1 = nullptr;
	account2 = nullptr;

	return 0;
}