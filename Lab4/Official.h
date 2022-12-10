#pragma once

#include "Person.h"

class Official : public Person
{
	string dutyDescription = "NOT GIVEN";
public:

	Official();

	Official(string fullName, int age, string dutyDescription);

	friend ostream& operator<< (ostream& o, const Official& off);

	friend istream& operator>> (istream& i, Official& off);

};
