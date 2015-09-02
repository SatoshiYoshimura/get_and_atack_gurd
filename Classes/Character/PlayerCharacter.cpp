//
//  PlayerCharacter.cpp
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#include "PlayerCharacter.h"
//
//  PlayerCharacter.cpp
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#include "PlayerCharacter.h"
USING_NS_CC;
using namespace character;

bool PlayerCharacter::init()
{
    if( !Sprite::init() )
    {
        return false;
    }
    this->scheduleUpdate();
    return true;
}

void PlayerCharacter::onEnter()
{
    Sprite::onEnter();
    setTexture("player.png");
}

void PlayerCharacter::update(float delta)
{
}

/**
 *  managerから自身を削除する
 *
 *  @return 削除できたかどうか
 */
bool PlayerCharacter::elase()
{
    //TODO 削除処理
    return true;
}
