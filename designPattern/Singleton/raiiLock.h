/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   raiiLock.h
 * Author: eddy
 *
 * Created on March 17, 2017, 10:33 AM
 */

#ifndef RAIILOCK_H
#define RAIILOCK_H

#include <mutex>

class raiiLock {
public:
    raiiLock(std::mutex* mtxIn);
    raiiLock(const raiiLock& orig) = delete;
    virtual ~raiiLock();
private:

    std::mutex* mtx;
};

#endif /* RAIILOCK_H */

