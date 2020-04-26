/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Robber.h
*/

#include "Robber.h"

Robber::Robber(const std::string& name) : Person(name) {}

bool Robber::canDrive() const {
    return false;
}