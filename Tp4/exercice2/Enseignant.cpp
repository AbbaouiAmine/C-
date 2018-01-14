#include <iostream>
#include <string>
#include "Enseignant.h"
#include "Etudiant.h"

using std::cout;
using std::endl;
using std::exception;

Enseignant::Enseignant()
{
}

Enseignant::Enseignant(char * nom, int age, char* specialite, double salaire, Etudiant * ets):Personne(nom,age)
{
	this->specialite = new char[strlen(specialite) + 1];
	strcpy(this->specialite,specialite);
	this->salaire = salaire;
	int i=0;
	for ( i = 0; (ets + i) != NULL; i++);
	this->nbret=0;
	if(i!=0)
	{ 
		if (i>=5)
			throw new exception("out of range ");

			this->etudiants_encadrees = new Etudiant[i];
			this->nbret = i;

			for (int j = 0; j < i; j++)
			{
				*(this->etudiants_encadrees + j) = *(ets + j);
			}
	}
	
}

void Enseignant::ajoutEtudiant(Etudiant * e)
{
	if (this->nbret < 5)
	{ 
		Etudiant* tmp = this->etudiants_encadrees;
		this->etudiants_encadrees = new Etudiant[this->nbret+1];
		for (int i = 0; i < this->nbret; i++)
		{
			this->etudiants_encadrees[i] = tmp[i];
		}
		*(this->etudiants_encadrees + this->nbret) = *e;
	
		this->nbret++;
	}

}

Enseignant::~Enseignant()
{
	if(specialite)
		delete [] specialite;
	if(etudiants_encadrees)
		delete[] etudiants_encadrees;
}

void Enseignant::print()
{
	Personne* p = this;
	cout << *p;
	cout << "Salaire :" << salaire<<endl;
	if (nbret>0)
		this->print_etudiant();
}

void Enseignant::print_etudiant()
{
	cout << "Liste des étudiant :" << endl;
	for (size_t i = 0; i < this->nbret; i++)
	{
		cout << *(etudiants_encadrees + i);
	}
}
