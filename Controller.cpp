/**
* Laboratoire   :
* Date          :
* Élèves        : Lagier Elodie
* Fichier       : Controller.h
*/

#include "Controller.h"
#include "People/Policeman.h"
#include "People/Robber.h"
#include "People/Family/Son.h"
#include "People/Family/Daughter.h"
#include <iostream>

using namespace std;

Controller::Controller() : topBank("Gauche"),
bottomBank("Droite"),
boat("Bateau", &topBank)
{
    runProgram();
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

void Controller::runProgram() {
    //On initialise la liste de personnes
    auto const pere = new Father("Pere");
    auto const mere = new Mother("Mere");

    auto const paul = new Son("Paul", mere, pere);
    auto const pierre = new Son("Pierre", mere, pere);

    auto const julie = new Daughter("Julie", mere, pere);
    auto const jeanne = new Daughter("Jeanne", mere, pere);

    auto const policier = new Policeman("Police");
    auto const robber = new Robber("Voleur");
    
    players = {pere, mere, paul, pierre, julie, jeanne, robber};

    //On place les personnes sur la rive gauche.
    for (auto it = players.begin(); it != players.end(); ++it) {
        topBank.addPerson(*it);
    }

    //On initialise le programme
    initProgram();
    std::cout << turn << ">";


}

void Controller::initProgram() {
    showMenu();
    turn = 0;
}

void Controller::nextTurn() {
    ++turn;
    display();
}

void Controller::display() const {

}