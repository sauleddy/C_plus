/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 27, 2017, 3:10 PM
 */

#include <cstdlib>
#include <iostream>
#include "Derived.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout<< Base::num<< endl;
    Base::my_static_func();
    
    cout<< Derived::num<< endl;
    Derived::my_static_func();
    
    Base* p_Base = new Derived();
    cout<< p_Base->num<< endl;
    p_Base->my_static_func();
    
    delete p_Base;
    
    return 0;
}

