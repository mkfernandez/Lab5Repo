///* Patient Information.cpp
// * Authors: Martin Kyle Fernandez & Tiffany Yan
// */

#include "patientHeader.h"

void information(queue *q) {
	string mystr;
	patientinfo *patient;
	int patientnum = 0, choice;
	bool esc;
	do{
	cout << "\n\n-------------------------\n";
	cout << "What would you like to do?\n";
	cout << "1. Add new patient\n2. View patient record\n3. Go back\n>> ";
	cin >> choice;
	if (choice == 1) {
		cout << "\n[Adding patient "
				<< "]\nPlease enter the patients first name, last name, health card #, bed #, contraction rate, and cervix dilation (in cm)\n>>";
		cin.ignore();
		getline(cin, mystr);
		q->insert(mystr, patient);
	} else if (choice == 2) {
		cout << "Enter the patient you would like to view:\n>> ";
		cin >> patientnum;
		cout << "\n\n[Viewing Patient: " << patientnum << "]\n";
		q->display(patientnum, patient);
	} else if (choice == 3) {
		esc = true;
	}
}while(esc != true);
}
