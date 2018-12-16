/*
 * chien.cpp
 *
 *  Created on: 10 déc. 2018
 *      Author: maya
 */

#include "chien.h"
#include<sstream>

namespace std {

chien::chien():Animal() {
	// TODO Auto-generated constructor stub
	cout << "Constructeur chien sans parametres..." << endl;
    cout<<"copying chien: " << toString();
    cin >>this-> Cri;
}
chien::chien(const chien& other):Animal(other){
	cout<<"constructeur chien par copie..."<< endl;
	cout<<"copying chien :" <<toString();
	Cri= other.Cri;
}
chien::~chien() {
	// TODO Auto-generated destructor stub
	cout<<"destructeur de chien..."<< endl;
}
chien& chien::operator=(const chien& other){
	Animal::operator = (other);
	if(this != &other){
		this->Cri = other.Cri;
	}
	return *this;
}


const string& chien::getCri()const{
	return Cri;
}

void chien::setCri(const string& Cri){
	this->Cri = Cri;
}

string chien::toString()const{
	stringstream ss;
	ss<< Animal::toString() <<", Cri: "<<Cri;
	return ss.str();
}
} /* namespace std */
