/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Boat.h
*/

#include "Boat.h"

#include <iostream>

std::ostream& operator<< (std::ostream& os, const Boat& boat) {
    os << boat.getName() << ": < ";
    for (auto i = boat.people.begin(); i != boat.people.end(); ++i ) {
        os << (*i)->getName() << " ";
    }
    os << ">";
    return os;
}

Boat::Boat(const std::string& name, Bank* side) : Container(name), bank(side) {}

void Boat::addPerson(Person* person) {
    if (people.size() > 1) {
        std::cout << "Le bateau est plein." << std::endl;
    } else {
        people.push_back(person);
    }
}

void Boat::removePerson(Person* person) {
    people.remove(person);
}

void Boat::move(Bank* side) {
    bank = side;
}