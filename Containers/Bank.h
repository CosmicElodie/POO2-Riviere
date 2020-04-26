/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Bank.h
*/

#ifndef POO2_RIVIERE_BANK_H
#define POO2_RIVIERE_BANK_H

#include "Container.h"

class Bank : public Container {
    friend std::ostream& operator<< (std::ostream& os, const Bank& bank);

private:
    std::string name;

public:
    explicit Bank(const std::string& name);

    void removePerson(Person* person);
    void addPerson(Person* person);

};


#endif //POO2_RIVIERE_BANK_H
