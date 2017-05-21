/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 17, 2017, 9:50 AM
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
    cout<< m_Solution.minDistance("dinitrophenylhydrazine", "acetylphenylhydrazine")<< endl;
    // cout<< m_Solution.minDistance("ophenylhydrazine", "lphenylhydrazine")<< endl;
    return 0;
}

