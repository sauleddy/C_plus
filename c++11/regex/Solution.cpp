/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 9, 2017, 3:06 PM
 */
#include <regex>
#include <iostream>
#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::findWords(vector<string>& words) {
    regex reg("(^[qwertyuiop]+$)|(^[asdfghjkl]+$)|(^[zxcvbnm]+$)", std::regex_constants::basic | std::regex_constants::icase);
    
    vector<string> vecRet;
    vector<string>::iterator iter = words.begin();
    for(iter; iter!=words.end(); ++iter) {
        //cout<< *iter<< endl;
        if(regex_match(*iter, reg)) {
            vecRet.push_back(*iter);
        }
    }
    return vecRet;
}

