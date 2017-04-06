/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 9:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#include "myClass.h"

using namespace std;

void funcPrint(int iA) {
    std::ostream_iterator<int> OutputInt(cout, ",");
    OutputInt = iA;
}


/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecA;
    vecA.push_back(10);
    vecA.push_back(5);
    vecA.push_back(20);
    //for_each(vecA.begin(), vecA.end(), funcPrint);
    for_each(vecA.begin(), vecA.end(), myClass());
    
    return 0;
}

