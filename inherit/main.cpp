/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 14, 2017, 9:22 AM
 */

#include <cstdlib>
#include "Derived.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Derived m_Derived;
    m_Derived.print();
    m_Derived.printBase();
    return 0;
}

