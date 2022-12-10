#pragma once

#include <string>
#include <iostream>

using namespace std;

class Person
{
	string fullName = "NOT GIVEN";
	int age = 0;
public:

	Person();

	Person(string fullName, int age);

	friend ostream& operator<< (ostream& o, const Person& p);

	friend istream& operator>> (istream& i, Person& p);

};

