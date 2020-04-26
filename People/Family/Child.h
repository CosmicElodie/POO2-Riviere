/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Child.h
*/

#ifndef POO2_RIVIERE_CHILD_H
#define POO2_RIVIERE_CHILD_H

#include "../Person.h"

class Child : public Person{
private :
    const Person * mother;
    const Person * father;

public :
    Child(std::string& name, const Person* mother, const Person* father);

    bool canDrive() const;
};


#endif //POO2_RIVIERE_CHILD_H
