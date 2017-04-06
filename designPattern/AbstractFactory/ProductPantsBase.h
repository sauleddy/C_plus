/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductPantsBase.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:43 AM
 */

#ifndef PRODUCTPANTSBASE_H
#define PRODUCTPANTSBASE_H

class ProductPantsBase {
public:
    ProductPantsBase();
    ProductPantsBase(const ProductPantsBase& orig);
    virtual ~ProductPantsBase();
    
    virtual void show(void) = 0;
    
private:

};

#endif /* PRODUCTPANTSBASE_H */

