/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KRefCount.h
 * Author: eddy
 *
 * Created on March 25, 2017, 4:08 PM
 */

#ifndef KREFCOUNT_H
#define KREFCOUNT_H

class KRefCount {
public:
    KRefCount();
    KRefCount(const KRefCount& orig) = delete;
    virtual ~KRefCount();
    
    unsigned long AddRef(void);
    unsigned long Release(void);
    void Reset(void);
   
private:

    unsigned long count;
};

#endif /* KREFCOUNT_H */

