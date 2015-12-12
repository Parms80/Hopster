//
//  Player.h
//  ExpJam
//
//  Created by Perminder Suman on 30/11/2015.
//
//

#ifndef Player_h
#define Player_h

#include "Block.hpp"

class Player : public Block
{
public:
    
    Player(float positionX, float positionY, const string& filename);
    virtual ~Player();
    
    void update();
    void moveLeft();
    
    
private:
    
};


#endif /* Player_h */
