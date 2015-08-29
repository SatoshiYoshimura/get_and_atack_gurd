//
//  RainBulletBase.cpp
//  GetAndAtackGurd
//
//  Created by A13952 on 2015/08/29.
//
//

#include "RainBulletBase.h"
using namespace rainbullet;


RainBulletBase::RainBulletBase() {}

RainBulletBase::~RainBulletBase() {}

RainBulletBase* RainBulletBase::create()
{
    RainBulletBase* pSprite = new RainBulletBase();
    
    if (pSprite->initWithSpriteFrameName("normal_bullet.jpg"))
    {
        pSprite->autorelease();
        
        pSprite->initOptions();
        
        pSprite->addEvents();
        
        return pSprite;
    }
    
    CC_SAFE_DELETE(pSprite);
    return NULL;
}

void RainBulletBase::initOptions()
{
    // do things here like setTag(), setPosition(), any custom logic.
}

void RainBulletBase::addEvents()
{
    auto listener = cocos2d::EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);
    
    listener->onTouchBegan = [&](cocos2d::Touch* touch, cocos2d::Event* event)
    {
        cocos2d::Vec2 p = touch->getLocation();
        cocos2d::Rect rect = this->getBoundingBox();
        
        if(rect.containsPoint(p))
        {
            return true; // to indicate that we have consumed it.
        }
        
        return false; // we did not consume this event, pass thru.
    };
    
    listener->onTouchEnded = [=](cocos2d::Touch* touch, cocos2d::Event* event)
    {
        RainBulletBase::touchEvent(touch);
    };
    
    cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(listener, 30);
}

void RainBulletBase::touchEvent(cocos2d::Touch* touch)
{
    CCLOG("touched RainBulletBase");
}