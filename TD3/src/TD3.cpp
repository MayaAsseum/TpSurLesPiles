//============================================================================
// Name        : TD3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"pileEntier.h"
using namespace std;

int main() {

	try {
		PileEntier pl1(3);
		pl1.add(3);
		pl1.add(4);

		PileEntier pl2(pl1);
		pl2.add(6);

		cout << pl1.toString() << endl;
		cout << pl2.toString() << endl;
		pl1 < 8;
		cout << pl1.toString() << endl;

	} catch (const char* err) {
		cerr << err << endl;
		return 1;
	}
	return 0;
}
