#include <iostream>
#include <cassert>
#include <string>

using namespace std;

#pragma once
namespace Ex3 {

class Rationnel
{
	//Attribut
private : 
	int nominateur;
	unsigned int denominateur;
public :
	//Methode
	/*Constructeurs*/
	Rationnel();
	Rationnel(int , int );
	/*Dustructeurs*/
	~Rationnel();
	/*Comportement*/
	float valeur_Entiere();
	int partie_reelle();
	void Inverser();
	Rationnel somme(Rationnel & a);
	void ToString();
	int pgcd();
};

}