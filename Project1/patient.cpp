#include "patient.h"

patient::patient()
{
}

patient::patient(string n, int a, int rN, float b, string c, string bT, string cN)
{
	name = n;
	age = a;
	roomNum = rN;
	bill = b;
	currentNurse = cN;
	bloodType = bT;
	condition = c;
}

int patient::getAge()
{
	return age;
}

patient::~patient()
{

}
