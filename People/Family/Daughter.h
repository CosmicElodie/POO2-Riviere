/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Daughter.h
*/

#ifndef POO2_RIVIERE_DAUGHTER_H
#define POO2_RIVIERE_DAUGHTER_H

#include "Child.h"
#include <string>


class Daughter : public Child {

public:
    Daughter(const char * name, const Person * mother, const Person * father);
};


#endif //POO2_RIVIERE_DAUGHTER_H
