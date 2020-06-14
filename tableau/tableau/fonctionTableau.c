//
//  fonctionTableau.c
//  tableau
//
//  Created by Marie Costa on 14/06/2020.
//  Copyright © 2020 Marie Costa. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// PROTOTYPE
void display(int *array, int size);

int main(int argc, const char * argv[]) {
    
    int tableauFonction[4] = {2, 4, 6, 8};
    // Afficher le contenu
    display(tableauFonction, 4);
    
    printf("\n");
    return 0;
}

void display(int *array, int size) {
    int o;
    
    for(o = 0; o < 4; o++) {
        printf("Afficher le tableau : %d \n", array[o]);
    }
}
