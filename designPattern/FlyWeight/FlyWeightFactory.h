/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FlyWeightFactory.h
 * Author: eddy
 *
 * Created on March 28, 2017, 9:53 AM
 */

#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include <unordered_map>

#include "ConcreteFlyWeight.h"

class FlyWeightFactory {
public:
    FlyWeightFactory();
    FlyWeightFactory(const FlyWeightFactory& orig) = delete;
    virtual ~FlyWeightFactory();
    
    FlyWeight* getFlyWeight(string name);
    
private:

    std::unordered_map<string, FlyWeight*> umapFlyWeight;
    
};

#endif /* FLYWEIGHTFACTORY_H */

