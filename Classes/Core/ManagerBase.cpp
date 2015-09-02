//
//  ManagerBase.cpp
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#include "ManagerBase.h"
using namespace core::manager;
using namespace core;

/**
 *  listの末尾に追加 characterに関しては出し入れよりも参照が多いのでvectorで行う
 *
 *  @param worker worker 登録したいobject
 *
 *  @return return bool workerがnullの場合はfalse
 */
bool ManagerBase::addWorker(ClassBase* worker){
    if(worker == nullptr){
        return false;
    }
    _workerList.push_back(worker);
    return true;
};

/**
 *  listから削除
 *
 *  @param worker need remove object
 *
 *  @return return workerがnull false
 */
bool ManagerBase::removeWorker(ClassBase* worker){
    if(worker == nullptr){
        return false;
    }
    _workerList.remove(worker);
    return true;
};


bool ManagerBase::createInstance(){
    if(instance != nullptr){
        return false;
    }
    instance = new ManagerBase();
    return true;
};

ManagerBase* ManagerBase::getInstance(){
    return instance;
}
