/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Policeman.h
*/

#include "Policeman.h"

 Policeman::Policeman(const char * name) : Person(name) {}

bool Policeman::canDrive() const {
     return true;
 }