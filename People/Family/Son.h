/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Son.h
*/

#ifndef POO2_RIVIERE_SON_H
#define POO2_RIVIERE_SON_H

#include "Child.h"

class Son : public Child {

public:
    Son(const char * name, const Person * mother, const Person * father);
};


#endif //POO2_RIVIERE_SON_H
