/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 9, 2017, 10:16 AM
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
    vector<int> nums = {10,5,13,4,8,4,5,11,14,9,16,10,20,8};
    cout<< m_Solution.splitArray(nums, 8)<< endl;
    return 0;
}

