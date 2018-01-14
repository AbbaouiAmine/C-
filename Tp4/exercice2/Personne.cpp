#include <string>
#include "Personne.h"

using std::strlen;
using std::endl;

Personne::Personne(char * nom, int age)
{
	this->nom = new char[strlen(nom)+1];
	strcpy(this->nom, nom);
	this->age = age;
}

Personne::Personne(const Personne & p)
{
	this->nom = new char[strlen(p.nom) + 1];
	strcpy(this->nom, p.nom);
	this->age = p.age;
}

Personne::~Personne()
{
	if (nom)
		delete nom;
}

Personne & Personne::operator=(const Personne& p)
{
	if (this != &p)
	{
		delete nom;
		this->nom = new char[strlen(p.nom) + 1];
		strcpy(this->nom, p.nom);
		this->age = p.age;
	}
	return *this;
}

void Personne::print(ostream& sortie)
{
	sortie << "Nom : " << this->nom << " Age :" << this->age << endl;
}

ostream & operator<<(ostream & s, Personne p)
{	
	p.print(s);
	return s;
}