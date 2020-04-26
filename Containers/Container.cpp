/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Container.h
*/

#include "Container.h"

Container::Container(const std::string& name) : name(name) {}

const std::string& Container::getName() const {
    return name;
}
