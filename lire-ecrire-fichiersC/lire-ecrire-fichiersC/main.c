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
//FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
// Fermeture
//int fclose(FILE* pointeurSurFichier);
// Écrire un caractère dans un fichier
//int fputc(int caractere, FILE* pointeurCaractere);
// Écrire une chaine
//char* fputs(const char* chaine, FILE* pointeurChaine);
// Lire un caractère
//int fgetc(FILE* pointeurReadCaract);
// Lire une chaine



int main(int argc, const char * argv[]) {
    
    FILE* fichier = NULL;
    fichier = fopen("/Users/costa/desktop/C/lire-ecrire-fichiersC/lire-ecrire-fichiersC/test.txt", "r+"); // paramètre : nom du fichier, r+ : lecture et écriture (ou  w : écriture)
    
    // DECLARER LES VARIABLES DU FICHIER
    // Variable fgetc
    int caractereActuel = 0;
    //
    
    /* ========================================================== */
        
    // TEST OUVERTURE DU FICHIER
    if (fichier != NULL) {
        printf("Fichier ouvert. \n\n");
    } else {
        //printf("Impossible d'ouvrir le fichier test.txt. \n \n");
        exit(1);
    }
    //
    
    /* ========================================================== */
    
    // LIRE UN CARACTERE
    printf("= LIRE UN CARACTERE (en boucle)\n");
    if (fichier != NULL) {
        while( caractereActuel != EOF ){
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        }
        fclose(fichier);
    } else {
        printf("Impossible d'ouvrir le fichier test.txt. \n \n");
    }
    //
    
    /* ========================================================== */
    
    // LIRE UNE CHAINE
    
    
    
    printf("\n\n");
    return 0;
}
