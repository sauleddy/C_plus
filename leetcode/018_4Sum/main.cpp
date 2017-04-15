/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on April 14, 2017, 6:10 PM
 */

#include <cstdlib>
#include <iostream>

#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Solution m_Solution;
    vector<int> vec_input = {0, 1, 3, -5, 3, 0};
    vector<vector<int>> vec_result = m_Solution.fourSum(vec_input, 1);
    return 0;
}

