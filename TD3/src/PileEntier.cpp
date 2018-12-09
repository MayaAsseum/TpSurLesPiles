/*
 * PileEntier.cpp
 *
 *  Created on: 8 déc. 2018
 *      Author: maya
 */

#include "PileEntier.h"
#include<sstream>


PileEntier::PileEntier(int capacity) {
	this->capacity = capacity;
	this->stack = new int[capacity];
	this->last = 0;
}

PileEntier::PileEntier(const PileEntier& other) {
	//deep copy of elements of other
	this->capacity = other.capacity;
	this->stack = new int[capacity];
	this->last = other.last;
	for (int i = 0; i < other.last; i++) {
		this->stack[i] = other.stack[i];
	}

}

PileEntier::~PileEntier() {
	// TODO Auto-generated destructor stub
	delete[] this->stack;
}

PileEntier& PileEntier::operator =(const PileEntier& other) {
// check different instanc
	if (this != &other) {
		// free dynamic reference
		delete[] this->stack;
		//copy data from other
		this->capacity = other.capacity;
		this->stack = new int[this->capacity];
		this->last = other.last;
		for (int i = 0; i < other.last; i++) {
			this->stack[i] = other.stack[i];
		}
		// return by reference

	}
	return *this;

}

void PileEntier::add(const int& value) {
	if (!isFull()) {
		this->stack[last] = value;
		last++;
	} else {
		throw "stack is full";
	}

}

bool PileEntier::isFull() const {
	return last == capacity;
}

int& PileEntier::remove() {
	if (!isEmpty()) {
		last--;
		return this->stack[last];
	} else {
		throw "stack is empty";
	}

}

bool PileEntier::isEmpty() const {
	return last == 0;
}

int PileEntier::getSize() const {
	return last;
}

std::string PileEntier::toString() const {
	std::stringstream ss;
	ss << "Pile[";
	for (int i = 0; i < last; i++) {
		if (i > 0)
			ss << ",";
		ss << stack[i];
	}
	ss << "]";
	return ss.str();
}

PileEntier& PileEntier::operator <(const int& value) {
	add(value);
	return *this;
}

int& PileEntier::operator >(int& value) {
	value = remove();
	return value;
}
/* namespace std */
