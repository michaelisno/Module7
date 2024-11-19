#include "Person.h"

// Constructor
Person::Person(string newName, int newAge)
{
	name = newName;
	age = newAge;
}

// Getters
string Person::GetName()
{
	return name;
}

int Person::GetAge()
{
	return age;
}

// Setters
void Person::SetName(string newName)
{
	name = newName;
}

void Person::SetAge(int newAge)
{
	age = newAge;
}