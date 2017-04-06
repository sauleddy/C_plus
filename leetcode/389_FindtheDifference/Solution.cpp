/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 3:03 PM
 */

#include "Solution.h"
#include "algorithm"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

char Solution::findTheDifference(string s, string t) {
    /*std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    for(int i=0; i<s.length(); ++i) {
        if(s[i] != t[i]) {
            return t[i];
        }
    }
    return t[t.length()-1];*/
    
    int sumOfT = 0;
    for(int i=0; i<t.length(); ++i) {
        sumOfT += t[i];
    }
    for(int i=0; i<s.length(); ++i) {
        sumOfT -= s[i];
    }
    return (char)sumOfT;
}

