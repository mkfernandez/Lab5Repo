/*
 * patientHeader.h
 *
 *  Created on: Oct 23, 2014
 *      Author: Kyle
 */

#ifndef PATIENTHEADER_H_
#define PATIENTHEADER_H_

#include <iostream>
#include <sstream>
#include <string>
#define SIZE 100
using namespace std;

/*-----------------CLASSES----------------------*/
enum condition_t {Unknown, Release, Test, Labour, Admit};

class patientinfo {
private:
	stringstream ss;
	string firstname, lastname, healthcard;
	int bednum, dilation, contraction;
	condition_t condition;
public:
	void enterinfo(string);
	void displaypatient();
};

/*-------Making the register--------*/

class queue{
	int reg[SIZE];
	int front;
	int rear;
	stringstream ss;
public:
	queue();
	~queue();
	void insert(string, patientinfo *);
	int display(int, patientinfo *);
	int remove();
	int isEmpty();
	int isFull();
};

#endif /* PATIENTHEADER_H_ */
