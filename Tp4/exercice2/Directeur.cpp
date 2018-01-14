#include <iostream>
#include <string>
#include "Directeur.h"

using std::cout;
using std::endl;

Directeur::Directeur(char * nom, int age, char * s, char * labo, double sl)
	:Enseignant(nom,age,s,sl)
{
	this->labo = new char[strlen(labo) + 1];
	strcpy(this->labo,labo);

}
void Directeur::print()
{
	this->Enseignant::print();
	cout << "Labo : " << labo<<endl;
}
Directeur::~Directeur()
{
	if (labo)
		delete [] labo;
}