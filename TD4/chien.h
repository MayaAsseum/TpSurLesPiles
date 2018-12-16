/*
 * chien.h
 *
 *  Created on: 10 déc. 2018
 *      Author: maya
 */

#ifndef CHIEN_H_
#define CHIEN_H_
#include"Animal.h"

namespace std {

class chien: public Animal {
public:
	chien();
	chien(const chien& other);
	virtual ~chien();
	chien& operator =(const chien& other);

	const string& getCri()const;
	void setCri(const string& Cri);

	string toString()const;

private:
	string Cri;
};

} /* namespace std */

#endif /* CHIEN_H_ */
