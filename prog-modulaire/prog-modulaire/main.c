//
//  main.c
//  prog-modulaire
//
//  Created by Marie Costa on 11/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
// PROGRAMMATION MODULAIRE
// Il faut savoir que dans la ligne du prototype il est facultatif d'écrire les noms de variables en entrée. L'odinateur n'a besoin de connaître que les types de variables.
// Ex : double aireRect(double, double);

// La ligne suivante est le prototype de la fonction aireRectangle (on peut maintenant placer la fonction dans n'importe quel ordre) :
double aireRectangle(double largeur, double hauteur);

// La fonction main est la seule qui n'en nécessite pas parce que l'ordinateur la connait
int main(int argc, char *argv[])
{
    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

    return 0;
}

// Notre fonction aireRectangle peut maintenant être mise n'importe où dans le code source :
double aireRectangle(double largeur, double hauteur){
    return largeur * hauteur;
}
