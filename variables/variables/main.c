//
//  main.c
//  variables
//
//  Created by Marie Costa on 03/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World! \n \n");
    
    // Déclarer une variable
    int nombreDeVie = 3;
    // Condition (autre chapitre)
    /*if(nombreDeVie < 5) {
        printf("Inférieur à 5. \n");
    } else {
        printf("Supérieur à 5. \n");
    }*/
    
    // Affichier le résultat dans la console
    int nbreDeChocolat = 12;
    printf("Il reste %d chocolats. \n", nbreDeChocolat);
    // Afficher plusieurs variables dans un même printf
    printf("Il reste %d chocolats et %d points de vie. \n \n", nbreDeChocolat, nombreDeVie);
    
    // Déclarer une constante (lui donner une valeur obligatoirement après sa déclaration comme ci-dessous sinon on ne peut plus changer sa valeur)
        // Écrire exlusivement les constantes en majuscule (pas obligatoire, c'est par convention)
    //const int nbreDeMouchoir = 8;
    
    // Demander à l'utilisateur d'entrer quelque chose dans la console
    int age = 0; // initialisation de la variable à 0
    printf("Quel age as-tu ? \n");
    scanf("%d", &age); // On demande d'entrer l'age avec scanf
    printf("Tu as %d ans. \n", age);
    
    printf("\n");
    return 0;
}
