/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 28, 2017, 2:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <typeinfo>
#include <functional>
#include "myClass.h"

using namespace std;

template<typename T>
T add(T m_A, T m_B)
{
    return m_A + m_B;
}

/*
 * 
 */
int main(int argc, char** argv) {

    auto m_C = add<double>(1.2, 2.5);
    cout<< "typename:"<< typeid(m_C).name()<< ", value:"<< m_C<< endl;
    
    auto funcAddByTwo = bind(add<int>, placeholders::_1, 2);
    cout<< funcAddByTwo(2)<< endl;
    
    myClass m_myClass;
    cout<< m_myClass.add(1, 2)<< endl;
    auto funcAdd = bind(&myClass::add, &m_myClass, placeholders::_1, 10);
    cout<< funcAdd(1)<< endl;
    
    return 0;
}

