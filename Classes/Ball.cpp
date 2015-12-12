//
//  Ball.cpp
//  ExpJam
//
//  Created by Perminder Suman on 02/12/2015.
//
//

#include "Ball.hpp"

Ball::Ball(float positionX, float positionY, const string& filename)
{
    x = positionX;
    y = positionY;
    setSprite(filename);
    setVelocity(3.0f, 3.0f);
    sprite->setScale(0.5f);
    radius = sprite->getBoundingBox().size.width/2;
}

Ball::~Ball()
{
    
}

void Ball::setVelocity(float x, float y)
{
    velocityX = x;
    velocityY = y;
}

void Ball::update()
{
    updateBallPosition();
    checkIfBallReachedScreenBounds();
    sprite->setPosition(x,y);
}

void Ball::updateBallPosition()
{
    x += velocityX;
    y += velocityY;
}

void Ball::checkIfBallReachedScreenBounds()
{
    // get visible size of window
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    if (x+radius >= visibleSize.width || x-radius <= 0)
    {
        velocityX = -velocityX;
        x += velocityX;
    }
    if (y+radius >= visibleSize.height || y-radius <= 0)
    {
        velocityY = -velocityY;
        y += velocityY;
    }
    
}