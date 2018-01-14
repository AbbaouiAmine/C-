#include <iostream>
#include <string>
#include "Etudiant.h"

using std::endl;

Etudiant::Etudiant(int age, char* nom, int annee, char* universite):Personne(nom,age),annee(annee)
{
	this->universite = new char[strlen(universite)+1];
	strcpy(this->universite,universite);
}
Etudiant::Etudiant(const Etudiant & e):Personne(e)
{
	this->universite = new char[strlen(e.universite) + 1];
	strcpy(this->universite, e.universite);
	this->annee = e.annee;
}

Etudiant & Etudiant::operator=(const Etudiant& e)
{
	if (this != &e)
	{
		this->Personne::operator=(e);
		delete[] universite;
		this->universite = new char[strlen(e.universite) + 1];
		strcpy(this->universite, e.universite);
		this->annee = e.annee;
	}
	return *this;
}

Etudiant::~Etudiant()
{
	if (this->universite)
		delete [] universite;
}

ostream& operator<<(ostream & s, Etudiant e)
{
	Personne* p = &e;
	s << *p;
	s << "Année : " << e.annee << " Université : " << e.universite<<endl;
	return s;
}