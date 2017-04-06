/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 14, 2017, 2:04 PM
 */

#include <cstdlib>
#include "ProductFactory.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ProductFactory* p_Factory = new ProductFactory();
    
    ProductBase* p_Product = p_Factory->createProduct(typeA);
    if(p_Product) {
        p_Product->showProduct();
        delete p_Product;
    }
    delete p_Factory;
    
    return 0;
}

