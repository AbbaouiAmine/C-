#pragma once
#include <string>
#include "Livre.h"

using std::string;

class LivreEn : public Livre {
//fct 
public :
	LivreEn(string , string , int , double,string ,int );
	~LivreEn();
	void afficher();
	//attr
private :
	string des;
	int niveau_e;
};
