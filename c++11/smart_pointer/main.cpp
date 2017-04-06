/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 2:08 PM
 */

#include <cstdlib>
#include <memory>
#include <iostream>
#include "myClass.h"

using namespace std;

unique_ptr<myClass> print(unique_ptr<myClass> uptr) {
    return uptr;
}

/*
 * 
 */
int main(int argc, char** argv) {

    unique_ptr<myClass> uptr1(new myClass());
    //unique_ptr<myClass> uptr2 = uptr1;    // cannot assign unique pointer
    uptr1->print(10);
    //print(uptr1); // cannot pass to other functions
    
    unique_ptr<myClass> uptr4 = print(move(uptr1));
    
    unique_ptr<myClass> uptr3 = move(uptr1);
    uptr3->print(20);
    
    uptr3.reset();
    
    unique_ptr<myClass[]> uptr5(new myClass[2]);
    
    
    cout<< "after uptr3.reset()"<< endl;
    
    shared_ptr<myClass> sptr1(new myClass());
    shared_ptr<myClass> sptr2 = sptr1;
    sptr2->print(30);
    
    //sptr1.reset();    // decrease the reference
    //sptr2.reset();
    
    shared_ptr<myClass> sptr3(new myClass[2], [](myClass* p_myClass){delete [] p_myClass;});
    (sptr3.get() + 1)->print(40);
    
    
    return 0;
}

