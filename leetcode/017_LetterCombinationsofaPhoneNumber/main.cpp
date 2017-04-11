/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on April 11, 2017, 2:38 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Solution m_Solution;
    std::vector<string> vecRet = m_Solution.letterCombinations("23");
    for(auto iter=vecRet.begin(); iter!=vecRet.end(); ++iter) {
        cout<< *iter<< endl;
    }
    return 0;
}

