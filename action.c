#include "menu.h"
#include "donnee.h"
#include "action.h"

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
}
