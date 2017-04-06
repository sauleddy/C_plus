/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FlyWeightFactory.cpp
 * Author: eddy
 * 
 * Created on March 28, 2017, 9:53 AM
 */

#include "FlyWeightFactory.h"

FlyWeightFactory::FlyWeightFactory() {
}

FlyWeightFactory::~FlyWeightFactory() {
    for(auto iter=umapFlyWeight.begin(); iter!=umapFlyWeight.end(); ++iter) {
        delete iter->second;
    }
    umapFlyWeight.clear();
}

FlyWeight* FlyWeightFactory::getFlyWeight(string name) {
    auto iter = umapFlyWeight.find(name);
    if(iter == umapFlyWeight.end()) {
        FlyWeight* p_NewFlyWeight = new ConcreteFlyWeight();
        umapFlyWeight.insert(std::pair<string, FlyWeight*>(name, p_NewFlyWeight));
        return p_NewFlyWeight;
    } else {
        return iter->second;
    }
}

