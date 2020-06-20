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

#define TAILLE_MAX 1000 // Taille du tableau à 1000

/*
 PROTOTYPE DES FONCTIONS :
    • fopen :
    FILE* fopen(const char *pointeurFichier, const char *modeOuverture);
        -> <variableDuFichierAOuvrir> = fopen("<fichier.extension>", "<mode lecture/écriture>");
    • fclose :
    int fclose(FILE *pointeurFichier); <pointeur sur le fichier à fermer>
    
    • FPUTC (écrire un caractère à la fois) :
    int fputc(int caractere, FILE *pointeurFichier);
        -> fputc('caractere', <nom du fichier>);
    • FPUTS (écrire une chaîne) :
    char* fputs(const char *chaine, FILE *pointeurFichier);
        -> fputs();
 
    • FGETC (lire un caractère à la fois
    int fgetc(FILE *pointeurFichier);
        -> variable = fgetc(*pointeurFichier);
 
    • FGETS (lire une chaîne (une ligne jusqu'au premier \n) )
    char* fgets(char *chaine, int nbreDeCaractereALire, FILE *pointeurFichier);
        -> fgets(*chaine, TAILLE_MAX, *pointeurFichier);
 
 
 
    Ici le nom du pointeur du fichier sera fichier
 */

int main(int argc, const char * argv[]) {
    
    FILE *fichier = NULL;
    fichier = fopen("/Users/costa/desktop/C/lire-ecrire-fichiersC/lire-ecrire-fichiersC/test.txt", "r+"); // paramètre : nom du fichier, r+ : lecture et écriture (ou  w : écriture)
    
    // DECLARER LES VARIABLES DU FICHIER
        // Variable fprintf
    //int age = 0;
        // Variable fgetc
    //int lireCaractere = 0;
    char chaine[TAILLE_MAX] = "";
        // Variable fgets
    //int lireChaine = 0;
        // Variable fscanf
    int score[3] = {15, 20, 30};
    /* ========================================================== */
    //
        
    // TEST OUVERTURE DU FICHIER
    if (fichier != NULL) {
        printf("Fichier ouvert. \n\n");
    } else {
        //printf("Impossible d'ouvrir le fichier test.txt. \n \n");
        exit(1);
    }
    /* ========================================================== */
    //
    
    // ECRIRE UN CARACTERE
    /*if (fichier != NULL) {
        fputc('A', fichier);
    } else {
        printf("Le caractère n'a pas pu être écrit. Erreur dans le fichier. \n");
    }*/
    /* ========================================================== */
    //
    
    // ECRIRE UNE CHAINE
    /*if (fichier != NULL) {
        fputs("Salut les copains !\nCeci est un test de la fonction fputs qui consiste à écrire dans un fichier externe. \n \n", fichier);
    } else {
        printf("Le caractère n'a pas pu être écrit. Erreur dans le fichier. \n");
    }*/
    /* ========================================================== */
    //
    
    // AUTRE FONCTION D'ECRITURE
    /*if (fichier != NULL) {
        printf("Quel âge as-tu ? \n");
        scanf("%d", &age);
        // Écrire dans le fichier
        fprintf(fichier, "Je t'ai demandé ton âge dans la console et tu m'as répondu %d ans. \n\n", age);
    } else {
        printf("Le caractère n'a pas pu être écrit. Erreur dans le fichier. \n");
    }*/
    /* ========================================================== */
    //
    
    // LIRE UN CARACTERE (en boucle)
    /*if (fichier != NULL) {
        do {
            lireCaractere = fgetc(fichier);
            printf("%c", lireCaractere);
        } while (lireCaractere != EOF);
    } else {
        printf("Impossible d'ouvrir le fichier test.txt. \n \n");
    } printf("\n\n");*/
    /* ========================================================== */
    //
    
    // LIRE UNE CHAINE
    /*if (fichier != NULL) {
        fgets(chaine, TAILLE_MAX, fichier);
        printf("%s", chaine);
        printf("Taille du tableau : %c.", TAILLE_MAX);
    } else {
        printf("Impossible d'ouvrir le fichier test.txt. \n \n");
    } printf("\n\n");*/
    
    // Créer une boucle pour lire tout le fichier
    if (fichier != NULL) {
        while( fgets(chaine, TAILLE_MAX, fichier) != NULL ) {
            printf("%s", chaine);
        }
    } else {
        printf("Impossible d'ouvrir le fichier test.txt. \n \n");
    } printf("\n\n");
    /* ========================================================== */
    //
    
    // AUTRE FONCTION DE LECTURE
    if (fichier != NULL) {
        fscanf(fichier,"%d %d %d", &score[0], &score[1], &score[2]);
        printf("Les meilleurs scores sont : %d %d %d. \n", score[0], score[1], score[2]);
    }
    /* ========================================================== */
    //
    
    /* ========================================================== */
    //
    // Saut de ligne
    printf("\n");
    // Fermer le fichier
    fclose(fichier);
    // Fin de main
    return 0;
}
