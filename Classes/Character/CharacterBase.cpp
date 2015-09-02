//
//  CharacterBase.cpp
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#include "CharacterBase.h"
USING_NS_CC;
using namespace character;

bool CharacterBase::init()
{
    if( !Sprite::init() )
    {
        return false;
    }
    this->scheduleUpdate();
    return true;
}

void CharacterBase::onEnter()
{
    Sprite::onEnter();
}

void CharacterBase::update(float delta)
{
}

/**
 *  managerから自身を削除する
 *
 *  @return 削除できたかどうか
 */
bool CharacterBase::elase()
{
    //TODO 削除処理
    return true;
}
