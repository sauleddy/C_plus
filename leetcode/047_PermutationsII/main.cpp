/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 4, 2017, 9:55 AM
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
    vector<int> vecThis = {1, 1, 2};
    vector<vector<int>> resMatrix = m_Solution.permuteUnique(vecThis);
    
    for(int i=0; i<resMatrix.size(); ++i) {
        for(int j=0; j<resMatrix[0].size(); ++j) {
            cout<< resMatrix[i][j]<< ",";
        }
        cout<< endl;
    }
    
    return 0;
}

