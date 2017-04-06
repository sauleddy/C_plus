/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductClothBase.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:41 AM
 */

#ifndef PRODUCTCLOTHBASE_H
#define PRODUCTCLOTHBASE_H

class ProductClothBase {
public:
    ProductClothBase();
    ProductClothBase(const ProductClothBase& orig);
    virtual ~ProductClothBase();
    
    virtual void show(void) = 0;
    
private:

};

#endif /* PRODUCTCLOTHBASE_H */

