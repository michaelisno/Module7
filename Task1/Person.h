#pragma once
#include <string>

using namespace std;

class Person 
{
private:
	string name;
	int age;

public:
	// Constructor
	Person(string newName, int newAge);

	// Getters
	string GetName();
	int GetAge();

	// Setters
	void SetName(string newName);
	void SetAge(int newAge);

};