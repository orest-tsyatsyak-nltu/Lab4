#include "Official.h"

Official::Official()
{
}

Official::Official(string fullName, int age, string dutyDescription) : Person(fullName, age)
{
}

ostream& operator<<(ostream& o, const Official& off)
{
	o << (Person)off << endl
		<< "Official duty description: " << off.dutyDescription;
	return o;
}

istream& operator>>(istream& i, Official& off)
{
	i >> (Person&)off;
	string dutyDescription;
	getline(i, dutyDescription);
	off.dutyDescription = dutyDescription;
	return i;
}
