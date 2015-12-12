//
//  Level.cpp
//  ExpJam
//
//  Created by Perminder Suman on 02/12/2015.
//
//

#include "Level.hpp"

Level::Level(MainScene* scene)
{
    setupLevel(scene);
}

Level::~Level()
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
        {
            delete(blocksArray[row][column]);
        }
    }
}

void Level::setupLevel(MainScene* scene)
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    Sprite* sprite = Sprite::create( "ButtonBlue.png" );
    float spriteWidth = sprite->boundingBox().size.width / 2;
    float spriteHeight = sprite->boundingBox().size.height / 2;
    
    float startX = visibleSize.width/2 - spriteWidth*((float)COLUMNS/2);
    
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
        {
            blocksArray[row][column] = new Block(startX + spriteWidth/2 + spriteWidth * column,
                                       visibleSize.height - spriteHeight/2 - spriteHeight * row,
                                       "ButtonBlue.png");
            scene->addChild(blocksArray[row][column]->sprite);
        }
    }
}

