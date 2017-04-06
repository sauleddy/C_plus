/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 10:28 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::detectCapitalUse(string word) {
    int idxLastCapital = -1;
    for(int i=0; i<word.length(); ++i) {
        if(word[i] >= 65 && word[i] <= 90) {
            if(i - idxLastCapital > 1) {
                return false;
            } else {
                idxLastCapital = i;
            }
        }
    }
    
    if(idxLastCapital == -1 || idxLastCapital == 0 || idxLastCapital == word.length() - 1) {
        return true;
    }
    return false;
}

