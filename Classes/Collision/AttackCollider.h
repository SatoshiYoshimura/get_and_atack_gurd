//
//  AttackCollision.h
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/08/31.
//
//

#ifndef __GetAndAtackGurd__AttackCollision__
#define __GetAndAtackGurd__AttackCollision__

#include <stdio.h>
#include "ColliderBase.h"

namespace collider {
    class AttackCollider : public ColliderBase
    {
    public:
        AttackCollider();
        virtual bool init();
        void onEnter();
        
        void update(float delta);
        bool elase();
    };
};
#endif