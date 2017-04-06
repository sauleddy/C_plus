/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 25, 2017, 3:41 PM
 */

#include <cstdlib>
#include "SmartPtr.h"

using namespace std;

#include "Proxy.h"
#include "myClass.h"

/*
 * 
 */
int main(int argc, char** argv) {

    Subject* p_Subject = new Proxy();
    p_Subject->Request();
    delete p_Subject;
    
    SmartPtr<myClass> p_SmartPtr(new myClass(10));
    cout<< p_SmartPtr->GetNum()<< endl;
    cout<< (*p_SmartPtr).GetNum()<< endl;
    
    SmartPtr<myClass> p_SmartPtr1(new myClass(20));
    myClass* p_myClass = p_SmartPtr1.Detach();
    delete p_myClass;
    
    return 0;
}

