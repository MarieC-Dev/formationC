//
//  main.c
//  mes-types-de-variables
//
//  Created by Marie Costa on 15/06/2020.
//  Copyright © 2020 bl. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Header.h" // => DEFINIR DES STRUCTURES
#include "enumeration.h" // => DEFINIR DES STRUCTURES

void initialiserCoordonnees(Coordonnees *fonction);

int main(int argc, const char * argv[]) {
    // Création d'une variable "point" de type Coordonnees
    // struct Personne fiche;// struct-Type-variable;
    /*
    printf("Rensignez votre nom puis votre prénom : \n");
    scanf("%s \n", fiche.nom);
    scanf("%s", fiche.prenom);
    printf("\nVotre âge : \n");
    scanf("%d", &fiche.age);
    printf("\nLieu de résidence : \n");
    scanf("%s", fiche.adresse);
    printf("\nInformation retenu : \n %s %s \n", fiche.prenom, fiche.nom);
    printf("%d ans \n", fiche.age);
    printf("%s \n \n", fiche.adresse); */
    /*
    Personne joueurs[2];
    char i;
    for (i = 1; i < 3; i++) {
        printf("JOUEURS %d \n", i);
        printf("• Nom de famille : \n");
        scanf("%s", joueurs[i].nom);
        printf("• Prénom : \n");
        scanf("%s", joueurs[i].prenom);
        printf("=> Le joueur s'appelle %s %s \n \n", joueurs[i].prenom, joueurs[i].nom);
    } */
    //
    
    // Pointeur de structure (comme un int, un double, ...)
    //Coordonnees *point1 = NULL, *point2 = NULL;
    //
    
    // Envoie d'une structure à une fonction
    Coordonnees fonctionPoint;
    Coordonnees monPoint;
    Coordonnees *pointeur = &monPoint;
    
    monPoint.x = 10; // .x : pour variable
    pointeur->x = 10; // ->x : pour pointeur
    
    initialiserCoordonnees(&fonctionPoint);
    
    // Enumération
    Volume musique = MOYEN;
    
    if (musique == FAIBLE) {
        printf("Le voulume est FAIBLE. \n ");
    } else if (musique == MOYEN) {
        printf("Le volume est MOYEN");
    } else {
        printf("Le volume est FORT");
    }
    
    
    return 0;
}

// FONCTION : mettre tous les éléments de la structure à 0
void initialiserCoordonnees(Coordonnees *point) {
    // Méthode (raccourci très utilisé) ne marchant que sur des variables de structure
    point->x = 0;
    point->y = 0;
    // Ne pas oublier les () pour tout englober. Le point de séparation s'applique sur le mot point et non sur *point en entier.
    /*(*point).x = 0;
    (*point).y = 0;*/
    printf("Adresse de \"point\" : %p \n \n", &point);
}
