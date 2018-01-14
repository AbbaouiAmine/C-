#pragma once
#include<iostream>
#include "Personne.h"
using std::ostream;

class Etudiant :public Personne {
public :
	Etudiant(int =0,char* ="",int=0,char* ="");
	~Etudiant();
	Etudiant(const Etudiant&);
	Etudiant& operator=(const Etudiant&);
	friend ostream& operator<<(ostream&, Etudiant);
private :
	int annee;
	char* universite;
};

ostream& operator<<(ostream&, Etudiant);

