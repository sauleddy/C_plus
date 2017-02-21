/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 21, 2017, 4:03 PM
 */

#include <cstdlib>
#include "classA.h"
#include "classB.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    classA m_A;
    fFriend(m_A);
    
    classB m_B;
    m_B.printA(m_A);
    
    return 0;
}

