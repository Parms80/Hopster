//
//  Level.hpp
//  ExpJam
//
//  Created by Perminder Suman on 02/12/2015.
//
//

#ifndef Level_hpp
#define Level_hpp

#include "Block.hpp"
#include "MainScene.h"

class Level
{
public:
    
    Block* blocksArray[5][5];
    
    Level(MainScene*);
    virtual ~Level();
    
    
private:
    
    const int ROWS = 5;
    const int COLUMNS = 4;
    void setupLevel(MainScene*);
};

#endif /* Level_hpp */
