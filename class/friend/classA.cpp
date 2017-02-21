/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   classA.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 4:20 PM
 */

#include <iostream>
#include "classA.h"

/*class classB {
public:
    classB();
    classB(const classB& orig);
    virtual ~classB();
    void printA(classA& m_A);
private:

};

class classA {
public:
    classA();
    classA(const classA& orig);
    virtual ~classA();
    friend void fFriend(classA& m_A);
    
    friend class classB;
private:
    int iA;
    int iB;
};*/

using namespace std;

classA::classA(): iA(10), iB(20) {
    //cout<< "iA="<< this->iA<< ",iB="<< this->iB<<endl;
}

classA::classA(const classA& orig) {
}

classA::~classA() {
}

void fFriend(classA& m_A)
{
    cout<< "iA="<< m_A.iA<< ",iB="<< m_A.iB<<endl;
}

