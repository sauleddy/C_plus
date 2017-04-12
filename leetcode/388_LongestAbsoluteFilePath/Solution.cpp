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


Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::lengthLongestPath(string input) {
    /*string token = "";
    int begin = 0;
    int end = 0;
    int layer = 0;
    do {
        token = "";
        layer = this->findNextToken(input, begin, token, end);
        cout<< token<< ", "<< layer<< ", "<< end<< endl;
        begin = end;
    } while(layer != 0);*/
    
    int len_input = input.length();
    if(len_input == 0) {
        return 0;
    }
    input = "\n" + input;
    //cout<< input<< endl;
    
    int begin = 0;
    int max_len = this->help(input, begin, 0);
    return max_len;
}

int Solution::help(string& input, int& begin, int layer_cur) {
    int len_input = input.length();
    if(begin >= len_input) {
        return 0;
    }
    int max_length = 0;
    
    //cout<< "begin:"<< begin<< endl;
    string token_this = "";
    int end = 0;
    string token_next = "";
    int layer_next = this->findNextToken(input, begin, token_next, end);
    //cout<< "token_next:"<< token_next<< endl;
    
    while(layer_next >= layer_cur) {
        //cout<< token_next<< endl;
        if(layer_next == layer_cur) {
            if(token_next.find(".") != std::string::npos) {
                if(token_next.length() > max_length) {
                    max_length = token_next.length();
                }
            } else {
                token_this = token_next;
                //cout<< token_this<< endl;
            }
        } else {
            if(token_next.find(".") != std::string::npos) {
                int len_token_next = token_next.length();
                len_token_next += token_this.length() + 1;
                if(len_token_next > max_length) {
                    max_length = len_token_next;
                }
            } else {
                int max = this->help(input, begin, layer_next);
                if(max > 0) {
                    max += token_this.length() + 1;
                }
                if(max > max_length) {
                    max_length = max;
                }
            }
        }
        begin = end;
        layer_next = this->findNextToken(input, begin, token_next, end);
    }
    
    //cout<< max_length<< endl;
    return max_length;
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

