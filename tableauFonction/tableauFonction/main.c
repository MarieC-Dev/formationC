//
//  main.c
//  tableauFonction
//
//  Created by Marie Costa on 14/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

// MAIN
int main(int argc, const char * argv[]) {
    // Fonction afficher le tableau
    int tableau[4] = {2, 4, 6, 8};
    display(tableau, 4);
    //
    
    // Fonction calculer la somme du tableau
    int plus[3] = {34, 121, 6};
    somme(plus, 3);
    //
    
    // Fonction calculer la moyenne du tableau
    double tableauMoyenne[4] = {10, 18, 15, 12};
    moyenne(tableauMoyenne, 4);
    //
    
    // Fonction remise à zéro si la valeur est supérieur au max
    int maxTableau[5] = {198, 56, 21, 286, 64};
    max(maxTableau, 5, 100);
    //

    printf("\n \n");
    return 0;
}
//
//
//
//
//

// FONCTIONS
// Fonction afficher le tableau
void display(int array[], int size) {
    int i;
    
    for(i = 0; i < 4; i++){
        printf("Afficher le tableau : %d. \n", array[i]);
    }
}

// Fonction calculer la somme du tableau
int somme(int addition[], int sizeAddition) {
    int resultat = 0;
    
    resultat = *addition += *(addition + 1) += *(addition + 2); // Première valeur ( !!! pas besoin de *( +1) !) / deuxième valeur *( +1) / troisième valeur *( +2)
    printf("\nSomme du tableau :\n%d \n \n", resultat);
    
    return resultat;
}

// Fonction calculer la moyenne du tableau
double moyenne(double arrayMoyenne[], double sizeMoyenne) {
    double resultatMoyenne = 0;
    
    resultatMoyenne = *arrayMoyenne += *(arrayMoyenne + 1) += *(arrayMoyenne + 2) += *(arrayMoyenne + 3);
    resultatMoyenne /= 4;
    printf("Moyenne du tableau :\n%f \n \n", resultatMoyenne);
    
    return resultatMoyenne;
}

// Remise à zéro si supérieur au max du tableau
void max(int maxArray[], int sizeMaxArray, int valeurMax) {
    int u;
    
    for (u = 0; u < 5; u++) {
        if(maxArray[u] > valeurMax) {
            maxArray[u] = 0;
            printf("La valeur remise à zéro est supérieur à %d. \n", valeurMax);
        }
    }
    for (u = 0; u < 5; u++) {
        printf("Valeurs du tableau : %d \n", maxArray[u]);
    }
}
