#pragma once
#include "Personne.h"
#include "Etudiant.h"

class Enseignant :public Personne
{
	public :
		Enseignant();
		Enseignant(char*,int,char*,double,Etudiant* =0);
		virtual ~Enseignant();
		void ajoutEtudiant(Etudiant*);
		virtual void print();
		void print_etudiant();
private :
	Enseignant(const Enseignant& );
	Enseignant& operator=(Enseignant&);
	private :
		char * specialite;
		double salaire;
		Etudiant * etudiants_encadrees;
		int nbret;
};
