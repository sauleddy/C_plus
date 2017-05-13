/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 11, 2017, 10:59 AM
 */

#include "Solution.h"
#include <vector>
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::simplifyPath(string path) {
    vector<string> history;
    int pos = 0;
    while(pos < path.length()) {
        size_t posBegin = path.find_first_not_of("/", pos);
        if(posBegin == string::npos) break;
        size_t posEnd = path.find_first_of("/", posBegin + 1);
        if(posEnd == string::npos) posEnd = path.length();
        
        string strThis = path.substr(posBegin, posEnd - posBegin);
        pos = posEnd + 1;
            
        if(strThis == "..") {
            if(history.size() > 0) history.pop_back();
        } else if(strThis != ".") {
            history.push_back(strThis + "/");
        }
    }
    
    std::string result = std::accumulate(history.begin(), history.end(), std::string{"/"},
        [](std::string &s, const std::string &piece) { return s += piece; });
    
    if(result.length() > 1 && result[result.length()-1] == '/') {
        result[result.length()-1] = '\0';
    }
    return result;
}

