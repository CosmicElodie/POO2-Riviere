/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Robber.h
*/

#ifndef POO2_RIVIERE_ROBBER_H
#define POO2_RIVIERE_ROBBER_H


#include "Person.h"

class Robber : public Person {
private:

public:
    /**
     * @brief Constructeur de la classe Robber
     * @param name : le nom du voleur
     */
    explicit Robber(const char * name);

    /**
     * Permet de savoir si le voleur peut conduire le bateau
     * @return false, car il ne peut pas conduire.
     */
    bool canDrive() const;
};


#endif //POO2_RIVIERE_ROBBER_H
