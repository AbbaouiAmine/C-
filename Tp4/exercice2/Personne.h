#pragma once
#include <iostream>

using std::ostream;

class Personne {
public : 
	Personne(char* ="",int=0);
	Personne(const Personne&);
       ~Personne();

	Personne& operator=(const Personne&);
	void printspec(ostream&);
private :
	char* nom;
	int age;
};

ostream& operator<<(ostream&,Personne);


