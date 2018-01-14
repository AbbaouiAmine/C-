#pragma once
#include "Enseignant.h"
class Directeur : public Enseignant
{
public :
	Directeur(char* ="",int =0,char* ="",char* ="",double =0.0);
	~Directeur();
	void print();
private :
	Directeur(const Directeur&);
	Directeur& operator=(const Directeur&);
private:
	char* labo;

};
