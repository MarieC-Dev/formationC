//
//  main.c
//  lire-ecrire-fichiersC
//
//  Created by Marie Costa on 17/06/2020.
//  Copyright © 2020 bl. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PROTOTYPE
// Ouverture
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
// Fermeture
int fclose(FILE* pointeurSurFichier);

int main(int argc, const char * argv[]) {
    
    FILE* fichier = NULL;
    
    fichier = fopen("test.txt", "r+"); // paramètre : nom du fichier, r+ : lecture et écriture
    
    // Test d'ouverture du fichier (si non écrit le fichier n'existe pas)
    if (fichier != NULL) {
        printf("Possibilité d'écrire et de lire le fichier. \n");
        // On peut lire et écrire dans le fichier
        fclose(fichier);
    } else {
        printf("Impossible d'ouvrir le fichier test.txt. \n");
    }
    //
    
    printf("\n\n");
    return 0;
}
