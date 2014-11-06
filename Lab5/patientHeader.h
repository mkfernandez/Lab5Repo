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
class queue{
	int reg[SIZE];
	int front;
	int rear;
public:
	queue();
	~queue();
	void insert(int);
	int remove();
	int isEmpty();
	int isFull();
};

enum condition_t {Unknown, Release, Test, Labour, Admit};

class patientinfo : public queue {
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


#endif /* PATIENTHEADER_H_ */
