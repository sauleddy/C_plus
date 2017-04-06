/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 19, 2017, 8:25 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findMaxConsecutiveOnes(vector<int>& nums) {
    int maxConscutive = 0;
    int thisConscutive = 0;
    for(auto num : nums) {
        if(num == 1) {
            ++thisConscutive;
        } else {
            if(thisConscutive > 0) {
                if(thisConscutive > maxConscutive) {
                    maxConscutive = thisConscutive;
                }
                thisConscutive = 0;
            }
        }
    }
    if(thisConscutive > maxConscutive)
        maxConscutive = thisConscutive;
    return maxConscutive;
}

