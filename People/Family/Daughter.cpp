/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Daughter.h
*/

#include "Daughter.h"

Daughter::Daughter(std::string& name, const Person & mother, const Person & father) : Child(name, &mother, &father) {}