#include "header.h"
 int caseVide(coordonnees cor){ //vaut 1 si la case est vide et 0 si non
     int aRetourner = 0;
     if(plateau[cor.x][cor.y] != '0')
        aRetourner = 1;
    return aRetourner;
 }
void initialiser(char p[10][10]){
    char t[10][10]={
    {' ','0','0','0','0','0','0','0','0',' '},
    {' ','0','0','0','P','P','0','0','0',' '},
    {' ','0','0','0','0','0','0','0','0',' '},
    {' ','0','0','0','0','0','0','0','0',' '},
    {'0','0','0','0','0','0','0','0','0','0'},
    {'0','0','0','0','0','0','0','0','0','0'},
    {' ','0','0','0','0','0','0','0','0',' '},
    {' ','0','0','0','0','0','0','0','0',' '},
    {' ','0','0','0','P','P','0','0','0',' '},
    {' ','0','0','0','0','0','S','0','0',' '}};
    int i, j ;
    for (i=0 ; i<10 ; i++)
        for (j=0 ; j<10 ; j++)
            p[i][j]=t[i][j];
}

void afficher(char p[10][10]){
    int i;
    int j;
    printf("\n");
    for (i=0 ; i<10 ; i++){
        for (j=0 ; j<10 ; j++){
            printf("%2c",p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int distance(coordonnees depart, coordonnees arrive){
    int aRetourner = sqrt((arrive.x - depart.x ) * (arrive.x - depart.x ) +
    (arrive.y - depart.y) * (arrive.y - depart.y));
    return aRetourner;
}
coordonnees getOldPos(coordonnees depart){ //permet de stocker les anciennes coordonnées d'un pion
    coordonnees aRetourner;
    aRetourner.x = depart.x;
    aRetourner.y = depart.y;
    return aRetourner;
}
void actualiserPlateau(coordonnees oldPos, pions *p){
    plateau[oldPos.x][oldPos.y] = '0';
    plateau[p->cor.x][p->cor.y] = p->type;
}

