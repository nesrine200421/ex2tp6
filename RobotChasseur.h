#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class RobotChasseur : public Robot {
public:
    RobotChasseur(const std::string& nom, int posX, int posY, int rayon);
    bool detecterRobot(const Robot& autre) const; 
    void attaquerRobot(Robot& autre);           
};

#endif
