//
//  ColliderManager.h
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#ifndef __GetAndAtackGurd__ColliderManager__
#define __GetAndAtackGurd__ColliderManager__

#include <stdio.h>
#include "ManagerBase.h"

using namespace core::manager;
using namespace std;

namespace collider {
    /// このクラスいらん可能性大
    class ColliderManager : ManagerBase
    {
    public:
        bool addWorker(ColliderBase*);
        bool removeWorker(ColliderBase*);
        static bool createInstance();
        static ColliderManager* getInstance();
    private:
        list<ColliderBase*> _workerList;
        //キャストしたくないので基底クラスの変数をこっちで定義
        static ColliderManager* instance;
        ColliderManager();
    };
};


#endif /* defined(__GetAndAtackGurd__ColliderManager__) */
