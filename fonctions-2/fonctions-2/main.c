//
//  main.c
//  fonctions-2
//
//  Created by Marie Costa on 11/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Fonction : convertir les francs en euros
double conversionFrEu(double euros) {
    double francs = 0;
    
    francs = 6.55957 * euros;
    return francs;
}

// Fonction : convertir les euros en francs
double conversionEuFr(double francs) {
    double euros = 0;
    
    euros = 1.07 * francs;
    return euros;
}

// Fonction qui ne renvoie rien (void ou vide)
void punition(int nbreDeLignes) {
    // Déclarer la variable
    int i;
    // Définir la boucle
    for (i = 0; i < nbreDeLignes; i++) {
        printf("Je ne dois pas recopier mon voisin. \n");
    }
}

// Fonction aire d'un rectangle
double aireRect(double width, double height) {
    double aire = 0;

    printf("L'aire de votre rectangle mesure %f. \n \n \n", aire = width * height);
    return aire;
    //return width * height;
}

// Fonction sans entrée
int menu() {
    int choix = 0;
    
    while(choix < 1 || choix > 4) {
        printf("Menu : \n");
        printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
        printf("2 : Concombres sucres a la sauce de myrtilles enrobee de chocolat\n");
        printf("3 : Escalope de kangourou saignante et sa gelee aux fraises poivree\n");
        printf("4 : La surprise du Chef (j'en salive d'avance...)\n");
        
        printf("Votre choix ? \n");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                printf("Vous avez choisi le poulet. \n");
                break;
            case 2:
                printf("Vous avez choisi les concombres. \n");
                break;
            case 3:
                printf("Vous avez choisi l'escalope de kangourou. Beurk \n");
                break;
            case 4:
                printf("Vous avez choisi la surprise du chef. \n");
                break;
            default:
                printf("Ce choix n'est pas sur la carte... \n");
                break;
        }
    }
    return choix;
}



// MAIN
int main(int argc, const char * argv[]) {
    // Appel fonction : De francs à euros
    /*printf("1 euros = %f. \n", conversionFrEu(1));
    printf("10 euros = %f. \n",conversionFrEu(10));
    printf("20 euros = %f. \n", conversionFrEu(20));
    printf("50 euros = %f. \n", conversionFrEu(50));
    printf("100 euros = %f. \n", conversionFrEu(100));
    printf("200 euros = %f. \n", conversionFrEu(200));
    printf("\n \n"); */
    
    // Appel fonction : De euros à francs
    /*
    double prixEuros = 0;
    printf("Entrez un chiffre en euros. \n");
    scanf("%lf", &prixEuros);
    printf("Votre prix est convertit en francs et vaut : %f €. \n \n \n", conversionEuFr(prixEuros)); */

    
    // Appel de la fonction punition
    //punition(3);
    
    // Appel de la fonction aire
    double largeur = 0, hauteur = 0;
    printf("Entrez la largeur de votre rectangle (en cm) : \n");
    scanf("%lf", &largeur);
    printf("Entrez la hauteur de votre rectangle (en cm) : \n");
    scanf("%lf", &hauteur);
    
    aireRect(largeur, hauteur);
    
    // Appel de la fonction menu
    menu();

    
    
    
    printf("\n");
    return 0;
}
