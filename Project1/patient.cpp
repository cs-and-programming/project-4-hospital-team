#include "patient.h"

patient::patient()
{
}

patient::patient(string n, int a, int rN, float b, string c, string bT, int cN)
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

int patient::getroomNum()
{
	return roomNum;
}

void patient::setBill(float billValue)
{
	bill = billValue;
}

float patient::getBill()
{
	return bill;
}

string patient::getCondition()
{
	return condition;
}

string patient::getBloodType()
{
	return bloodType;
}

patient::~patient()
{

}		
