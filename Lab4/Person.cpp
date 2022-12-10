#include "Person.h"

Person::Person()
{
}

Person::Person(string fullName, int age)
{
	this->fullName = fullName;
	this->age = age;
}

ostream& operator<<(ostream& o, const Person& p)
{
	o << "Person full name: " << p.fullName << endl
		<< "Person age: " << p.age;
	return o;
}

istream& operator>>(istream& i, Person& p)
{
	string fullName;
	getline(i, fullName);
	p.fullName = fullName;

	string age;
	getline(i, age);
	p.age = stoi(age);

	return i;
}

