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
	int getCurrentNurse();

	float getBill();

	string getCondition();
	string getBloodType();

	void setBill(float billValue);
	void setCurrentNurse(int inputInt);
	void setRoomNum(int inputInt);
	void setAge(int inputInt);
	void setCondition(string inputString);
	void setBloodType(string inputString);

	~patient();
private:
	int age, roomNum, currentNurse;
	float bill;
	string condition, bloodType;
};

