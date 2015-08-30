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

USING_NS_CC;

namespace sasoon {
    namespace colliders {
        
        class CollidersDecisioner : public ClassBase
        {
        public:
            bool elase();
            Node* decideCollision(NO);
        };
        
    }
}

#endif /* defined(__GetAndAtackGurd__CollidersDecisioner__) */
