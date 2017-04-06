/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KRefCount.cpp
 * Author: eddy
 * 
 * Created on March 25, 2017, 4:08 PM
 */

#include "KRefCount.h"

KRefCount::KRefCount(): count(0) {
}

KRefCount::~KRefCount() {
}

unsigned long KRefCount::AddRef(void) {
    return __sync_add_and_fetch(&count, 1);
}
   
unsigned long KRefCount::Release(void) {
    if(count == 0)
        return 0;
    return __sync_add_and_fetch(&count, -1);
}
    
void KRefCount::Reset(void) {
    count = 0;
}

