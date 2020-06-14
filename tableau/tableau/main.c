//
//  main.c
//  tableau
//
//  Created by Marie Costa on 13/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Un tableau peut-être considéré comme un pointeur
int main(int argc, const char * argv[]) {
    
    // Définir un tableau de 4 int (pointeur) (entre [] le nbre de cases à mettre à l'intérieur)
    int tableau[4];
    
    // Accéder aux cases du tableau => tableau[nbre_de_cases];
    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 567;
    tableau[3] = 75;
    
    // Connaître l'adresse du tableau
    //printf("Adresse : %d \n", tableau);
    
    // Connaître la première valeur du tableau
    printf("Première valeur du tableau : %d \n", *tableau);
    //
    
    // Connaître la valeur de la seconde case ( ajouter des () et un +1 )
    printf("Valeur deuxième case : %d \n \n", *(tableau + 1));
    //
    
    // Parcourir un tableau
    int i = 0;
    for(i = 0; i < 4; i++) {
        printf("Les valeurs du tableau : %d \n", tableau[i]);
    }
    //
    
    // Initialiser un tableau (mettre les valeurs à 0 avec une boucle)
    printf("\nInitialisation du tableau : \n");
    for(i = 0; i < 4; i++) {
        tableau[i] = 0;
        printf("Remise à zéro %d. \n", tableau[i]);
    }
    //
    //
    //
    //
    //
    
    // Tableau à taille dynamique (version C99)
    int tailleTableau = 2;
    int array[tailleTableau];
    
    array[0] = 34;
    array[1] = 121;
    array[2] = 596;
    
    printf("\nPremière valeur de array : %d \n \n", *array);
    //

    // Autre initialisation
    int pair[4] = {2, 4, 6, 8}, u = 0; // Déclaration du tableau et de son contenu
    
    for(u = 0; u < 4; u++) {
        printf("Autre initialisation : %d \n", pair[u]);
    }
    // Remise à zéro
    for(u = 0; u < 4; u++) {
        pair[u] = 0;
        printf("Remise à zéro : %d \n", pair [u]);
    }
    //
    
    
    printf("\n \n");
    return 0;
}
