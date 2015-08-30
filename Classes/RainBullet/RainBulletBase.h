//
//  RainBulletBase.h
//  GetAndAtackGurd
//
//  Created by A13952 on 2015/08/29.
//
//

#ifndef __GetAndAtackGurd__RainBulletBase__
#define __GetAndAtackGurd__RainBulletBase__

#include <stdio.h>
#include <string>
#include "FallTypeBase.h"

#include "cocos2d.h"

namespace rainbullet {

class RainBulletBase : public cocos2d::Sprite
{
public:
    virtual bool init();
    void onEnter();
    void fall();
    void update(float delta);
    
    bool elase();
    
    CREATE_FUNC(RainBulletBase);
    
};
    
#endif /* defined(__GetAndAtackGurd__RainBulletBase__) */

    
}

