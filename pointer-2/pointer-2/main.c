//
//  main.c
//  pointer-2
//
//  Created by Marie Costa on 12/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// PROTOTYPE (envoyer un pointeur à une fonction)
void triplePointeur(int *pointeurNbre); // Fonction qui sert à récupérer l'adresse de la variable qui sera mis en paramètre

// PROTOTYPE (autre façon d'envoyer un pointeur à une fonction)
void doublePointeur(int *pointeur2);

int main(int argc, const char * argv[]) {
    
    // Envoyer un pointeur à une fonction
    int nbre = 5;
    triplePointeur(&nbre); // Envoie de l'adresse de nbre à la fonction
    printf("Contenu de la variable : %d. \n \n", nbre); // Afficher le contenu de la variable. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse
    //
    
    // Envoyer un pointeur à une fonction (autre façon)
    int chiffre = 10;
    int *pointeurChiffre = &chiffre; // Valeur de la variable qui se trouve dans l'adresse pointeurChiffre = Adresse de la variable
    
    doublePointeur(pointeurChiffre);
    printf("Contenu de la variable : %d. \n \n", *pointeurChiffre);
    
    return 0;
}

// triplePointeur
void triplePointeur(int *pointeurNbre) {
    *pointeurNbre *= 3; // Multiplie par 3 la valeur de nbre
}

// doublePointeur
void doublePointeur(int *pointeurChiffre) {
    *pointeurChiffre *= 3;
}
