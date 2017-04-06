/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 29, 2017, 3:31 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::romanToInt(string s) {
    std::unordered_map<char, int> umapNotes;
    umapNotes['I'] = 1;
    umapNotes['V'] = 5;
    umapNotes['X'] = 10;
    umapNotes['L'] = 50;
    umapNotes['C'] = 100;
    umapNotes['D'] = 500;
    umapNotes['M'] = 1000;
    
    if(s.length() == 0) {
        return 0;
    }
    if(s.length() == 1)
        return umapNotes[s[0]];
    
    int sum = umapNotes[s[0]];
    for(int i=1; i<s.length(); ++i) {
        char cLast = s[i-1];
        char cThis = s[i];
        if(umapNotes[cLast] < umapNotes[cThis]) {
            sum -= umapNotes[cLast] * 2;
        }
        sum += umapNotes[cThis];
    }
    return sum;
}

