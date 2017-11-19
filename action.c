#include "menu.h"
#include "donnee.h"
#include "action.h"
#define tailleTableau 200

void afficherOrdreCroissantTemps(Liste* liste){
  RythmeC* rythmeC = liste->premier;
  while((rythmeC->suivant) != NULL){
    printf("%d / %d\n", rythmeC->temps, rythmeC->pouls);
    rythmeC = rythmeC->suivant;
  }
}

void afficherOrdreDecroissantTemps(Liste* liste){
  RythmeC* rythmeC = liste->dernier;
  while((rythmeC->precedent) != NULL){
    printf("%d / %d\n", rythmeC->temps, rythmeC->pouls);
    rythmeC = rythmeC->precedent;
  }
}

void afficherTableauCreeCroissant(Liste* liste, int taille){
  int tab[tailleTableau];
  RythmeC* rythmeC = liste->premier;
  int i = 0;
  while((rythmeC->suivant) != NULL){
    tab[i] = rythmeC->pouls;
    tab[i+1] = rythmeC->temps;
    i = i+2;
    rythmeC = rythmeC->suivant;
  }
  affichageTriInsertionCroissant(tab, taille);
}
void  affichageTriInsertionCroissant(int* p, int taille){
  int i, j;
  for (i = 2; i < (taille*2) ; i = i+2) {
    int elemPouls = p[i];
    int elemTemps = p[i+1];
    for (j = i; j > 0 && p[j-2] > elemPouls; j = j-2){
      p[j] = p[j-2];
      p[j+1] = p[j-1];
   }
    p[j] = elemPouls;
    p[j+1] = elemTemps;
  }
  for(i = 0; i < taille*2; i = i+2){
    printf("%d / %d\n ", p[i], p[i+1]);
  }
}
void afficherTableauCreeDecroissant(Liste* liste, int taille){
  int tab[tailleTableau];
  RythmeC* rythmeC = liste->premier;
  int i = 0;
  while((rythmeC->suivant) != NULL){
    tab[i] = rythmeC->pouls;
    tab[i+1] = rythmeC->temps;
    i = i+2;
    rythmeC = rythmeC->suivant;
  }
  affichageTriInsertiondDecroissant(tab, taille);
}
void affichageTriInsertiondDecroissant(int* p, int taille){
  int i, j;
  for (i = 2; i < (taille*2) ; i = i+2) {
    int elemPouls = p[i];
    int elemTemps = p[i+1];
    for (j = i; j > 0 && p[j-2] > elemPouls; j = j-2){
      p[j] = p[j-2];
      p[j+1] = p[j-1];
   }
    p[j] = elemPouls;
    p[j+1] = elemTemps;
  }
  for(i = (taille*2)-1; i > 0; i = i-2) printf("%d / %d\n", p[i-1], p[i]);
}

void afficherTempsChoisi(Liste* liste,int tempsDebut,int tempsFin) {
    RythmeC* rythmeC= liste->premier;
    int pouls = 0;
    int temps = 0;
    while (rythmeC->temps <= tempsFin && rythmeC->suivant != NULL) {
      if (rythmeC->temps >= tempsDebut) {
        pouls = rythmeC->pouls;
        temps = rythmeC->temps;
        printf("%d ; %d\n", temps, pouls);
      }
      rythmeC= rythmeC->suivant;
    }
}

void afficherMoyenneTempsChoisi(Liste* liste,int tempsDebut,int tempsFin) {
    RythmeC* rythmeC= liste->premier;
    int pouls = 0;
    int x = 0;
    int y = 0;
    while (rythmeC->temps <= tempsFin && rythmeC->suivant != NULL) {
      if (rythmeC->temps >= tempsDebut) {
        pouls = rythmeC->pouls;
        x = x + pouls;
        y++;
      }
      rythmeC= rythmeC->suivant;
    }
    float moyenne = x/y;
    printf("La moyenne du pouls dans la plage de temps donnee est de : %f", moyenne);
}

void afficherNombresDeDonneesStockees(Liste* liste){
    int compteur = calculerNombresDeDonneesStockees(liste);
    printf("Il y %d lignes de donnees actuellement en memoire", compteur);
}

int calculerNombresDeDonneesStockees(Liste* liste){
    int compteur = 0;
    RythmeC* rythmeC= liste->premier;
    while (rythmeC->suivant != NULL) {
        compteur ++;
        rythmeC= rythmeC->suivant;
    }
    return compteur;
}

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

