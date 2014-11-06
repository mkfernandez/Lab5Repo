#include "patientHeader.h"
#include <sstream>

queue::queue() {
	front = 0;
	rear = 0;
}

queue::~queue() {
	delete []reg;
}

void queue::insert(int i) {
	if (isFull()) {
		cout << "Patient Register is full, please try again later.";
	} else {
		reg[rear] = i;
		rear++;
	}
	return;
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




