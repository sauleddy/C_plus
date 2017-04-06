/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 25, 2017, 7:57 PM
 */

#include <cstdlib>
#include <unordered_map>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::unordered_map<int, int> umapA;
    cout<< umapA.size()<< endl;
    cout<< umapA[0]<< endl;
    umapA[0] = 10;
    cout<< umapA.size()<< endl;
    if(umapA.find(1) == umapA.end()) {
        cout<< "cannot find"<< endl;
    }
    
    return 0;
}

