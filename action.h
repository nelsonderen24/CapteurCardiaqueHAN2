
#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int convertisseurListeEnTab(Liste* liste);
void tri_insertion(int tab, int taille);
void afficherOrdreCroissantTemps(Liste* liste);
void afficherOrdreDecroissantTemps(Liste* liste);
void afficherOrdreCroissantPouls(Liste* liste);
void afficherOrdreDecroissantPouls(Liste* liste);
void afficherTempsChoisi(Liste *liste,int tempsDebut,int tempsFin);
void afficherMoyenneTempsChoisi(Liste *liste,int tempsDebut,int tempsFin);
void afficherNombresDeDonneesStockees(Liste* liste);
int calculerNombresDeDonneesStockees(Liste* liste);
void afficherMaxMin(Liste* liste);

#endif // ACTION_H_INCLUDED
