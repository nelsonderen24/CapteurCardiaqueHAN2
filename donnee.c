#include "menu.h"
#include "donnee.h"
#include "action.h"

RythmeC* creerRythmeC(int pouls, int temps){
    RythmeC* rythmeC = malloc(sizeof(*rythmeC));
    rythmeC->pouls = pouls;
    rythmeC->temps = temps;
    rythmeC->suivant = NULL;
    rythmeC->precedent = NULL;
    return rythmeC;
}

Liste *creerListe(RythmeC* rythmeC){
  Liste *liste = malloc(sizeof(*liste));
  liste->premier = rythmeC;
  liste->dernier = rythmeC;
  return liste;
}

void enfiler(Liste* liste, RythmeC* rythmeC){
  rythmeC->precedent = liste->dernier;
  rythmeC->suivant = NULL;
  liste->dernier->suivant = rythmeC;
  liste->dernier = rythmeC;
}

void defiler(Liste* liste){
  liste->dernier = liste->dernier->precedent;
  free(liste->dernier->suivant);
  liste->dernier->suivant = NULL;
}
