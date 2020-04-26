/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Parent.h
*/

#ifndef POO2_RIVIERE_PARENT_H
#define POO2_RIVIERE_PARENT_H

#include "../Person.h"

class Parent : public Person {

private:

public:
    Parent(std::string& name) : Person(name) {}

    bool canDrive() const;
};


#endif //POO2_RIVIERE_PARENT_H
