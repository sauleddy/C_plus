/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 21, 2017, 9:48 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 1;
    Solution m_Solution;
    cout<< m_Solution.findPairs(nums, k)<< endl;
    
    return 0;
}

