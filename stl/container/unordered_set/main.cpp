/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 4:04 PM
 */

#include <cstdlib>
#include <unordered_set>
#include <iostream>

using namespace std;

typedef std::unordered_set<int>::iterator iterUSet;

void print(std::unordered_set<int>& set) {
    cout<< endl;
    iterUSet iter = set.begin();
    for(iter; iter!=set.end(); ++iter) {
        cout<< *iter<< ",";
    }
    cout<< endl;
}

/*
 * 
 */
int main(int argc, char** argv) {

    std::unordered_set<int> usetA;
    usetA.insert(5);
    usetA.insert(10);
    usetA.insert(1);
    print(usetA);
    
    
    //cout<< usetA[10]<< endl;
    
    return 0;
}

