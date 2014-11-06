/* Main Menu.cpp
 * Authors: Martin Kyle Fernandez & Tiffany Yan
 */

#include "mainHeader.h"
#include "patientHeader.h"

int main(void) {
	bool quit;
	patientinfo patient;
	patient.queue();
	string mystr;
	int choice = 0;
	do{
	cout << "Please Enter an option\n======================\n";
	cout << "1. Registry\n2. Examine\n3. Display\n4. Quit\n>> ";
	cin >> choice;
		switch (choice) {
		case 1:
			information(&patient);
			cout << endl;
			break;
		case 2:
			//examinePatient(&amt, patient);
			break;
		case 3:
			break;
		case 4:
			quit = true;
			patient.~queue();
			break;
		default:
			cout << "----Invalid option----";
			break;
		}
	}while(quit != true);
}

