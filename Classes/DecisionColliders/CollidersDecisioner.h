//
//  CollidersDecisioner.h
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/08/31.
//
//

#ifndef __GetAndAtackGurd__CollidersDecisioner__
#define __GetAndAtackGurd__CollidersDecisioner__

#include <stdio.h>
#include "ClassBase.h"
#include "ColliderBase.h"
#include "ColliderManager.h"

USING_NS_CC;
using namespace core;
using namespace collider;

namespace collider {
    class CollidersDecisioner
    {
    public:
        bool elase();
        /**
         * //当たったものを解析して衝突クラスを返す
         *  ColliderBaseはcocosのクラスではないのでメモリ管理はmanagerでしっかり行う
         *  @param obj1 あたったもの１
         *  @param obj2 あたったもの２
         *
         *  @return 衝突イベント
         */
        ColliderBase* decideCollider(ClassBase* obj1, ClassBase* obj2);
    private:
    };
    
}

#endif /* defined(__GetAndAtackGurd__CollidersDecisioner__) */
