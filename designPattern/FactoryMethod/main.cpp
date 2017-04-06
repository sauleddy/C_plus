/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 17, 2017, 9:13 AM
 */

#include <cstdlib>
#include "FactoryA.h"
#include "FactoryB.h"
#include "../SimpleFactory/ProductBase.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    FactoryA* factoryA = new FactoryA();
    ProductBase* productA = factoryA->createProduct();
    productA->showProduct();
    delete productA;
    delete factoryA;
    
    FactoryB* factoryB = new FactoryB();
    ProductBase* productB = factoryB->createProduct();
    productB->showProduct();
    delete productB;
    delete factoryB;
    
    return 0;
}

