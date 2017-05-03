/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 14, 2017, 9:50 AM
 */

#include <cstdlib>
#include <iostream>
#include "Derived.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Base* p_Base = new Base();
    
    /*
     * static cast
     */
    
//    float fVal = 2.5;
//    int iVal = static_cast<int>(fVal);
    
//    Derived* p_Derived = static_cast<Derived*>(p_Base);
//    if(p_Derived == nullptr)
//        cout<< "failed to cast (p_Derived)"<< endl;
//    else
//        cout<< "succeed to cast (p_Derived)"<< endl;
    
    /*
     * dynamic cast
     */
        
//    float fVal = 2.5;
//    int iVal = dynamic_cast<int>(fVal);
    
//    Derived* p_Derived = dynamic_cast<Derived*>(p_Base);
//    if(p_Derived == nullptr)
//        cout<< "failed to cast (p_Derived)"<< endl;
//    else
//        cout<< "succeed to cast (p_Derived)"<< endl;
    
//    void* p_void = dynamic_cast<void*>(p_Base);
//    if(p_void == nullptr)
//        cout<< "failed to cast (p_void)"<< endl;
//    else
//        cout<< "succeed to cast (p_void)"<< endl;
    
    /*
     * const cast
     */
//    int a = 100;
//    const int* cA = &a;
//    int* pA = const_cast<int*>(cA);
//    *pA = 200;
//    cout<< a<< endl;
    
//    int a = 100;
//    int b = 200;
//    int* const cA = &a;
//    int* pA = const_cast<int*>(cA);
//    pA = &b;
//    cout<< *pA<< endl;
    
    /*
     * reinterpret cast
     */
    cout<< std::hex<< p_Base<< endl;
    unsigned long address = reinterpret_cast<unsigned long>(p_Base);
    //unsigned long address = (unsigned long)p_Base;
    cout<< std::hex<< address<< endl;
    Base* p_BaseGet = reinterpret_cast<Base*>(address);
    //Base* p_BaseGet = (Base*)address;
    cout<< std::hex<< p_BaseGet<< endl;
    
    delete p_Base;
    
    return 0;
}

