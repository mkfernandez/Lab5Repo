/*
 * patientHeader.cpp
 *
 *  Created on: Oct 23, 2014
 *      Author: Kyle
 */
#include "patientHeader.h"

void patientinfo::enterinfo(string mystr) {
	ss << mystr;
	ss >> firstname;
	ss >> lastname;
	ss >> healthcard;
	ss >> bednum;
	ss >> dilation;
	ss >> contraction;
	condition = Unknown;
}

void patientinfo::displaypatient() {
	cout << firstname << " " << lastname << " " << healthcard << " "
			<< " " << bednum << " " << dilation << " "
			<< contraction;
}
