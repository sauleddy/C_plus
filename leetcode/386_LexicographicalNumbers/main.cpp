/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on April 4, 2017, 7:07 PM
 */

#include <cstdlib>
#include <iostream>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Solution m_Solution;
    vector<int> vecRes = m_Solution.lexicalOrder(121);
    for(auto iter=vecRes.begin(); iter!=vecRes.end(); ++iter) {
        cout<< *iter<< ","<< endl;
    }
    return 0;
}

