/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Policeman.h
*/

#ifndef POO2_RIVIERE_POLICEMAN_H
#define POO2_RIVIERE_POLICEMAN_H


#include "Person.h"

class Policeman : public Person{
private:

public:
    /**
     * @brief Constructeur de la classe Policeman
     * @param name : le nom du policier
     */
    explicit Policeman(const std::string& name);

    bool canDrive() const;

};


#endif //POO2_RIVIERE_POLICEMAN_H
