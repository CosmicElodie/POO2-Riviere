/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Boat.h
*/

#ifndef POO2_RIVIERE_BOAT_H
#define POO2_RIVIERE_BOAT_H

#include "Bank.h"
class Boat : public Container {
    friend std::ostream& operator<< (std::ostream& os, const Boat& boat);
private:
    Bank* bank;

public:
    explicit Boat(const std::string& name, Bank* side);

    void addPerson(Person* person);

    void removePerson(Person* person);

    void move(Bank* side);


};


#endif //POO2_RIVIERE_BOAT_H
