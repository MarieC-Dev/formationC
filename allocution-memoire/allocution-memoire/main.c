//
//  main.c
//  allocution-memoire
//
//  Created by Marie Costa on 21/06/2020.
//  Copyright © 2020 bl. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 PROTOTYPE
 =========
 
 • MALLOC : allocution de mémoire
 void* malloc(size_t nombreOctetsNecessaires);
 
 • FREE : libérer de la mémoire
 void free(void *pointeur);
 
 */

int main(int argc, const char * argv[]) {
    
    /*
    int *memoireAllouee = NULL; // On crée un pointeur sur int
    memoireAllouee = malloc(sizeof(int));

    if(memoireAllouee == NULL) {
        printf("L'allocution n'a pas marché. \n\n");
        exit(0); // Arrêt immédiat du programme
    } else {
        printf("L'allocution a marché. Adresse %p \n\n", memoireAllouee);
    }
    
    // Libération de la mémoire
    free(memoireAllouee);
    */
    
    /*
    int *memoireAllouee = NULL;
    
    memoireAllouee = malloc(sizeof(int));
    if (memoireAllouee == NULL) {
        printf("L'allocution n'a pas marché. \n\n");
        exit(0);
    } else {
        printf("L'allocution a marché. \n\n");
    }
    
    printf("Quel âge avez-vous ?\n");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans. \n\n", *memoireAllouee);
    
    printf("memoireAllouee = %lu octets. \n\n", sizeof(memoireAllouee));
    
    free(memoireAllouee); // Libération de la mémoire
     */
    
    // Allocution dynamique d'un tableau :
    int nbreAmis = 0, i = 0;
    int *ageAmis = NULL;
    
    printf("Combien avez-vous d'amis ? \n");
    scanf("%d", &nbreAmis);
    
    if (nbreAmis > 0) {
        ageAmis = malloc(nbreAmis * sizeof(int)); // Allouer la mémoire
        
        if (ageAmis == NULL) {
            printf("Le programme ne marche pas.\n");
            exit(0);
        }
        
        for (i = 0; i < nbreAmis; i++) {
            printf("Quel âge a ton ami(e) numéro %d ? \n", i + 1);
            scanf("%d", &ageAmis[i]);
            printf("Ton ami(e) a %d ans. \n\n", *ageAmis);
        }
        
        printf("\n\nVos amis ont les âges suivants : \n");
        for (i = 0; i < nbreAmis; i++) {
            printf("%d ans \n", ageAmis[i]);
        }
        
        free(ageAmis);
    }
    
    
    printf("\n\n");
    return 0;
}
