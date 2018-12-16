#include<iostream>
using namespace std;
#include"chien.h"
int main(){
	chien* c1 = new chien();
	cout<< c1->toString()<<endl;
	cout<<((Animal*)c1)->toString() <<endl;
	Animal* chouchou = c1;
	cout << chouchou->toString()<<endl;
	cout<<*(chouchou)<<endl;

	delete chouchou;
	return 0 ;
}
