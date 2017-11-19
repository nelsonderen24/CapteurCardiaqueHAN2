
#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void afficherTableauCreeCroissant(Liste* liste, int taille);
void affichageTriInsertionCroissant(int* p, int taille);
void afficherTableauCreeDecroissant(Liste* liste, int taille);
void affichageTriInsertiondDecroissant(int* p, int taille);

void convertisseurListeEnTab(Liste* liste, int taille);
void tri_insertion(int* p, int taille);
void afficherOrdreCroissantTemps(Liste* liste);
void afficherOrdreDecroissantTemps(Liste* liste);
void afficherTempsChoisi(Liste *liste,int tempsDebut,int tempsFin);
void afficherMoyenneTempsChoisi(Liste *liste,int tempsDebut,int tempsFin);
void afficherNombresDeDonneesStockees(Liste* liste);
int calculerNombresDeDonneesStockees(Liste* liste);
void afficherMaxMin(Liste* liste);

#endif // ACTION_H_INCLUDED
