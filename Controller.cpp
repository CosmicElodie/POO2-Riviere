/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Controller.h
*/

#include "Controller.h"
#include <iostream>

Controller::Controller() : topBank("Gauche"), bottomBank("Droite"), boat("Bateau", &topBank) {
    run();
}

void Controller::showMenu() const {
    std::cout << "p\t: afficher\n"
              << "e <nom> : embarquer <nom>\n"
              << "d <nom> : debarquer <nom>\n"
              << "m\t: deplacer bateau\n"
              << "r\t: reinitialiser\n"
              << "q\t: quitter\n"
              << "h\t: menu\n";
}

void Controller::run() {
    showMenu();
}