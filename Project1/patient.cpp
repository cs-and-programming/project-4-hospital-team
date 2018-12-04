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

void patient::setBill(int duration)//Note: This could be much better and likely more accurate without it being recursive but project requirements wanted it to be recursive.
{
	if (duration > 0) {
		bill += 10000;
		duration += -1;
		setBill(duration);
	}
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
