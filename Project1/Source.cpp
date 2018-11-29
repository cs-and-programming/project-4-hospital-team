#include "patient.h"
#include <iostream>

using namespace std;

string passAttempt, answer, searchName, output;
string staffPass = "pineapple";

void listPatients(), listRoomPatients(), displayInformation();

int bill();

int billValue;

string Nurses[6] = {};

patient Marcus = patient("Marcus", 18, 101, 999, "Testing", "Bloodtype", 0);
patient Noah = patient("Noah", 18, 101, 999, "Testing", "Bloodtype", 0);
patient Colin = patient("Colin", 18, 101, 999, "Testing", "Bloodtype", 0);
patient TJ = patient("TJ", 18, 101, 999, "Testing", "Bloodtype", 0);
patient Krissy = patient("Krissy", 18, 101, 999, "Testing", "Bloodtype", 0);
patient Shawn = patient("Shawn", 18, 101, 999, "Testing", "Bloodtype", 0);

//int search(search, output&);


enum Name {
	Shawn,
	Marcus,
	Colin,
	Noah, 
	TJ, 
	Krissy,
};

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
					cout << "5. Exit Program." << endl;
					cin >> answer;
					if (answer == "1") {
						listPatients();
					}
					else if (answer == "2") {
						cout << "Please input the first name of the patient you are looking for." << endl;
						cin >> searchName;
						//search(searchName, output&);
						
					}
					else if (answer == "3") {
						listRoomPatients();
					}
					else if (answer == "4") {
						cout << "Which patient would you like to display information on?" << endl;
						cin >> searchName;
						//search(searchName, output&);
						displayInformation();
					}
					else if (answer == "5") {
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
					cout << "Please input the name of the patient you are looking for." << endl;
					cin >> searchName;
					//search(searchName, output&);
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

}

void listRoomPatients() {
	
}

void displayInformation() {

}

int bill() {
	return billValue;
}