//
//  ManagerBase.h
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#ifndef __GetAndAtackGurd__ManagerBase__
#define __GetAndAtackGurd__ManagerBase__

#include <stdio.h>
#include "ClassBase.h"
#include "ColliderBase.h"

using namespace std;

namespace core {
    namespace manager {
        /// インゲーム中のみのシングルトン。シーンが変わって必要なくなったら死ぬ
        class ManagerBase
        {
        public:
            //ColliderBaseはcocosのクラスをを継承する必要が無かったのでColliderManagerはオーバーロードしなければならない
            bool addWorker(ClassBase*);
            bool removeWorker(ClassBase*);
            static bool createInstance();
            static ManagerBase* getInstance();
        protected:
            static ManagerBase* instance;
            list<ClassBase*> _workerList;
        private:
            ManagerBase();
        };
    };
}
#endif /* defined(__GetAndAtackGurd__ManagerBase__) */
