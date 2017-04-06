/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductBase.h
 * Author: eddy
 *
 * Created on March 14, 2017, 2:04 PM
 */

#ifndef PRODUCTBASE_H
#define PRODUCTBASE_H

class ProductBase {
public:
    ProductBase();
    ProductBase(const ProductBase& orig);
    virtual ~ProductBase();
    
    virtual void showProduct(void) = 0;
    
private:
    
};

#endif /* PRODUCTBASE_H */

