/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 18, 2017, 9:48 PM
 */

#include <cstdlib>
#include "BuilderConcrete.h"
#include "Director.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    BuilderBase* builder = new BuilderConcrete();
    
    Director* p_Director = new Director(builder);
    
    p_Director->createProduct();
    
    Product* p_product = builder->getProduct();
    p_product->showProduct();
    
    delete p_product;
    
    delete p_Director;
    delete builder;
    
    return 0;
}

