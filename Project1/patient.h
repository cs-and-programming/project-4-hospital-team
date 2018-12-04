#pragma once
#include <string>

using namespace std;

class patient
{
public:
	string name;
	int patientNum;

	patient();
	patient(string name, int age, int roomNum, float bill, string condition, string bloodType, int currentNurse);

	int getAge();
	int getroomNum();
	void setBill(float billValue);
	float getBill();
	string getCondition();
	string getBloodType();
	int getCurrentNurse();
	void setCurrentNurse(int inputInt);

	~patient();
private:
	int age, roomNum, currentNurse;
	float bill;
	string condition, bloodType;
};

