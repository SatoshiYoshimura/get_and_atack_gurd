//
//  CollidersDecisioner.cpp
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/08/31.
//
//

#include "CollidersDecisioner.h"
#include "AttackCollider.h"

using namespace collider;
using namespace core;
USING_NS_CC;

ColliderBase* CollidersDecisioner::decideCollider(ClassBase *obj1, ClassBase *obj2){
    ColliderBase* retCollider = nullptr;
    
    //ここで逐一判定していく
    //TODO 定数リファクタ
    if(strcmp(typeid(*obj1).name(), "class PlayerCharacter") && strcmp(typeid(*obj1).name(), "class RainBullet")){
        if( ColliderManager::createInstance()){
            ColliderManager::getInstance()->addWorker(new AttackCollider());
            //こいつがキャラクターまねーじゃにcollider eventを伝えれば良い
        }
//        ret = new AttackCollider();
    }
    return retCollider;
}