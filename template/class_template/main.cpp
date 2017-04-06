/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 21, 2017, 10:01 PM
 */

#include <iostream>
#include <cstdlib>
#include "demo.h"
#include <stdio.h>
#include <typeinfo>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    demo<double> m_demo(1.3);
    double bRet = m_demo.do_something();
    cout<< bRet<< endl;
    return 0;
}

