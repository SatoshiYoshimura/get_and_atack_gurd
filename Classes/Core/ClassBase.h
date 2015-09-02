//
//  ClassBase.h
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/08/31.
//
//

#ifndef __GetAndAtackGurd__ClassBase__
#define __GetAndAtackGurd__ClassBase__

#include <stdio.h>
USING_NS_CC;

namespace core {

    class ClassBase :public  cocos2d::Sprite
    {
    public:
        
        virtual bool elase();
        virtual bool init();
        void onEnter();
        
        void update(float delta);
        
        CREATE_FUNC(ClassBase);

    };

};


#endif /* defined(__GetAndAtackGurd__ClassBase__) */
