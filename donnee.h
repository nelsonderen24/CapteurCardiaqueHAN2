#include <stdio.h>
#include <stdlib.h>
#ifndef DONNEE_H_INCLUDED
#define DONNEE_H_INCLUDED

typedef struct RythmeC {
  int pouls;
  int temps;
  struct RythmeC* precedent;
  struct RythmeC* suivant;
} RythmeC;

typedef struct Liste {
  struct RythmeC* premier;
  struct RythmeC* dernier;
} Liste;

RythmeC creerRythmeC(int pouls, int temps);
Liste creerListe(RythmeC* rythmeC);
void enfiler(Liste* liste, RythmeC rythmeC);
void defiler(Liste* liste);


#endif // DONNEE_H_INCLUDED
