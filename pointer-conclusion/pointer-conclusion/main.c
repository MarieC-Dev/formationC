//
//  main.c
//  pointer-conclusion
//
//  Created by Marie Costa on 13/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// EXEMPLE DE RESOLUTION DE PROBLEME POINTEUR (VOIR COURS)

// PROTOTYPE, FONCTION, VARIABLE, POINTEUR (ne foncitonne pas)
/*
void decoupeMinutes(int heures, int minutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    decoupeMinutes(heures, minutes);

    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int heures, int minutes)
{
    heures = minutes / 60;  // 90 / 60 = 1
    minutes = minutes % 60; // 90 % 60 = 30
}
*/
//
//
//

// PROTOTYPE, FONCTION, VARIABLE, POINTEUR (fonctionne)
void cutMinutes(int *pointeurH, int *pointeurM);

int main(int argc, char *argv[]) {
    
    int heures = 0, minutes = 0;
    printf("Entrez un chiffre pour le convertir en durée \n");
    scanf("%d", &minutes);
    
    // Envoyer l'adresse des heures et des minutes (var déclarées ci-dessus)
    cutMinutes(&heures, &minutes);
    
    // Les valeurs (fonction) ont été modifiées
    printf("%d heures et %d minutes. \n \n", heures, minutes);
    
    return 0;
}

void cutMinutes(int *pointeurH, int *pointeurM) {
    *pointeurH = *pointeurM / 60;
    *pointeurM = *pointeurM % 60;
}
