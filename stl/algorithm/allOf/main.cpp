/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 9:39 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecA = {11, 5, 31};
    
    bool bRes = std::all_of(vecA.begin(), vecA.end(), [](int iA){return iA % 2;});
    cout<< bRes<< endl;
    
    cout<< std::any_of(vecA.begin(), vecA.end(), [](int iA){return iA > 20;})<< endl;
    
    cout<< std::none_of(vecA.begin(), vecA.end(), [](int iA){return iA < 0;})<< endl;
    
    return 0;
}

