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

    placerPions();
    for(i = 0; i < 24; i++){
      printf("Pions numero %d,coordonnes : x %d, y %d\n", tabP[i].id,
      tabP[i].cor.x, tabP[i].cor.y);

  }
  coordonnees corVide;
  coordonnees corPleine;
  corVide.x = 0;
  corVide.y = 0;
  corPleine.x = 0;
  corPleine.y = 2;
  printf("Distance %d \n", distance(corVide, corPleine));*/
  initialiserPartie();
  pions test;
  coordonnees corTest = {2, 3};
  test = tabP[10];
  printf("%d %d \n", tabP[10].cor.x, tabP[10].cor.y);
  printf("Taille de tabP[10] = %d, Saut possible : %d \n",tabP[10].taille, sautPossible(&test, corTest));
  actualiserPion(tabP[10].cor, corTest);
  printf("Nouvelles coordonnes x :%d, y : %d", tabP[10].cor.x, tabP[10].cor.y);

  return 0;
}
