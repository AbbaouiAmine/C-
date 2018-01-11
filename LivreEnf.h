#pragma once
#include "Livre.h"
class LivreEnf : public Livre {
	//fct 
public :
	LivreEnf(string, string , int, double,int,int);
	~LivreEnf();
	double prix();
	void afficher();
	//attr
private : 
	int age_min;
	int age_max;
};