#include "patient.h"
#include <iostream>

using namespace std;

string passAttempt, answer, searchName, output;
string staffPass = "pineapple";

//int search(search, output&);

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
					cout << "3. " << endl;
					cin >> answer;
					if (answer == "1") {

					}
					else if (answer == "2") {
						cout << "Please input the first name of the patient you are looking for." << endl;
						cin >> searchName;
						//search(searchName, output&);
					}
					else if (answer == "3") {
						
					}
					else {
						cout << "That is not a valid answer. Please input a valid answer." << endl;
					}
				}
				break;
			}
			else {
				cout << "Access Denied" << endl;
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

				}
				else if (answer == "2") {
					cout << "Please input the first name of the patient you are looking for." << endl;
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
