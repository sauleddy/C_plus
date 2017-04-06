/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Director.h
 * Author: eddy
 *
 * Created on March 18, 2017, 9:50 PM
 */

#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "BuilderBase.h"

class Director {
public:
    Director(BuilderBase* builder);
    Director(const Director& orig) = delete;
    virtual ~Director();
    
    void createProduct(void);
    
private:

    BuilderBase* p_BuilderBase;
    
};

#endif /* DIRECTOR_H */

