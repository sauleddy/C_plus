/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 6, 2017, 9:18 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Solution m_Solution;
    vector<int> gas = {99, 98, 97, 100};
    vector<int> cost = {100, 100, 100, 97};
    cout<< m_Solution.canCompleteCircuit(gas, cost)<< endl;
    
    return 0;
}

