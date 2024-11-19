#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	string name;
	int age;

	cout << "Enter Person Name: ";
	cin >> name;
	cout << "Enter Person Age: ";
	cin >> age;

	Person* newPerson = new Person(name, age);

	cout << endl << "New Person Name: " << newPerson->GetName() << ", Age: " << newPerson->GetAge() << endl;

	delete newPerson;
	newPerson = nullptr;

	return 0;
}