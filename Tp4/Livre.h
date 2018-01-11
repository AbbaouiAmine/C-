#pragma once
#include <string>
using std::string;

class Livre{
	//fcts 
public :
	Livre(string ="", string="",int=0, double=0.0);
	~Livre();
	virtual double prix();
	
 virtual  void afficher();
	//attributs
private :
	string titre;
	string auteur;
	int nombre_page;
	double PHT;
};