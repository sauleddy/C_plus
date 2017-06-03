/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 22, 2017, 8:31 AM
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
    Solution m_Solution;
    vector<int> nums = {1,2,3,4};
    cout<< m_Solution.findLHS(nums)<< endl;
    return 0;
}

