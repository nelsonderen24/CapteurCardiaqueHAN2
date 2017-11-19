#include <stdio.h>
#include <stdlib.h>
#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED

void afficherMaxMin(Liste* liste);
void afficherTempsChoisi(Liste *liste,tempsDebut,tempsFin);
void afficherMoyenneTempsChoisi(Liste *liste,tempsDebut,tempsFin);
void afficherNombresDeDonneesStockes(Liste *liste);
int calculeNombresDeDonneesStockes(Liste *liste);

#endif // ACTION_H_INCLUDED
