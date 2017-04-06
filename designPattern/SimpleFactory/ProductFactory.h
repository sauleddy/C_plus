/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductFactory.h
 * Author: eddy
 *
 * Created on March 14, 2017, 2:11 PM
 */

#ifndef PRODUCTFACTORY_H
#define PRODUCTFACTORY_H

#include "ProductBase.h"

typedef enum {
    typeA, typeB, typeC
} type;

class ProductFactory {
public:
    ProductFactory();
    ProductFactory(const ProductFactory& orig);
    virtual ~ProductFactory();
    
    ProductBase* createProduct(type m_type);
    
private:

};

#endif /* PRODUCTFACTORY_H */

