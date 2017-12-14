#include "header.h"

void initialiserPartie(){
    initialiser(plateau);//initialise le plateau
    initPions();//initialise tous les pions
    placerPions();//place les pions
    //todo : initialiser les deux joueurs
    afficher(plateau);//affiche le plateau
}
