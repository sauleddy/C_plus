/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 12, 2017, 9:18 AM
 */

#include "Solution.h"
#include <unordered_map>


Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::lengthLongestPath(string input) {
    if(input.length() == 0) {
        return 0;
    }
    
    input = "\n" + input;
    
    unordered_map<int, int> umapLayerLen;
    umapLayerLen[-1] = 0;
    int max_len = 0;
    string token = "";
    int begin = 0;
    int end = 0;
    int layer = this->findNextToken(input, begin, token, end);
    while(layer != -1) {
        cout<< token<< ", "<< layer<< ", "<< end<< endl;
        int len_token = token.length();
        if(token.find(".") == std::string::npos) {
            umapLayerLen[layer] = umapLayerLen[layer-1] + len_token + 1;
            cout<< layer<< ","<< umapLayerLen[layer]<< endl;
            
        } else {
            int len_this = umapLayerLen[layer-1] + len_token;
            cout<< len_this<< endl;
            if(len_this > max_len) {
                max_len = len_this;
            }
        }
        begin = end;
        layer = this->findNextToken(input, begin, token, end);
    }
    
    return max_len;
}

int Solution::findNextToken(string& input, int begin, string& token, int& end) {
    std::size_t pos = input.find("\n", begin);
    if(pos == std::string::npos) {
        return -1;
    }
    //token = input.substr(begin, pos - begin);
    ++pos;
    int layer = 0;
    while(input[pos] == '\t') {
        ++layer;
        ++pos;
    }
    //end = pos;
    std::size_t posNext = input.find("\n", pos);
    if(posNext == std::string::npos) {
        token = input.substr(pos);
        end = input.length();
    } else {
        token = input.substr(pos, posNext - pos);
        end = posNext;
    }
    return layer;
}

