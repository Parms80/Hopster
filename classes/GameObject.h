//
//  GameObject.h
//  ExpJam
//
//  Created by Perminder Suman on 30/11/2015.
//
//

#ifndef GameObject_h
#define GameObject_h

#include "cocos2d.h"
using namespace std;
using namespace cocos2d;

class GameObject
{
public:
    
    Sprite* sprite;
    
    GameObject();
    GameObject(float positionX, float positionY, const string& filename);
    virtual ~GameObject();
    // called once per frame
    void update();
    float getXPosition();
    float getYPosition();
//    void moveLeft();
    
    
protected:
    
    float x,y;
    void setSprite(const string& filename);
    
private:
    
    
};


#endif /* GameObject_h */
