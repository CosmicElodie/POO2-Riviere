/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Container.h
*/

#ifndef POO2_RIVIERE_CONTAINER_H
#define POO2_RIVIERE_CONTAINER_H

#include <list>
#include <string>

#include "../People/Person.h"

class Container {
private:
    std::string name;

protected:
    std::list<Person*> people;

public:
    /**
     * @brief Constructeur de la classe Container
     * @param name : le nom du container
     */
    explicit Container(const std::string& name);

    const std::string& getName() const;

    /**
     * Permet d'ajouter une personne dans le container
     * @param person : la personne à ajouter
     */
    virtual void addPerson(Person* person) = 0;

    /**
     * Permet de supprimer une personne du container
     * @param person : la personne à supprimer
     */
    virtual void removePerson(Person* person) = 0;
};


#endif //POO2_RIVIERE_CONTAINER_H
