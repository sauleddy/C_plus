/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 9, 2017, 3:01 PM
 */

#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    vector<string> vecInput;
    vecInput.push_back("Hello");
    vecInput.push_back("Alaska");
    vecInput.push_back("dad");
    vecInput.push_back("Peace");
    vecInput.push_back("sonic");
    vecInput.push_back("ss");
    Solution m_Solution;
    vector<string> vecRet = m_Solution.findWords(vecInput);
    
    vector<string>::iterator iter = vecRet.begin();
    for(iter; iter!=vecRet.end(); ++iter)
        cout<< *iter<< endl;
    
    return 0;
}

