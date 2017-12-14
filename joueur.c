#include "header.h"
void initJoueur(joueur *j, int numero){
  j->nbSingesRestant = 6;
  j->nbDragonsRestant = 2;
  j->nbLionsRestant = 4;
  j->numero = numero;
}
