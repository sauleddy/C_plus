/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 19, 2017, 9:07 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    /*vector<int> nums = {1, 3, 7, 9, 10};
    cout<< *std::lower_bound(nums.begin(), nums.end(), 3.1)<< endl;
    cout<< *std::upper_bound(nums.begin(), nums.end(), 10)<< endl;
    
    if(std::upper_bound(nums.begin(), nums.end(), 11) == nums.end()) {
        cout<< "out of bound"<< endl;
    }*/
    
    vector<int> houses = {1, 5};
    vector<int> heaters = {2};
    
    Solution m_Solution;
    cout<< m_Solution.findRadius(houses, heaters)<< endl;
    
    return 0;
}

