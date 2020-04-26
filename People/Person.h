/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Person.h
*/

#ifndef POO2_RIVIERE_PERSON_H
#define POO2_RIVIERE_PERSON_H

#include <string>

class Person {
    friend bool operator ==(const Person & lhs, const Person & rhs) {
        return lhs.name == rhs.name;
    }

    friend bool operator !=(const Person& lhs, const Person& rhs) {
        return !(lhs == rhs);
    }

private:
    const std::string name;

public:
    bool canDrive();

    /**
     * @Brief Constructeur de la classe Person
     * @param name : le nom de la personne
     */
    explicit Person(const char * name) : name(name) {}

    /**
     * @Brief Getter
     * @return le nom de la personne
     */
    const std::string& getName() const;

    virtual bool canDrive() const = 0;
};


#endif //POO2_RIVIERE_PERSON_H
