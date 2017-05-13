/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 10, 2017, 12:32 PM
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
    vector<int> nums = {5, 2, 6, 1, 2, 2};
    m_Solution.countSmaller(nums);
    return 0;
}

