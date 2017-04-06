/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 24, 2017, 3:22 PM
 */
#include <iostream>
#include <cstdlib>
#include "String.h"
#include "myClass.h"

using namespace std;

myClass passMyClass(myClass myClassIn) {
    myClass myClass1 = myClassIn;
    cout<< &myClassIn<< endl;
    cout<< &myClass1<< endl;
    return myClass1;
}

/*
 * 
 */
int main(int argc, char** argv) {

    //StringA myString2("this is my string.");
    /*
     * use copy constructor
     */
    //StringA myString1 = myString2;
    
    /*
     * use assignment operator
     */
    //StringA myString1;
    //myString1 = myString2;
    
    /*
     * the times of calling constructor
     */
    myClass m_myClass1;
    //myClass m_myClass2 = m_myClass1;
    //myClass m_myClass3(m_myClass1);
    cout<< &m_myClass1<< endl;
    myClass m_myClass4 = passMyClass(m_myClass1);
    cout<< &m_myClass4<< endl;
    
    return 0;
}

