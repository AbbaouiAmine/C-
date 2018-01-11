#include "Livre.h"
#include <iostream>

using std::cout;
using std::endl;

Livre::Livre(string a, string t, int n, double p)
{
	this->auteur=a;
	this->titre = t;
	this->nombre_page = n;
	this->PHT = p;
}
Livre::~Livre()
{

}

double Livre::prix()
{
	return this->PHT*1.05;
}

void Livre::afficher()
{
	cout << "Titre : " << this->titre << "Auteur : " << this->auteur << "Nombre de page" << this->nombre_page<<"Prix hort taxe : " <<this->PHT;
}
