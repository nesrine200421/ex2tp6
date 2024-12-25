#include "RobotChasseur.h"
#include <vector>
#include <iostream>

int main() {
    RobotChasseur optimus("Optimus", 2, 3, 25);
    optimus.bouger(33, 19);
    std::cout << "Informations d'Optimus après son déplacement :\n";
    optimus.afficherInfos();

    std::vector<Robot> robots = {
        Robot("Robot1", 30, 20, 15),
        Robot("Robot2", 50, 50, 10),
        Robot("Robot3", 34, 23, 10),
        Robot("Robot4", 5, 5, 8),
        Robot("Robot5", 36, 21, 12),
    };

    for (size_t i = 0; i < robots.size(); ++i) {
        robots[i].afficherInfos();
    }

    for (size_t i = 0; i < robots.size(); ++i) {
        if (optimus.detecterRobot(robots[i])) {
            optimus.attaquerRobot(robots[i]);
        }
    }
    std::cout << "\nÉtat final des robots ennemis :\n";
    for (size_t i = 0; i < robots.size(); ++i) {
        robots[i].afficherInfos();
    }

    return 0;
}
