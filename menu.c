#include "menu.h"
#include "donnee.h"
#include "action.h"

void choisirAffichageMenu(){

  int x = 0;
  int tempsDebut = 0, tempsFin = 0;
  printf("Choisir l'affichage des donnees voulu :\n\n"
          " 1  : Ordre croissant selon le temps\n"
          " 2  : Ordre decroissant selon le temps\n"
          " 3  : Ordre croissant selon le pouls\n"
          " 4  : Ordre decroissant selon le pouls\n"
          " 5  : Rechercher sur un temps choisi\n"
          " 6  : Moyenne du pouls sur un temps choisi\n"
          " 7  : Nombre de lignes de donnees en memoire\n"
          " 8  : Rechercher pouls maximum\n"
          " 9  : Rechercher pouls minimum\n"
          " 0  : Quitter\n\n");

  scanf("%d",&x);

  switch (x) {
  case 0:
  break;
  case 1:
    afficherOrdreCroissantTemps(Liste* liste);
  break;
  case 2:
    afficherOrdreDecroissantTemps(Liste* liste);
  break;
  case 3:
  //ordre du croissant selon pouls
  break;
  case 4:
  //ordre du decroissant selon pouls
    printf("Temps debut");
    scanf("%d",&tempsDebut);
    printf("Temps fin");
    scanf("%d",&tempsFin);
  break;
  case 5:
    printf("Temps debut");
    scanf("%d",&tempsDebut);
    printf("Temps fin");
    scanf("%d",&tempsFin);
  //pouls sur un temps choisi
  break;
  case 6:
  //moyenne des pouls sur temps choisi
  break;
  case 7:
  //nombre dedonnés stockés
  break;
  case 8:
  //pouls max
  break;
  case 9:
  //pouls min
  break;
  }
}
