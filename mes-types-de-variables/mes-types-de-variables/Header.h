//
//  Header.h
//  mes-types-de-variables
//
//  Created by Marie Costa on 15/06/2020.
//  Copyright © 2020 bl. All rights reserved.
//

#ifndef Header_h
#define Header_h

// DEFINIR UNE STRUCTURE
typedef struct NomVariable NomVariable;
struct NomVariable {
    int variable1;
    double variable2;
    long variable3;
    char variable4;
}; // ne pas oublier le ; à la fin

// CREER UN ALIAS (c'est-à-dire un "équivalent")
typedef struct Coordonnees Coordonnees;
struct Coordonnees {
    int x;
    int y;
};
// typedef : nom de l'alias
// struct Coordonnees : nom de la structure
// Coordonnees : nom de l'alias


// Structure avec tableau
typedef struct Personne Personne;
struct Personne {
    char nom[100];
    char prenom [100];
    char adresse [1000];
    
    int age;
    int genre; // Boolean : 1 garçon / 0 = fille
};

#endif /* Header_h */
