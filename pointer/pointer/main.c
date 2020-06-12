//
//  main.c
//  pointer
//
//  Created by Marie Costa on 12/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// PROTOTYPES
void cutMinutes(int h, int min);


int main(int argc, const char * argv[]) {
    
    // VARIABLES - fonction cutMinutes
    /*int heures = 0, minutes = 90;
    cutMinutes(heures, minutes);
    printf("%d heures et %d minutes \n \n", heures, minutes); */
    //
    
    // TEST POINTER
    int age = 21;
    int cmTaille = 175;
    printf("La variable age se trouve à l'adresse %p. \n", &age);
    printf("La variable taille (en cm) se trouve à l'adresse %d. \n\n", &cmTaille);
        // %p adresse hexadécimal
        // %d adresse décimal
        // & dans printf : &nomVariable désigne l'adresse de la variable
    
    // VARIABLE CONTENANT DES ADRESSES
        // Créer un pointeur
        int *pointeur = NULL;
        int age2 = 21;
        pointeur = &age2;
        
        // Afficher l'adresse de la variable pointeur
        printf("Adresse pointeur : %d. \n", pointeur);
    
        // Afficher la valeur du pointeur (placer le * devant le nom du pointeur
        printf("Valeur du pointeur : %d. \n \n", *pointeur);
        
    return 0;
}

void cutMinutes(int h, int min) {
    h = min / 60; // 90 / 60 = 1
    min = min % 60; // Reste des 90 minutes : 90 % 60 = 30
}
