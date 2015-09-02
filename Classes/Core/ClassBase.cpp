//
//  ClassBase.cpp
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#include "ClassBase.h"
USING_NS_CC;
using namespace core;

bool ClassBase::init()
{
    if( !Sprite::init() )
    {
        return false;
    }
    this->scheduleUpdate();
    return true;
}

void ClassBase::onEnter()
{
    Sprite::onEnter();
}

void ClassBase::update(float delta)
{
}

/**
 *  managerから自身を削除する
 *
 *  @return 削除できたかどうか
 */
bool ClassBase::elase()
{
    //TODO 削除処理
    return true;
}
