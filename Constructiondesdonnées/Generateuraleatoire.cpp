#include "Generateuraleatoire.h"
#include <cstdlib> // Librairie n�c�ssaire � la g�n�ration de r�els al�atoires
#include <ctime> // Librairie n�c�ssaire � la g�n�ration de r�els al�atoires
#include <iostream>


double Generateuraleatoire01() //Cr�ation d'une fonction g�n�rant un r�el al�atoire sur [0,1]
{
	double resultat;
	resultat = rand()/(double)RAND_MAX;
    return resultat;
}


double Generateuraleatoire(double a,double b) //Cr�ation d'une fonction g�n�rant un r�el al�atoire sur [premier arg,deuxi�me arg]
{

	double resultat;
	resultat = (b-a)*Generateuraleatoire01()+a;
    return resultat;
}