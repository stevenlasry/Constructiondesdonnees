#include <iostream>
#include <vector> // Nouvelle librairie nécéssaire pour les tableaux dynamiques
#include "Generateuraleatoire.h"
using namespace std;

int main()
{
   int const nombrededonnees(500);
   int compteur(0); // Initialisation du compteur à 0
   vector<double> donnees(nombrededonnees); // Création d'un tableau contenant 500 réels
   for (compteur = 0 ; compteur < 51 ; compteur++)
    {   double borne1(5), borne2(13), nombrealeatoire;
        nombrealeatoire = Generateuraleatoire(borne1,borne2);
        donnees[compteur]= nombrealeatoire; // On remplit les cases du tableau par un réel aléatoire compris entre 5 et 10 pour simuler le taux de chômage
    }

   return 0;
}