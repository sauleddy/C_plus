/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   String.cpp
 * Author: eddy
 * 
 * Created on February 24, 2017, 3:22 PM
 */

#include <memory>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "String.h"

using namespace std;

StringA::StringA(): myString(nullptr) {
    cout<< "::StringA()"<< endl;
}

StringA::StringA(const char* str) {
    cout<< "::StringA(const char* str)"<< endl;
    
    if(str != nullptr)
    {
        unsigned int uiLen = strlen(str);
        this->myString = new char[uiLen + 1];
        memcpy(this->myString, str, uiLen);
    }
    else
    {
        this->myString = new char[1];
        this->myString[0] = '\0';
    }
}

StringA::StringA(const StringA& orig) {
    cout<< "::StringA(const String& orig)"<< endl;
    
    unsigned int uiLen = strlen(orig.myString);
    this->myString = new char[uiLen + 1];
    memcpy(this->myString, orig.myString, uiLen); 
}

StringA::~StringA() {
    cout<< "::~StringA()"<< endl;
    if(this->myString != nullptr)
    {
        delete this->myString;
        this->myString = nullptr;
    }
}

StringA& StringA::operator=(const StringA& orig) {
    cout<< "::operator="<< endl;
    if(this == &orig)
    {
        return *this;
    }
    if(this->myString != nullptr)
    {
        delete this->myString;
        this->myString = nullptr;
    }
    unsigned int uiLen = strlen(orig.myString);
    this->myString = new char[uiLen + 1];
    memcpy(this->myString, orig.myString, uiLen);
    return *this;
}