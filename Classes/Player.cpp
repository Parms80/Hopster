//
//  Player.cpp
//  ExpJam
//
//  Created by Perminder Suman on 01/12/2015.
//
//

#include "Player.h"


Player::Player(float positionX, float positionY, const string& filename)
{
    x = positionX;
    y = positionY;
    setSprite(filename);
}

Player::~Player()
{
    
}

void Player::update()
{
}

void Player::moveLeft()
{
    x -= 1.0f;
    sprite->setPosition(x,y);
}