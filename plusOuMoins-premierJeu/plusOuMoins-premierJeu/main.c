//
//  main.c
//  plusOuMoins-premierJeu
//
//  Created by Marie Costa on 10/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n \n");
    
// CONSIGNE : https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/14828-tp-plus-ou-moins-votre-premier-jeu#/id/r-14773
    
// DEBUT DU TP PLUS OU MOINS : PREMIER JEU
    // Dire au programme de choisir un chiffre aléatoire entre 1 et 100.
    int nbreMystere;
    int MAX = 100, MIN = 1; // constante
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));
    // Générer un nombre aléatoire
    nbreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    
    
    
    for(int nbreUser = 0 ; nbreUser != nbreMystere;) {
        printf("Devinez le chiffre de l'ordinateur ! Il se situe entre 1 et 100 inclu. \n \n");
        scanf("%d", &nbreUser);
        
        if (nbreUser > 100 || nbreUser < 1) {
            printf("%d n'est pas compris entre 1 et 100 inclu... \n", nbreUser);
        } else if(nbreUser < nbreMystere) {
            printf("C'est plus ! \n");
        } else if(nbreUser > nbreMystere) {
            printf("C'est moins ! \n");
        } else if(nbreUser == nbreMystere) {
            printf("C'est gagné ! \n");
        } else {
            printf("NaN");
        }
    }
    
    // Améliorer le programme : https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/14828-tp-plus-ou-moins-votre-premier-jeu#/id/r-14827
    
    // printf(nbreMystere);
    
    printf("\n");
    return 0;
}
