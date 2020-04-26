/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Child.h
*/

#include "Child.h"

Child::Child(const char * name, const Person * mother, const Person* father) :
Person(name), mother(mother), father(father) {}

bool Child::canDrive() const {
    return false;
}