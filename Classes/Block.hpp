//
//  Block.hpp
//  ExpJam
//
//  Created by Perminder Suman on 02/12/2015.
//
//

#ifndef Block_hpp
#define Block_hpp

#include "GameObject.h"

class Block : public GameObject
{
public:
    
    Block();
    Block(float positionX, float positionY, const string& filename);
    virtual ~Block();
    
    void update();
    
    
private:
    
};

#endif /* Block_hpp */
