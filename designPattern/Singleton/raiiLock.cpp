/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   raiiLock.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 10:33 AM
 */

#include "raiiLock.h"

raiiLock::raiiLock(std::mutex* mtxIn) {
    this->mtx = mtxIn;
    mtx->lock();
}

raiiLock::~raiiLock() {
    mtx->unlock();
}

