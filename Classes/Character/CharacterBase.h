//
//  CharacterBase.h
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#ifndef __GetAndAtackGurd__CharacterBase__
#define __GetAndAtackGurd__CharacterBase__

#include <stdio.h>
#include "ClassBase.h"
USING_NS_CC;

namespace character {
    class CharacterBase : public core::ClassBase
    {
        virtual bool init();
        void onEnter();
        
        void update(float delta);
        bool elase();
        
        CREATE_FUNC(CharacterBase);
    };
};

#endif /* defined(__GetAndAtackGurd__CharacterBase__) */
