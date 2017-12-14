#include "header.h"

void setUpPions(pions *p, int type, int joueur, int id){
  p->id = id;
  if(type == 1){
    p->taille = 3;
    p->type = 'D';
    p->joueur.numero = joueur;
  }
  else if(type == 2){
    p->taille = 2;
    p->type = 'L';
    p->joueur.numero = joueur;
  }
  else if(type == 3){
    p->taille = 1;
    p->type = 'S';
    p->joueur.numero = joueur;
  }
}

void initPions(){
    int i;
    for(i = 0; i < 6; i++){
        setUpPions(&tabP[i], 3, 1, i);
        setUpPions(&tabP[i + 12], 3, 2, i + 12);
    }
    for(i = 6; i < 10; i++){
        setUpPions(&tabP[i], 2, 1, i);
        setUpPions(&tabP[i + 12], 2, 2, i + 12);
    }
    for(i = 10; i < 12; i++){
        setUpPions(&tabP[i], 1, 1, i);
        setUpPions(&tabP[i + 12], 1, 2, i + 12);
    }
}

int estUnPion(coordonnees *cor){
  int aRetourner = 0;
  int x = cor->x;
  int y = cor->y;
  if((plateau[x][y] != '0')  && (plateau[x][y] != ' ') && (plateau[x][y] != 'P'))
    aRetourner = 1;
  return aRetourner;
}

void setCoordonnes(pions *p, int x, int y){
  p->cor.x = x;
  p->cor.y = y;
}


void deplacer(pions *depart){ // non finie reste à faire toutes les verifications
    coordonnees arrive;
    arrive.x = 0;
    arrive.y = 0;
    do{
      printf("Coordonnees en x :\n");
      scanf("%d", &arrive.x);
      printf("Coordonnes en y :\n ");
      scanf("%d", &arrive.y);
    }while((arrive.x >= 10 || arrive.x < 0) || (arrive.y >= 10 || arrive.y < 0));
    depart->cor.x = arrive.x;
    depart->cor.y = arrive.y;
}

void placerPions(){
  int i;
  int j;
  for(i = 0; i < 3; i++){
    for(j = 1; j < 9; j++){
      if(i == 0){
        switch(j){
          case 1:
            setCoordonnes(&tabP[10], i, j);
            setCoordonnes(&tabP[22], 9 - i, j);
            plateau[i][j] = tabP[10].type;
            plateau[9 - i][j] = tabP[22].type;
            break;
          case 2:
            setCoordonnes(&tabP[6], i, j);
            setCoordonnes(&tabP[18], 9 - i, j);
            plateau[i][j] = tabP[6].type;
            plateau[9 - i][j] = tabP[18].type;
            break;
          case 3:
            setCoordonnes(&tabP[0], i, j);
            setCoordonnes(&tabP[12], 9 - i, j);
            plateau[i][j] = tabP[0].type;
            plateau[9 - i][j] = tabP[12].type;
            break;
          case 6:
            setCoordonnes(&tabP[1], i, j);
            setCoordonnes(&tabP[13], 9 - i, j);
            plateau[i][j] = tabP[1].type;
            plateau[9 - i][j] = tabP[13].type;
            break;
          case 7:
            setCoordonnes(&tabP[7], i, j);
            setCoordonnes(&tabP[19], 9 - i, j);
            plateau[i][j] = tabP[7].type;
            plateau[9 - i][j] = tabP[19].type;
            break;
          case 8:
            setCoordonnes(&tabP[11], i, j);
            setCoordonnes(&tabP[23], 9 - i, j);
            plateau[i][j] = tabP[11].type;
            plateau[9 - i][j] = tabP[23].type;
            break;
          default:
            break;
        }
      }
      else if(i == 1){
        switch(j){
          case 1:
            setCoordonnes(&tabP[8], i, j);
            setCoordonnes(&tabP[20], 9 - i, j);
            plateau[i][j] = tabP[8].type;
            plateau[9 - i][j] = tabP[20].type;
            break;
          case 2:
            setCoordonnes(&tabP[2], i, j);
            setCoordonnes(&tabP[14], 9 - i, j);
            plateau[i][j] = tabP[2].type;
            plateau[9 - i][j] = tabP[14].type;
            break;
          case 7:
            setCoordonnes(&tabP[3], i, j);
            setCoordonnes(&tabP[15], 9 - i, j);
            plateau[i][j] = tabP[3].type;
            plateau[9 - i][j] = tabP[15].type;
            break;
          case 8:
            setCoordonnes(&tabP[9], i, j);
            setCoordonnes(&tabP[21], 9 - i, j);
            plateau[i][j] = tabP[9].type;
            plateau[9 - i][j] = tabP[21].type;
            break;
          default:
            break;
        }
      }
      else if(i == 2){
        switch(j){
          case 1:
            setCoordonnes(&tabP[4], i, j);
            setCoordonnes(&tabP[16], 9 - i, j);
            plateau[i][j] = tabP[4].type;
            plateau[9 - i][j] = tabP[16].type;
            break;
          case 8:
            setCoordonnes(&tabP[5], i, j);
            setCoordonnes(&tabP[17], 9 - i, j);
            plateau[i][j] = tabP[5].type;
            plateau[9 - i][j] = tabP[17].type;
            break;
          default:
            break;

        }
      }
    }
  }
}
