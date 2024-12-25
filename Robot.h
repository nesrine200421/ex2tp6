#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
protected:
    std::string nom; 
    int positionX, positionY; 
    int rayonDetection;      
    bool estDetruit;         
public:
    Robot(const std::string& nom, int posX, int posY, int rayon);
    void bouger(int deltaX, int deltaY); 
    void afficherInfos() const;        
    bool enVie() const;                
    int getPositionX() const;
    int getPositionY() const;
};

#endif
