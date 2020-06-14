//
//  main.c
//  chaine-de-caractere
//
//  Created by Marie Costa on 14/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    // Traduction lettre <=> chiffre (table ASCII 'aski")
    char lettreA = 'A';
    char lettreB = 'B';
    char lettreBb = 'b';
    char lettreZ = 'Z';
    // Afficher la valeur du caractère
    printf("La lettre correspond au chiffre : %d. \n", lettreA);
    printf("La lettre correspond au chiffre : %d. \n", lettreB);
    printf("La lettre correspond au chiffre : %d. \n", lettreBb);
    printf("La lettre correspond au chiffre : %d. \n \n", lettreZ);
    // Afficher le caractère
    printf("Afficher le caractère %c \n \n", lettreA);
    //
    
    // Créer un tableau et insérer les caractères
    char chaine[6] = {'S','a','l','u','t', '\0'}, i; // \0 = caractère de fin
    printf("Afficher les lettre une par une : \n");
    for(i = 0; i < 6; i++) {
        printf("%c", chaine[i]); // %c : char, chaine[i] / %s : string, chaine (et pas besoin de boucle)
    }
    //
    
    // Initialiser une chaîne de caractère dans un tableau (pour ne pas répéter les lettres une par une dans les cases d'un tableau)
    char string[] = "Bonjour"; // Réservé à l'initialisation donc non modifiable
    printf("\n\nAfficher la chaine de caractère : %s. \n\n", string);
    // Récupération d'une chaîne avec scanf
    /*char prenom[30];
    long longueurPrenom = 0;
    
    printf("Comment tu t'appelles ?\n");
    scanf("%s", prenom);
    printf("Salut %s ! \n ", prenom);
    
    longueurPrenom = strlen(prenom);

    printf("Le prénom %s fait %ld caractères de long. \n \n", prenom, longueurPrenom); */
    //
    
    // Copier une chaine dans une autre : fonction strcpy
    char stringCopy[] = "Texte", paste[100] = {0}; // On crée une chaine "stringCopy" qui contient du texte et une copie (vide)
    strcpy(paste, stringCopy); // Copier stringCopy dans copy
    
    printf("La chaine vaut %s \n", stringCopy);
    printf("La copie vaut %s \n", paste);
    // char* strcpy(char* copieDeLaChaine, const char* chaineACopier);
    //
    
    // Concaténer deux chaines : fonction strcat
    char chaine1[100] = "Salut ", chaine2[] = "MacBookPro"; // chaine1 doit être assez grande pour accueillir le contenu de chaine2 en plus
    strcat(chaine1, chaine2); // Concaténation
    printf("La chaine 1 vaut : %s\n", chaine1);
    printf("La chaine 2 vaut : %s\n", chaine2);
    printf("\n");
    // char* strcat(char* chaine1, const char* chaine2);
    //
    
    // Comparer 2 chaines : fonction strcmp
    char compare1[] = "Le test ", compare2[] = "du comparateur C.";
    
    if (strcmp(compare1, compare2) == 0) {
        printf("Les chaines sont identiques. \n \n");
    } else {
        printf("Les chaines ne sont pas identique.\n \n");
    }
    // int strcmp(const char* chaine1, const char* chaine2);
    //
    
    // Rechercher un caractère : fonction strchr (chaine : la où la recherche sera faite / caractSearch : caractère à rechercher)
    char search[] = "Test du caractère à recherche", *suiteSearch = NULL;
        // suiteSearch permet de repérer un caractère dans une phrase et de dire la fin de la phrase. Pointe sur le premier caractère 'c'
    suiteSearch = strchr(search, 'c');
    
    if(suiteSearch != NULL) {
        // Si on a trouvé quelque chose
        printf("Voici la fin de la chaine a partir du c : %s\n \n", suiteSearch);
    }
    // Variante strrchr : cherche la dernière recherché dans la phrase (ex : dernier c)
    // char* strchr(const char* chaine, int caractereARechercher);
    //
    
    // Premier caractère de la liste : fonction strpbrk
    // char* strpbrk(const char* chaine, const char* lettresARechercher);
    //
    
    // Écrire dans une chaine : fonction sprintf
    char chaineAge[100];
    int age = 15;
    // "Tu as 15 ans !"
    sprintf(chaineAge, "Tu as %d ans !", age);
    
    printf("%s", chaineAge);
    
    // S'utilise de la même manière que printf (sauf qu'il faut donner en premier paramètre le pointeur
    //
    
    printf("\n \n");
    return 0;
}
