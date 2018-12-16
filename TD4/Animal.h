/*
 * Animal.h
 *
 *  Created on: 9 déc. 2018
 *      Author: maya
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
#include<iostream>
namespace std {

class Animal {
public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();
	Animal& operator=(const Animal& other);

	int getAge()const;
	void setAge(int Age);
	const string& getNomDuCri()const;
	void setNomDuCri(const string& NomDuCri);

	void vieillir();
	virtual string toString()const;
	friend ostream& operator<<(ostream& out, const Animal& Animal);

private:
	int Age;
	string NomDuCri;


};
} /* namespace std */

#endif /* ANIMAL_H_ */
