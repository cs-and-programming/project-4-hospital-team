#include "patient.h"

patient::patient()
{
}

patient::patient(string n, int a)
{
	name = n;
	age = a;
}

int patient::getAge()
{
	return age;
}

patient::~patient()
{
}
