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

int patient::getCurrentNurse()
{
	return currentNurse;
}

void patient::setCurrentNurse(int inputInt)
{
	currentNurse = inputInt;
}

void patient::setRoomNum(int inputInt)
{
	roomNum = inputInt;
}

void patient::setAge(int inputInt)
{
	age = inputInt;
}

void patient::setCondition(string inputString)
{
	condition = inputString;
}

void patient::setBloodType(string inputString)
{
	bloodType = inputString;
}

patient::~patient()
{

}		
