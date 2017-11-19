#include "menu.h"
#include "donnee.h"
#include "action.h"

afficherMaxMin(Liste* liste) {
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
