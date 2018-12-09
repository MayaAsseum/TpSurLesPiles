/*
 * PileEntier.h
 *
 *  Created on: 8 déc. 2018
 *      Author: maya
 */

#ifndef PILEENTIER_H_
#define PILEENTIER_H_
#include<iostream>


class PileEntier {
public:
	PileEntier(int capacity = 10);
	//constructeru de copie
	PileEntier(const PileEntier& other);
	virtual ~PileEntier();
	PileEntier& operator =(const PileEntier& other);

	void add(const int& value);
	bool isFull() const;
	int& remove();
	bool isEmpty() const;
	int getSize() const;
	std::string toString() const;

	PileEntier& operator<(const int& value);
	int& operator >(int& value);

private:
	//pile
	int* stack;
	int capacity;
	int last;

};


#endif /* PILEENTIER_H_ */
