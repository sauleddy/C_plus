/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 23, 2017, 4:34 PM
 */

#include "Solution.h"
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Solution m_Solution;
    std::vector<int> vecNums = {1, 3, 2};
    m_Solution.singleNumber(vecNums);
    
    return 0;
}

