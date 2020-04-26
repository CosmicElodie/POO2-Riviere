/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Controller.h
*/

#ifndef POO2_RIVIERE_CONTROLLER_H
#define POO2_RIVIERE_CONTROLLER_H

#include "Containers/Bank.h"
#include "Containers/Boat.h"
#include "People/Family/Father.h"
#include "People/Family/Mother.h"
#include "People/Family/Daughter.h"
#include "People/Family/Son.h"
#include "People/Policeman.h"
#include "People/Robber.h"
#include <list>

class Controller {
private:
    int turn;
    Bank topBank, bottomBank;
    Boat boat;

    std::list<Person*> players;

public:
    /**
     * @brief Constructeur sans paramètre de la classe Controller
     */
    Controller();

    /**
     * Lance le menu de commandes possibles d'exécuter pour jouer.
     */
    void showMenu() const;

    /**
     * Permet d'afficher l'état du jeu.
     */
    void display() const;


    void nextTurn();

    /**
     * Permet de lancer le jeu.
     */
    void runProgram();

    /**
     * initialise les éléments nécessaire à la bonne marche du programme et affiche le menu de commandes.
     */
    void initProgram();
};

#endif //POO2_RIVIERE_CONTROLLER_H
