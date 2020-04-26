/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Child.h
*/

#ifndef POO2_RIVIERE_CHILD_H
#define POO2_RIVIERE_CHILD_H

#include "Mother.h"
#include "Father.h"

class Child : public Person{
private :
    const Person * mother;
    const Person * father;

public :
    Child(const char * name, const Person * mother, const Person * father);

    bool canDrive() const;
};


#endif //POO2_RIVIERE_CHILD_H
