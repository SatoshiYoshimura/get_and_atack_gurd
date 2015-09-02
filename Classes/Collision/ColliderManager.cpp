//
//  ColliderManager.cpp
//  GetAndAtackGurd
//
//  Created by 吉村 智志 on 2015/09/03.
//
//

#include "ColliderManager.h"

using namespace collider;

bool ColliderManager::addWorker(ColliderBase* worker){
    if (worker == nullptr) {
        return false;
    }
    _workerList.push_back(worker);
    return true;
}

bool ColliderManager::removeWorker(ColliderBase* worker){
    if (worker == nullptr) {
        return false;
    }
    _workerList.remove(worker);
    return true;
}

bool ColliderManager::createInstance(){
    if(ManagerBase::instance != nullptr){
        return false;
    }
    ManagerBase::instance = new ColliderManager();
    return true;
};

ColliderManager* ColliderManager::getInstance(){
    return instance;
}