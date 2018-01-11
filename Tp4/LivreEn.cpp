#include "LivreEn.h"
#include <iostream>

using std::cout;
using std::endl;

LivreEn::LivreEn(string a, string t, int n, double p, string d,int nv):Livre(a,t,n,p)
{
	this->des = d;
	this->niveau_e = nv;
}

LivreEn::~LivreEn()
{
}

void LivreEn::afficher()
{
	Livre::afficher();
	cout << "Desipline : " << this->des << "Niveau : " << this->niveau_e;
}
