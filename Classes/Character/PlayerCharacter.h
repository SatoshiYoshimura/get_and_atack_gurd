//
//  PlayerCharacter.h
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#ifndef __GetAndAtackGurd__PlayerCharacter__
#define __GetAndAtackGurd__PlayerCharacter__

#include <stdio.h>
#include "CharacterBase.h"

namespace character {
    class PlayerCharacter : public CharacterBase
    {
    private:
        virtual bool init();
        void onEnter();
        
        void update(float delta);
        bool elase();
    public:
        int _hitPoint;
        CREATE_FUNC(PlayerCharacter);
        
    };
};

#endif /* defined(__GetAndAtackGurd__PlayerCharacter__) */