#include "stdafx.h"
#include <iostream>
#include <cassert>
#include <string>
#include "Rationnel.h"
#pragma once

using namespace std;
using Ex3::Rationnel;


	Rationnel::Rationnel()
	{
		this->nominateur = 1;
		this->denominateur = 1;
	}
	Rationnel::Rationnel(int n, int d)
	{

		//try
		//{
		assert(!(d == 0 || d<0));//abort
		this->nominateur = n;
		
		//	if (d <= 0)
		//	{
		//		throw string("Erreur de dinomi ou null");
		//	}
		//}
		//catch (string & ch)
		//{
		//	cerr << ch;
		//}
	}
	Rationnel::~Rationnel()
	{
	}
	/*Dustructeurs*/
	/*Comportement*/
	float Rationnel::valeur_Entiere()
	{
		return ((float)this->nominateur / this->denominateur);
	}
	int Rationnel::partie_reelle()
	{
		return (this->nominateur / this->denominateur);
	}
	void Rationnel::Inverser()
	{
		int tmp = this->nominateur;
		this->nominateur = this->denominateur;
		this->denominateur = tmp;
	}
	Rationnel Rationnel::somme(Rationnel & a)
	{
		int deno = 1, no = 1;
		if (a.denominateur == this->denominateur)
		{
			deno = a.denominateur;
			no = a.nominateur + this->nominateur;
		}
		else
		{
			deno = a.denominateur*this->denominateur;
			no = (a.nominateur*this->denominateur) + (this->nominateur*a.denominateur);
		}
		Rationnel s(no, deno);
		/*while (s.pgcd() != 1)
		{
			int pgcd = s.pgcd();
			s.nominateur /=pgcd ;
			s.denominateur /= pgcd;
		}*/
		return s;
	}
	void Rationnel::ToString()
	{
		cout << this->nominateur << "/" << this->denominateur;
	}
	int Rationnel::pgcd()
	{
		int pgcd = 1;
		int min = this->nominateur;

		if (this->denominateur < this->nominateur)
			min = this->denominateur;

		for (int i = 2; i <min; i++)
		{
			if (this->nominateur%i == 0 && this->denominateur%i == 0)
			{
				pgcd = i;
			}
		}
		return pgcd;
	}