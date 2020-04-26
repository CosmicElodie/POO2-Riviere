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

class Controller {
private:
    int turn;
    Bank topBank, bottomBank;
    Boat boat;
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
    void run();
};

#endif //POO2_RIVIERE_CONTROLLER_H
