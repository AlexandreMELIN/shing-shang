#include <stdio.h>
#include <math.h>
typedef struct coordonnees{
  int x;
  int y;
} coordonnees;

typedef struct joueur{
  int nbSingesRestant;
  int nbDragonsRestant;
  int nbLionsRestant;
  int numero;
} joueur;

typedef struct pions{
  int taille;
  char type;
  joueur joueur; //vaut 1 ou 2 selon le joueur qui joue
  coordonnees cor;
  int id; //permet d'identifier le pion
} pions;


char plateau[10][10];
pions tabP[24];



void setUpPions(pions *p, int type, int joueur, int id);
void initPions();
void setCoordonnes(pions *p, int x, int y);
void initJoueur(joueur *j, int numero);
void deplacer (pions *depart);
int estUnPion(coordonnees *cor);
void initialiser(char p[10][10]);
void afficher(char p[10][10]);
void placerPions();
void initialiserPartie();
int caseVide(coordonnees cor);
int distance(coordonnees depart, coordonnees arrive);
coordonnees getOldPos(coordonnees depart);
void actualiserPlateau(coordonnees oldPos, pions *p);
int getId(coordonnees cor);
int sautPossible(pions *p, coordonnees arrive);
void demande_coord(coordonnees *depart);
int est_dans_plateau(coordonnees* arrive);
void actualiserPion(coordonnees depart, coordonnees arrive);
