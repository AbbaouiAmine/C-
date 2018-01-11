#include <iostream>
#include "LivreEnf.h"


using std::cout;
using std::endl;

LivreEnf::LivreEnf(string a, string t, int n, double p,int min,int max):Livre(a,t,n,p)
{
	this->age_max = max;
	this->age_min = min;
}

LivreEnf::~LivreEnf()
{
}

double LivreEnf::prix()
{
	double pi = Livre::prix();
	return pi-pi*0.9;
}

void LivreEnf::afficher()
{
	Livre::afficher();
	cout << "Age max :" << this->age_max << ", Age min :" << this->age_min;

}
