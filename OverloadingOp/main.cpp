/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 8, 2017, 2:02 PM
 */

#include <cstdlib>
#include "rectangle.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    rectangle m_rectA(10, 10);
    rectangle m_rectB(50, 50);
    rectangle c = m_rectA + m_rectB;
    c.print();
    
    rectangle d = m_rectA - m_rectB;
    d.print();
    
    return 0;
}

