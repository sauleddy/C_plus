/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 6, 2017, 11:12 AM
 */

#include <cstdlib>
#include <iostream>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Solution m_Solution;
    //cout<< m_Solution.removeKdigits("21030089", 1)<< endl;
    //cout<< m_Solution.removeKdigits("100200", 1)<< endl;
    cout<< m_Solution.removeKdigits("1234567890", 9)<< endl;
    
    return 0;
}

