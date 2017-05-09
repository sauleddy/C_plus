/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 8, 2017, 9:56 AM
 */

#include <cstdlib>
#include <iostream>
#include <limits.h>
#include "Solution.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Solution m_Solution;
    //cout<< INT_MAX<< endl;
    cout<< m_Solution.myAtoi("  90   ")<< endl;
    return 0;
}

