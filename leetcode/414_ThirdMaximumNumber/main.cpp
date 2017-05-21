/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 20, 2017, 9:32 AM
 */

#include <cstdlib>
#include <vector>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Solution m_Solution;
    vector<int> nums = {2, 2, 3, 1};
    m_Solution.thirdMax(nums);
    return 0;
}

