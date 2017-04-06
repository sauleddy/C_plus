/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductPantsB.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:43 AM
 */

#ifndef PRODUCTPANTSB_H
#define PRODUCTPANTSB_H

#include "ProductPantsBase.h"

class ProductPantsB: public ProductPantsBase {
public:
    ProductPantsB();
    ProductPantsB(const ProductPantsB& orig);
    virtual ~ProductPantsB();
    
    void show(void);
    
private:

};

#endif /* PRODUCTPANTSB_H */

