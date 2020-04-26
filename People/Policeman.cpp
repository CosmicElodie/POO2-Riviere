/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Policeman.h
*/

#include "Policeman.h"

 Policeman::Policeman(const std::string& name) : Person(name) {}

bool Policeman::canDrive() const {
     return true;
 }