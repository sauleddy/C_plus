/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 22, 2017, 10:50 AM
 */

#include <cstdlib>
#include <vector>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecInput = {4, 3, 2, 7, 8, 2, 3, 1};
    
    Solution m_Solution;
    std::vector<int> vecRet = m_Solution.findDuplicates(vecInput);
    
    return 0;
}

