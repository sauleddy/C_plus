/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 21, 2017, 4:50 PM
 */

#include <cstdlib>
#include <iostream>
#include "demo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    demo m_demo;
    m_demo.const_setter(1000);
    m_demo.print();
    demo::static_print();
    return 0;
}

