#pragma once
#include <string>

using namespace std;

class patient
{
public:
	string name;

	patient();
	patient(string name, int age);

	int getAge();

	~patient();
private:
	int age;
};

