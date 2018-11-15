#pragma once
#include <string>

using namespace std;

class patient
{
public:
	string name;
	int patientNum;

	patient();
	patient(string name, int age, int roomNum, float bill, string condition, string bloodType, string currentNurse);

	int getAge();

	~patient();
private:
	int age, roomNum;
	float bill;
	string condition, bloodType, currentNurse, currentDoc;
};

