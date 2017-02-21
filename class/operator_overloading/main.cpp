/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 21, 2017, 5:55 PM
 */

#include <cstdlib>
#include <iostream>
#include "demo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    demo m_demo1;
    m_demo1.iA = 100;
    demo m_demo2;
    m_demo2.iA = 200;
    //m_demo2 = m_demo1;
    
    demo m_demo3 = m_demo1 + m_demo2;
    
    return 0;
}

