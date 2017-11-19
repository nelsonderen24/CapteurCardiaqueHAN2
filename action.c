#include "menu.h"
#include "donnee.h"
#include "action.h"
#difine

void afficherOrdreCroissantTemps(Liste* liste){
  RythmeC* rythmeC = liste->premier;
  while((rythmeC->suivant) != NULL){
    printf("%d / %d", rythmeC->temps, rythmeC->pouls);
    rythmeC = rythmeC->suivant;
  }
}

void afficherOrdreDecroissantTemps(Liste* liste){
  RythmeC* rythmeC = liste->dernier;
  while((rythmeC->precedent) != NULL){
    printf("%d / %d", rythmeC->temps, rythmeC->pouls);
    rythmeC = rythmeC->precedent;
  }
}

void triInsertion(Liste* liste){
  RythmeC* rythmeC = liste->premier;
  while ((rythmeC->precedent) != NULL){
    RythmeC* rythmeC_precedent = rythmeC->precedent;
    int elem = rythmeC->pouls;
    int elemPrecedent = rythmeC_precedent->pouls;
    while(((rythmeC_Bis->precedent) != NULL) && (elemPrecedent > elem)){
      rythmeC = rythmeC->precedent;
    }
    rythmeC = rythmeC_precedent;
    rythmeC = rythmeC->suivant;
  }
}
*/

int convertisseurListeEnTab(Liste* liste){
  int tab[1000][2];
  RythmeC* rythmeC = liste->premier;
  int i = 0;
  while((rythmeC->suivant) != NULL){
    tab[i][0] = rythmeC->pouls;
    tab[i][1] = rythmeC->temps;
    i++;
    rythmeC = rythmeC->precedent;
  }
  return tab;
}

void tri_insertion(int tab[][], int taille){
   int i, j;
   for (i = 1; i < taille; ++i) {
       int elemPouls = tab[i][0];
       int elemTemps = tab[i][1];
       for (j = i; j > 0 && tab[j-1][0] > elemPouls; j--)
           tab[j][0] = tab[j-1][0];
           tab[j][1] = tab[j-1][1];
       tab[j][0] = elemPouls;
       tab[j][1] = elemTemps;
   }
}
