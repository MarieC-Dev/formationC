//
//  main.c
//  boucle
//
//  Created by Marie Costa on 10/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
// BOUCLE WHILE
    int nbreUser = 0;
    while(nbreUser != 47) {
        printf("Tappez le chiffre 47. \n");
        scanf("%d", &nbreUser);
    }
    
    int compteur = 0;
    
    while(compteur <= 5) {
        printf("La boucle vaut %d. \n", compteur);
        compteur++;
    }
    /*
     while(1) {
        printf("Boucle infinie. \n");
     }
     */
// ================================================================================================
// ================================================================================================
// ================================================================================================
    
// BOUCLE DO... WHILE
    int doWhile = 0;
    
    do {
        printf("Salut les dev' ! \n");
        doWhile++;
    } while(doWhile < 10);
    // Si l'instruction est fausse, la boucle s'exécutera au moins une fois au lieu de s'arréter car le test se fait à la fin (pas le cas pour while).
    
// ================================================================================================
// ================================================================================================
// ================================================================================================
    
// BOUCLE FOR (avec cette boucle pas de risque de faire une boucle infinie par erreur)
    // Pas besoin d'initialiser la variable de la boucle for
    int forBoucle;
    
    // for(initialisation ; condition(doit être répétée ou non) ; incrémentation(décrémentation ou n'importe quel autre opération comme +=2 ava,cer de 2 en 2) )
    for (forBoucle = 0; forBoucle <= 5; forBoucle++) {
        printf("La boucle For vaut %d. \n", forBoucle);
    }
// ================================================================================================
// ================================================================================================
// ================================================================================================
        
    printf("\n");
    return 0;
}
