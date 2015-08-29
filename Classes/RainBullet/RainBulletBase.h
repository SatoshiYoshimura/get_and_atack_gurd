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
    RainBulletBase();
    ~RainBulletBase();
    static RainBulletBase* create();
    
    void initOptions();
    
    void addEvents();
    void touchEvent(cocos2d::Touch* touch);
    
private:
    
};
    
#endif /* defined(__GetAndAtackGurd__RainBulletBase__) */

    
}

