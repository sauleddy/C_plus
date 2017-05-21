/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 19, 2017, 12:51 PM
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
    Solution m_Solution;
    vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
    cout<< m_Solution.findUnsortedSubarray(nums)<< endl;
    return 0;
}

