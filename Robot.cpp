#include "Robot.h"
#include <iostream>
#include <cmath>
Robot::Robot(const std::string& nom, int posX, int posY, int rayon)
    : nom(nom), positionX(posX), positionY(posY), rayonDetection(rayon), estDetruit(false) {}
void Robot::bouger(int deltaX, int deltaY) {
    positionX += deltaX;
    positionY += deltaY;
}
void Robot::afficherInfos() const {
    std::cout << "Nom: " << nom << "\nPosition: (" << positionX << ", " << positionY << ")\n"
              << "Rayon de détection: " << rayonDetection << "\nStatut: "
              << (estDetruit ? "Détruit" : "Fonctionnel") << "\n\n";
}
bool Robot::enVie() const {
    return !estDetruit;
}
int Robot::getPositionX() const {
    return positionX;
}

int Robot::getPositionY() const {
    return positionY;
}
