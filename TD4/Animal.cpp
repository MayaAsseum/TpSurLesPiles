/*
 * Animal.cpp
 *
 *  Created on: 9 déc. 2018
 *      Author: maya
 */

#include "Animal.h"
#include<sstream>

namespace std {

Animal::Animal() {
	// TODO Auto-generated constructor stub
	Age = 0;
	NomDuCri = "";
	cout << "Classe Animal: Construteur sans parametres... " << endl;
	cout << "Age: ";
	cin >> this->Age;
	cout << "Nom du cri: ";
	cin >> this->NomDuCri;
}
//constructeur de copie

Animal::Animal(const Animal& other) {
	cout << "Animal: Constructeur par copie..." << endl;
	this->Age = other.Age;
	this->NomDuCri = other.NomDuCri;
}
//destructeur
Animal::~Animal() {
	// TODO Auto-generated destructor stub
	cout << "Destructeur Animal..." << endl;
}
//surchagre d'operateur
Animal& Animal::operator =(const Animal& other) {
	if (this != &other) {
		this->Age = other.Age;
		this->NomDuCri = other.NomDuCri;
	}
	return *this;
}

//getters and setters
int Animal::getAge() const {
	return Age;
}

void Animal::setAge(int Age) {
	this->Age = Age;
}
const string& Animal::getNomDuCri() const {
	return NomDuCri;
}
void Animal::setNomDuCri(const string& NomDuCri) {
	this->NomDuCri = NomDuCri;

}

// les methodes de la classe

void Animal::vieillir() {
	this->Age++;
}

string Animal::toString() const {
	stringstream ss;
	ss << "Age: " << Age << ", Nom du cri: " << NomDuCri;
	return ss.str();

}
ostream& operator<<(ostream& out, const Animal& animal){
	out<< animal.toString();
	return out;
}

} /* namespace std */
