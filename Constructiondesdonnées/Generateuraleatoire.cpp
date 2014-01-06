#include "Generateuraleatoire.h"
#include <cstdlib> // Librairie nécéssaire à la génération de réels aléatoires
#include <ctime> // Librairie nécéssaire à la génération de réels aléatoires
#include <iostream>


double Generateuraleatoire01() //Création d'une fonction générant un réel aléatoire sur [0,1]
{
	double resultat;
	resultat = rand()/(double)RAND_MAX;
    return resultat;
}


double Generateuraleatoire(double a,double b) //Création d'une fonction générant un réel aléatoire sur [premier arg,deuxième arg]
{

	double resultat;
	resultat = (b-a)*Generateuraleatoire01()+a;
    return resultat;
}