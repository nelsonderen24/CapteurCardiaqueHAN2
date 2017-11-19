#include "menu.h"
#include "donnee.h"
#include "action.h"


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

void afficherTempsChoisi(Liste *liste,tempsDebut,tempsFin) {
    RythmeC* rythmeC= liste->premier;
    int pouls = 0;
    int temps = 0;
    while (rythmeC->temps <= tempsFin) {
        if (rythmeC->temps >= tempsDebut) {
            pouls = rythmeC->pouls;
            temps = rythmeC->temps;
            printf("%d ; %d\n", temps, pouls);
        }
        rythmeC= rythmeC->suivant;
    }

}
void afficherMoyenneTempsChoisi(Liste *liste,tempsDebut,tempsFin) {
    RythmeC* rythmeC= liste->premier;
    int pouls = 0;
    int temps = 0;
    int x = 0;
    int y = 0;
    while (rythmeC->temps <= tempsFin) {
        if (rythmeC->temps >= tempsDebut) {
            pouls = rythmeC->pouls;
            temps = rythmeC->temps;
            x = x + pouls;
            y++;
        }
        rythmeC= rythmeC->suivant;
    }
    float moyenne = x/y;
    printf("La moyenne du pouls dans la plage de temps donnee est de : %f", moyenne);
}
void afficherNombresDeDonneesStockes(Liste *liste){
    int compteur = calculeNombresDeDonneesStockes(Liste *liste);
    printf("Il y %d lignes de donnees actuellement en memoire", compteur);
}

int calculeNombresDeDonneesStockes(Liste *liste){
    int compteur = 0;
    RythmeC* rythmeC= liste->premier;
    while (rythmeC->suivant != NULL) {
        compteur ++;
        rythmeC= rythmeC->suivant;
    }
    return compteur;

void afficherMaxMin(Liste* liste) {
  RythmeC* rythmeC = liste->premier;
  int poulsMax = rythmeC->pouls;
  int tempsMax = rythmeC->temps;
  int tempsMin = rythmeC->temps;
  int poulsMin = rythmeC->pouls;
  while (rythmeC->suivant != NULL) {
    rythmeC = rythmeC->suivant;
    if (rythmeC->pouls > poulsMax) {
      poulsMax = rythmeC->pouls;
      tempsMax = rythmeC->temps;
    }
    if (rythmeC->pouls < poulsMax) {
      poulsMin = rythmeC->pouls;
      tempsMin = rythmeC->temps;
    }
  }
  printf("Valeur du poulsMax/temps : %d / %d\nValeur du poulsMin/temps : %d / %d\n", poulsMax, tempsMax, poulsMin, tempsMin);
}
