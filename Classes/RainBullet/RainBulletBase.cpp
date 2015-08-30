//
//  RainBulletBase.cpp
//  GetAndAtackGurd
//
//  Created by A13952 on 2015/08/29.
//
//

#include "RainBulletBase.h"

using namespace rainbullet;
USING_NS_CC;

bool RainBulletBase::init()
{
    if( !Sprite::init() )
    {
        return false;
    }
    this->scheduleUpdate();
    return true;
}
void RainBulletBase::onEnter()
{
    Sprite::onEnter();
    setTexture("normal_bullet.png");
}

/**
 *  落下するメソッド TODO 色んなパターン対処
 */
void RainBulletBase::fall()
{
    //自分のpos取得
    Vec2 myPos = this->getPosition();
    //目的座標の生成
    Vec2 *targetPos = new Vec2(myPos.x, myPos.y - 1.0f);
    // アクションの作成
    // 第一引数 アクションに要する時間
    // 第二引数 目的の座標
    MoveTo* move = MoveTo::create(1.0f, *targetPos);

    // アクションの実行
    this->runAction(move);
}
void RainBulletBase::update(float delta)
{
    this->fall();
}

/**
 *  自身を削除する
 *
 *  @return 削除できたかどうか
 */
bool RainBulletBase::elase()
{
    //TODO 削除処理
    return true;
}

