/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 17, 2017, 9:34 AM
 */

#include <cstdlib>
#include "FactoryA.h"
#include "FactoryB.h"
#include "ProductClothBase.h"
#include "ProductPantsBase.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    FactoryBase* factoryA = new FactoryA();
    
    ProductClothBase* clothA = factoryA->createCloth();
    ProductPantsBase* pantsA = factoryA->createPants();
    
    clothA->show();
    pantsA->show();
    
    delete pantsA;
    delete clothA;
    delete factoryA;
    
    return 0;
}

