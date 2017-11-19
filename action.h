
#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int convertisseurListeEnTab(Liste* liste);
void tri_insertion(int tab[][], int taille);

//int triInsertion(Liste* liste, tailleListe);

void afficherOrdreCroissantTemps(Liste* liste);
void afficherOrdreDecroissantTemps(Liste* liste);
void afficherOrdreCroissantPouls(Liste* liste);
void afficherOrdreDecroissantPouls(Liste* liste);
void afficherTempsChoisi(Liste *liste,tempsDebut,tempsFin);
void afficherMoyenneTempsChoisi(Liste *liste,tempsDebut,tempsFin);
void afficherNombresDeDonneesStockes(Liste *liste);
void afficherPoulsMax(Liste* liste);
void afficherPoulsMin(Liste* liste);


#endif // ACTION_H_INCLUDED
