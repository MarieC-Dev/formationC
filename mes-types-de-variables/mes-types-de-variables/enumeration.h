//
//  enumeration.h
//  mes-types-de-variables
//
//  Created by Marie Costa on 17/06/2020.
//  Copyright © 2020 bl. All rights reserved.
//

#ifndef enumeration_h
#define enumeration_h

// ENUMERATION (ne contient pas de "sous-variable")
typedef enum Volume Volume;
enum Volume {
    // Liste de valeurs que peut prendre une variable
    MUET = 0, FAIBLE = 10, MOYEN = 50, FORT = 100
}; // La variable ne peut seulement prendre une des valeurs que vous prédéfinissez


#endif /* enumeration_h */
