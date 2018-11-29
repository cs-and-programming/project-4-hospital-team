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
//1
int patient::getAge()
{
	return age;
}

int patient::getroomNum()
{
	return roomNum;
}

patient::~patient()
{

}		
