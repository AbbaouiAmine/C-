#pragma once 
#include <iostream>
#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"
#include "Directeur.h"

using std::cout;
using std::endl;

int main()
{


	Etudiant* e1 = new Etudiant(21, "amine", 3, "univ1");

	Etudiant* e2 = new Etudiant();

	Etudiant* e3 = new Etudiant(*e1);
	*e2 = *e1;

	Enseignant* ens = new Enseignant("abbaoui", 26, "spec1", 10000);
	Enseignant* ens1 = new Enseignant("mouayani", 26, "spec2", 15500);
	Directeur* dir1 = new Directeur("Laabi", 26, "spec3", "Labo1", 15000);
	Enseignant** liste = new Enseignant*[3];
	ens->ajoutEtudiant(e1);
	ens->ajoutEtudiant(e2);
	ens->ajoutEtudiant(e3);
	liste[0] = ens;
	liste[1] = ens1;
	liste[2] = dir1;

	for (size_t i = 0; i < 3; i++)
	{
		cout << "=========================================" << endl;
		liste[i]->print();
		cout << "=========================================" << endl;
	}



	delete e1;

	delete e2;

	delete e3;

	delete ens;


	system("pause");
	return 1;
}
