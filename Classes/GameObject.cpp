//
//  GameObject.cpp
//  ExpJam
//
//  Created by Perminder Suman on 01/12/2015.
//
//

#include <stdio.h>
#include "GameObject.h"


GameObject::GameObject()
{    
}

GameObject::GameObject(float positionX, float positionY, const string& filename)
{
    x = positionX;
    y = positionY;
    setSprite(filename);
}

GameObject::~GameObject()
{
    
}

void GameObject::setSprite(const string& filename)
{
    sprite = Sprite::create( filename );
    sprite->setPosition(x,y);
}

void GameObject::update()
{
}

float GameObject::getXPosition()
{
    return x;
}

float GameObject::getYPosition()
{
    return y;
}

//void GameObject::moveLeft()
//{
//    x -= 1.0f;
//    sprite->setPosition(x,y);
//}