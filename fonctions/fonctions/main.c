//
//  main.c
//  fonctions
//
//  Created by Marie Costa on 10/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Créer une fonction
    int triple(int nbre) {
        int resultat = 0;
        
        resultat = 3 * nbre;
        return resultat;
        // OU en une ligne
        // return 3 * nbre;
    }

// =============================================================================================================================

int main(int argc, const char * argv[]) {
    
    int nbreBetween = 0, nbreTriple = 0;
    
    printf("Entrez un chiffre : \n");
    scanf("%d", &nbreBetween);
    
    // Appel de la fonction
    nbreTriple = triple(nbreBetween);
    printf("Le triple de votre chiffre est %d. \n", nbreTriple);
    //
    
    // Program ended
    return 0;
    
    
    
    
    
// FONCTIONS
    // Créer une fonction
    /*
     type nomFonction( parametres ) {
        instructions
     }
     
     * type : type de la fonction (comme les variables avec int, double, ...)
         Deux sortes de fonctions :
            - celle qui renvoient une valeur. On met un type comme : char, int, double, ...
            - celle qui ne renvoient pas de valeur. On leur met un type spécial : void (vide).
     * nomFonction : nom de la fonction
     * parametre : correspond à l'entrée. Ce sont des valeurs avec lesquelles la fonction va travailler. Possible de n'envoyer aucun paramètre (rare)
     
     */

    return 0;
}

