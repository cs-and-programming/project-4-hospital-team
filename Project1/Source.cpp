#include "patient.h"
#include <iostream>

using namespace std;

string passAttempt, answer, answer2, searchName, inputString;
string staffPass = "pineapple";
int patients = 6, output, inputInt;
float billValue;

void listPatients(), listRoomPatients(), displayInformation(), listNurses();
float bill();
int search(string searchName, int &output);

enum day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
string nurses[3] = {"Jane","John","Doe"};

patient Marcus = patient("Marcus", 18, 559, 999, "Testing", "AB+", 0);
patient Noah = patient("Noah", 18, 558, 999, "Testing", "B-", 0);
patient Colin = patient("Colin", 18, 289, 999, "Testing", "O-", 0);
patient TJ = patient("TJ", 18, 101, 423, "Testing", "B+", 0);
patient Krissy = patient("Krissy", 18, 321, 999, "Testing", "A+", 0);
patient Shawn = patient("Shawn", 18, 127, 999, "Testing", "O+", 0);

patient patientsArray[] = {Marcus,Noah,Colin,TJ,Krissy,Shawn};

int main() {
	cout << "Welcome to the Rowan Mental Institution Hospital App. What would you like to do?" << endl;
	cout << "Please input the number of your selection." << endl;
	cout << "1. Staff Login" << endl << "2. Guest Functions" << endl;
	cin >> answer;
	while (true) {
		if (answer == "1") {
			cout << "Please input the staff password." << endl;
			cin >> passAttempt;
			if (passAttempt == staffPass) {
				cout << "Access Granted" << endl;
				while (true) {
					cout << "What would you like to do?" << endl;
					cout << "1. List current patients." << endl;
					cout << "2. Search for specific patient." << endl;
					cout << "3. List Rooms and Patients." << endl;
					cout << "4. Display patient information." << endl;
					cout << "5. Calculate Bill." << endl;
					cout << "6. Edit patient data." << endl;
					cout << "7. List nurses." << endl;
					cout << "8. Exit Program." << endl;
					cin >> answer;
					if (answer == "1") {
						listPatients();
					}
					else if (answer == "2") {
						cout << "Please input the first name of the patient you are looking for." << endl;
						cin >> searchName;
						search(searchName, output);
						cout << (patientsArray[output]).name << "'s room number is " << (patientsArray[output]).getroomNum() << endl << endl;
					}
					else if (answer == "3") {
						listRoomPatients();
					}
					else if (answer == "4") {
						cout << "Which patient would you like to display information on?" << endl;
						cin >> searchName;
						search(searchName, output);
						displayInformation();
					}
					else if (answer == "5") {
						cout << "Which patient would you like to calculate the bill for?" << endl;
						cin >> searchName;
						search(searchName, output);
						cout << (patientsArray[output]).name << "'s room number is " << (patientsArray[output]).getBill() << endl << endl;
					}
					else if (answer == "6") {
						cout << "Please enter the first name of the patients whos information you would like to edit." << endl;
						cin >> searchName;
						search(searchName, output);
						while (true) {
							cout << "What would you like to do?" << endl;
							cout << "1. Set age." << endl;
							cout << "2. Set room number." << endl;
							cout << "3. Set condition." << endl;
							cout << "4. Set bloodtype." << endl;
							cout << "5. Exit." << endl;
						}
						cin >> answer2;
						if (answer2 == "1") {
							cout << "What would you like to set it to?" << endl;
							cin >> inputInt;
							(patientsArray[output]).setAge(inputInt);
							cout << (patientsArray[output]).name << "'s age is now set to " << inputInt << endl;
						}
						else if (answer2 == "2") {
							cout << "What would you like to set it to?" << endl;
							cin >> inputInt;
							(patientsArray[output]).setRoomNum(inputInt);
							cout << (patientsArray[output]).name << "'s room number is now set to " << inputInt << endl;
						}
						else if (answer2 == "3") {
							cout << "What would you like to set it to?" << endl;
							cin >> inputString;
							(patientsArray[output]).setCondition(inputString);
							cout << (patientsArray[output]).name << "'s condition is now set to " << inputString << endl;
						}
						else if (answer2 == "4") {
							cout << "What would you like to set it to?" << endl;
							cin >> inputString;
							(patientsArray[output]).setBloodType(inputString);
							cout << (patientsArray[output]).name << "'s bloodtype is now set to " << inputString << endl;
						}

					}
					else if (answer == "7") {
						listNurses();
					}
					else if (answer == "8") {
						break;
					}
					else {
						cout << "That is not a valid answer. Please input a valid answer." << endl;
					}
				}
				break;
			}
			else {
				cout << "Access Denied. Incorrect password." << endl;
				break;
			}

		}
		else if (answer == "2") {
			while (true) {
				cout << "What would you like to do?" << endl;
				cout << "1. List current patients." << endl;
				cout << "2. Search for specific patient." << endl;
				cout << "3. Exit Program." << endl;
				cin >> answer;
				if (answer == "1") {
					listPatients();
				}
				else if (answer == "2") {
					cout << "Please input the first name of the patient you are looking for." << endl;
					cin >> searchName;
					search(searchName, output);
					cout << (patientsArray[output]).name << "'s room number is " << (patientsArray[output]).getroomNum() << endl << endl;
				}
				else if (answer == "3") {
					break;
				}
				else {
					cout << "That is not a valid answer. Please input a valid answer." << endl;
				}
			}
			break;
		}
		else {
			cout << "That is not a valid answer. Please input a valid answer." << endl;
		}
	}

	system("pause");
	return 0;
}


void listPatients() {
	for (int i = 0; i < patients; i++) {
		cout << (i+1) << ". " << (patientsArray[i]).name << endl;
	}
}

void listNurses() {
	for (int i = 0; i < 3; i++) {
		cout << (i + 1) << ". " << (nurses[i]) << endl;
	}
}

void listRoomPatients() {
	for (int i = 0; i < patients; i++) {
		cout << (i+1) << ". " << (patientsArray[i]).name << "    Room: " << (patientsArray[i]).getroomNum() << endl;
	}
}

void displayInformation() {
	cout << "Name: " << (patientsArray[output]).name << endl;
	cout << "Room Number: " << (patientsArray[output]).getroomNum() << endl;
	cout << "Age: " << (patientsArray[output]).getAge() << endl;
	cout << "Condition: " << (patientsArray[output]).getCondition() << endl;
	cout << "BloodType: " << (patientsArray[output]).getBloodType() << endl;
	if ((patientsArray[output]).getBill() == 999) {
		cout << "Current Bill: " << "*BILL NOT CALCULATED* Please run calculate bill command." << endl;
	}
	else {
		cout << "Current Bill: " << (patientsArray[output]).getBill() << endl;
	}
	cout << endl;
}

float bill() {
	return billValue;
}

int search(string searchName, int &output) {
	string attemptName;
	bool run = true;
	int attempts = 0;
    output = 0;

	while ((attempts < patients) && (run = true)) {
		attemptName = (patientsArray[attempts]).name;
		if (searchName == attemptName) {
			output = attempts;
			run = false;
		}
		attempts++;
	}
	return output;
}