//
//  main.c
//  conditions
//
//  Created by Marie Costa on 09/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    printf("Hello, World! \n \n");
    
    // CONDITIONS if else
        /*
        int nbre = 0;
        printf("Choisissez un chiffre entre 0 et 100 : \n \n");
        scanf("%d", &nbre);
        // Inférieur ou égal à 100 ET supérieur ou égal à 0
        if(nbre <= 100 && nbre >= 0) {
            printf("Merci ! \n \n");
        } else {
            printf("Ce chiffre n'est pas compris entre 0 et 100. \n \n");
        }
         */
    //
    
    // Autre exemple de condition
        /*
        int age = 0;
        printf("Quel âge avez-vous ? \n");
        scanf("%d", &age);
        // if : Ne doit pas être supérieur à 18 (mineur)
        if(!(age > 18)) {
            printf("Vous avez %d ans. Vous êtes mineur \n", age);
        } else {
            printf("Vous avez %d ans. Vous êtes majeur. \n", age);
        } */
    // =============================================================================
    // =============================================================================
    // =============================================================================
    
    // BOOLEAN
    // ========
        /*
        if (0) {
            printf("C'est vrai \n\n"); // Code wiil never be executed
        } else {
            printf("C'est faux \n\n");
        } // Si le test renvoie 1 la valeur est true. Si 0 le test renvoie false
        */
         
        // Autre test
            /*
            int age = 20;
            int majeur = 0;
            
            majeur = age >= 18;
            printf("Majeur vaut : %d \n", majeur); */
            // S'il est supérieur ou égal à 18 majeur vaut 1. 20 est plus grand que 18 donc majeur. Si inférieur ou égal vaut 0 puisque 20 n'est pas inférieur à 18
        //
    
        // Test boolean age utilisateur
            int age2 = 0;
            int majeur2 = 1;
            int mineur2 = 0;
            
            printf("Quel âge avez-vous ? \n ");
            scanf("%d", &age2);
            
            if (age2 >= 18) {
                printf("Boolean vaut %d. Vous êtes majeur. \n \n", majeur2);
            } else {
                printf("Boolean vaut %d. Vous êtes mineur. \n \n", mineur2);
            }
            
            printf("\n");
        // =============================================================================
        // =============================================================================
        // =============================================================================
    
    // SWITCH
        int cheese = 0;
        printf("Bonjour ! Combien de steak et de cheese voulez-vous dans votre burger ? Entre un et cinq. \n");
        scanf("%d", &cheese);
        
        switch (cheese) {
            case 1:
                printf("Voici un cheese. Il est petit celui-là... \n \n");
                break;
            case 2:
                printf("Voici un double cheese. Il est double ! \n \n");
                break;
            case 3:
                printf("Voici un triple cheese. Très bon choix pour un estomac normal ! \n \n");
                break;
            case 4:
                printf("Voici un quadruple cheese. Pour les estomacs affamés ! \n \n");
                break;
            case 5:
                printf("Voici un quintuple cheese. Il est gros celui-ci... Vous devez avoir très faim ! \n");
                break;
                
            default:
                printf("Pas de cheese? Vous êtes sûr(e) ? \n \n");
                break;
        }
        printf("\n \n");
        
        // Autre exemple
            int menuMcdo;
            printf("=== Menu mcdo === \n \n");
            printf("1. Big Mac \n");
            printf("2. Triple cheese \n");
            printf("3. 280 \n");
            printf("4. McWrap Poulet Bacon \n");
            printf("5. CBO \n");
            printf("Bonjour ! Avez-vous fait votre choix ? \n");
            scanf("%d", &menuMcdo);
            
            switch (menuMcdo) {
                case 1:
                    printf("Un Big Mac? Très bien je note. \n");
                    break;
                case 2:
                    printf("Un Triple cheese? Parfait je note. \n");
                break;
                case 3:
                    printf("Un 280 ? Allez je note. \n");
                    break;
                case 4:
                    printf("Un McWrap Poulet Bacon. \n");
                    break;
                case 5:
                    printf("Un CBO. Voilà c'est noté. \n");
                    break;
                
                    
                default:
                    printf("Vous ne voulez rien ? \n");
                    break;
            }
        // =============================================================================
        // =============================================================================
        // =============================================================================    
    
    
    printf("\n");
    return 0;
}
