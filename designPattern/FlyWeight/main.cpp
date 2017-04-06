/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 28, 2017, 9:51 AM
 */

#include <cstdlib>

#include "ConcreteFlyWeight.h"
#include "FlyWeightFactory.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    FlyWeightFactory* factory = new FlyWeightFactory();
    
    ConcreteFlyWeight* flyweight = (ConcreteFlyWeight*)factory->getFlyWeight("one");
    flyweight->setExternalResource(100);
    flyweight->operation();
    
    delete factory;
    
    return 0;
}

