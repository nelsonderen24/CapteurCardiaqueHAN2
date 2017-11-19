#include "menu.h"
#include "donnee.h"
#include "action.h"

void choisirAffichageMenu(Liste* liste){

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
          " 8  : Rechercher pouls maximum et minimum\n"
          " 0  : Quitter\n\n");

  scanf("%d",&x);

  switch (x) {
  case 0:
  break;
  case 1:
    afficherOrdreCroissantTemps(liste);
  break;
  case 2:
    afficherOrdreDecroissantTemps(liste);
  break;
  case 3:
  //ordre du croissant selon pouls
  break;
  case 4:
  //ordre du decroissant selon pouls

  break;
  case 5:
    printf("Temps debut: ");
    scanf("%d",&tempsDebut);
    printf("Temps fin: ");
    scanf("%d",&tempsFin);
    afficherTempsChoisi(liste,tempsDebut,tempsFin);
  break;
  case 6:
    printf("Temps debut: ");
    scanf("%d",&tempsDebut);
    printf("Temps fin: ");
    scanf("%d",&tempsFin);
    afficherMoyenneTempsChoisi(liste, tempsDebut, tempsFin);
  break;
  case 7:
    afficherNombresDeDonneesStockees(liste);
  break;
  case 8:
    afficherMaxMin(liste);
  break;
  default:
    printf("entree non valide");
  break;
  }
}
