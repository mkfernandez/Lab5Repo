#include "patientHeader.h"
#include <sstream>

queue::queue() {
	front = 0;
	rear = 0;
}

queue::~queue() {
	delete []reg;
}

void queue::insert(string mystr, patientinfo *patient) {
	if (isFull()) {
		cout << "Patient Register is full, please try again later.";
	} else {
		reg[rear].patient->enterinfo(mystr);
		rear++;
	}
	return;
}

int queue::display(int i, patientinfo *patient) {
	if (isEmpty()) {
		cout << "Patient Register is now empty, please add a patient";
		return (-9999);
	} else {
		//patient->displaypatient(i);
	}
}

int queue::remove() {
	if (isEmpty()) {
		cout << "Patient Register is now empty, please add a patient";
		return (-9999);
	} else {
		return (reg[front++]);
	}
}

int queue::isEmpty() {
	if (front == rear) {
		return (1);
	} else {
		return (0);
	}
}

int queue::isFull() {
	if (rear == SIZE) {
		return (1);
	} else {
		return (0);
	}
}



