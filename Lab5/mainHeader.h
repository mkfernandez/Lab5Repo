/*
 * mainHeader.h
 *
 *  Created on: Oct 23, 2014
 *      Author: mkfernan
 */

#ifndef MAINHEADER_H_
#define MAINHEADER_H_

#include <iostream>
#include <string>
#include <sstream>
#include <istream>
#include <cstdlib>
#include "patientHeader.h"

#define MAX_PATIENTS 100
using namespace std;

/*---------------------FUNCTION PROTOTYPES--------------------------*/
void information(int *amt, patientinfo *patient);
//void examinePatient(int *amt, patientinfo *patient);

#endif /* MAINHEADER_H_ */
