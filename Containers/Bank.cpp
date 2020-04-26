/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Bank.h
*/

#include "Bank.h"

#include <iostream>

Bank::Bank(const std::string& name) : Container(name) {}

std::ostream& operator<< (std::ostream& os, const Bank& bank) {
    os << bank.getName() << ": ";
    for (auto i = bank.people.begin(); i != bank.people.end(); ++i ) {
        os << (*i)->getName() << " ";
    }
    return os;
}

void Bank::addPerson(Person *person) {
    people.push_back(person);
}

void Bank::removePerson(Person* person) {
    if(people.size() > 1)
    {
        people.remove(person);
    } else{
        throw "Il n'y a personne à enlever de ce cote !";
    }

}