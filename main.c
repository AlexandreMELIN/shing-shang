#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void){
    /*pions p;
    p.cor.x = 0;
    p.cor.y = 1;
    coordonnees cor;
    cor.x = 2;
    cor.y = 1;
    initialiser(plateau);
    afficher(plateau);
    printf("Val de est un pion %d \n", estUnPion(&cor));
    int i;
    printf("%d \n", estUnPion(&cor));
    deplacer(&p);
    printf("%d %d \n", p.cor.x, p.cor.y);
    initPions();
    for(i = 0 ; i < 24; i++){
        printf("joueur %d type %c taille %d id %d \n", tabP[i].joueur.numero, tabP[i].type, tabP[i].taille, tabP[i].id);
    }
    placerPions();
    for(i = 0; i < 24; i++){
      printf("Pions numero %d,coordonnes : x %d, y %d\n", tabP[i].id,
      tabP[i].cor.x, tabP[i].cor.y);

  }*/
  coordonnees corVide;
  coordonnees corPleine;
  corVide.x = 0;
  corVide.y = 1;
  corPleine.x = 1;
  corPleine.y = 2;
  printf("Distance %d \n", distance(corVide, corPleine));
  return 0;
}
