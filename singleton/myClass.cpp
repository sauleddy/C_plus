/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.cpp
 * Author: eddy
 * 
 * Created on February 24, 2017, 4:04 PM
 */

#include <iostream>

#include "myClass.h"

using namespace std;

myClass* myClass::p_Instance = nullptr;

myClass::myClass() {
    cout<< "::myClass()"<< endl;
}

myClass::~myClass() {
    cout<< "::~myClass()"<< endl;
}

myClass* myClass::getInstance(void)
{
    if(myClass::p_Instance == nullptr)
    {
        myClass::p_Instance = new myClass();
    }
    return myClass::p_Instance;
}

