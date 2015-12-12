//
//  Block.cpp
//  ExpJam
//
//  Created by Perminder Suman on 02/12/2015.
//
//

#include "Block.hpp"

Block::Block()
{
}

Block::Block(float positionX, float positionY, const string& filename)
{
    x = positionX;
    y = positionY;
    setSprite(filename);
    sprite->setScale(0.5f);
}

Block::~Block()
{
}

void Block::update()
{
}