/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Father.h
*/

#ifndef POO2_RIVIERE_FATHER_H
#define POO2_RIVIERE_FATHER_H

#include "Parent.h"

#include <string>

class Father: public Parent {

public:
    Father(std::string& name) : Parent(name) {}
};


#endif //POO2_RIVIERE_FATHER_H
