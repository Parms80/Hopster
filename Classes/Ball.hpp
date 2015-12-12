//
//  Ball.hpp
//  ExpJam
//
//  Created by Perminder Suman on 02/12/2015.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>
#include "GameObject.h"

class Ball : public GameObject
{
public:
    
    Ball(float positionX, float positionY, const string& filename);
    virtual ~Ball();
    
    void update();
    
    
private:
    
    float velocityX;
    float velocityY;
    float radius;
    
    void setVelocity(float x, float y);
    void updateBallPosition();
    void checkIfBallReachedScreenBounds();
    
};
#endif /* Ball_hpp */
