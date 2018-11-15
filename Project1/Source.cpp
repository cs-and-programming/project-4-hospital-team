#include "patient.h"
#include <iostream>

using namespace std;

string passAttempt, answer;
string staffPass = "pineapple";

int main() {
	cout << "Welcome to the Rowan Mental Institution Hospital App. What would you like to do?" << endl;
	cout << "Please input the number of your selection." << endl;
	cout << "1. Staff Login" << endl << "2. Guest Functions" << endl;
	cin >> answer;
	if (answer == "1") {
		cout << "Please input the staff password." << endl;
		cin >> passAttempt;
		if (passAttempt == staffPass) {
			cout << "Access Granted" << endl;
		}
		else {
			cout << "Access Denied" << endl;	
		}
		
	}
	else if (answer == "2") {

	}
	else {
		cout << "That is not a valid answer. Please input a valid answer." << endl;
	}

	system("pause");
	return 0;
}
