/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 21, 2017, 1:29 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecNums = {1, 2, 3, 8, 9, 10};
    
    Solution m_Solution;
    cout<< m_Solution.numberOfArithmeticSlices(vecNums)<< endl;
    
    return 0;
}

