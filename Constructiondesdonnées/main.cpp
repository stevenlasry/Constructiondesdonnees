#include <iostream>
#include <vector> // Nouvelle librairie n�c�ssaire pour les tableaux dynamiques
#include "Generateuraleatoire.h"
using namespace std;

int main()
{
   int const nombrededonnees(500);
   int compteur(0); // Initialisation du compteur � 0
   vector<double> donnees(nombrededonnees); // Cr�ation d'un tableau contenant 500 r�els
   for (compteur = 0 ; compteur < 51 ; compteur++)
    {   double borne1(5), borne2(13), nombrealeatoire;
        nombrealeatoire = Generateuraleatoire(borne1,borne2);
        donnees[compteur]= nombrealeatoire; // On remplit les cases du tableau par un r�el al�atoire compris entre 5 et 10 pour simuler le taux de ch�mage
    }

   return 0;
}