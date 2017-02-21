/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   classB.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 4:20 PM
 */

#include <iostream>
#include "classB.h"

/*class classA {
public:
    classA();
    classA(const classA& orig);
    virtual ~classA();
    friend void fFriend(classA& m_A);
    
    friend class classB;
private:
    int iA;
    int iB;
};

class classB {
public:
    classB();
    classB(const classB& orig);
    virtual ~classB();
    void printA(classA& m_A);
private:

};*/

using namespace std;

classB::classB() {
}

classB::classB(const classB& orig) {
}

classB::~classB() {
}

void classB::printA(classA& m_A)
{
    cout<< "[classB] iA="<< m_A.iA<< ",iB="<< m_A.iB<<endl;
}

