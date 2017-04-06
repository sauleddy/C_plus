/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 2:20 PM
 */

#include <cstdlib>
#include <set>
#include <iostream>

using namespace std;

void print(std::set<int>& set) {
    cout<< endl;
    std::set<int>::iterator iter = set.begin();
    for(iter; iter!=set.end(); ++iter) {
        cout<< *iter<< ",";
    }
    cout<< endl;
}

void printMSet(std::multiset<int>& set) {
    cout<< endl;
    std::multiset<int>::iterator iter = set.begin();
    for(iter; iter!=set.end(); ++iter) {
        cout<< *iter<< ",";
    }
    cout<< endl;
}

bool fncomp(int lhs, int rhs) {
    return lhs < rhs;
}

typedef std::multiset<int>::iterator ItMSet;

/*
 * 
 */
int main(int argc, char** argv) {

    std::set<int> setA;
    setA.insert(10);
    setA.insert(5);
    setA.insert(20);
    setA.insert(5);
    print(setA);
    
    std::set<int>::iterator iterA = setA.upper_bound(10);
    //std::set<int>::iterator iterA = setA.lower_bound(11);
    for(iterA; iterA!=setA.end(); ++iterA) {
        cout<< "lower bound:"<< *iterA<< ",";
    }
    
    std::set<int> setB(++setA.begin(), setA.end());
    print(setB);
    
    setB.erase(10);
    print(setB);
    
    std::multiset<int> multisetA(setA.begin(), setA.end());
    printMSet(multisetA);
    multisetA.insert(10);
    printMSet(multisetA);
    int count = multisetA.count(10);
    cout<< "count of 10:"<< count<< endl;
    std::pair< ItMSet, ItMSet > pairA = multisetA.equal_range(10);
    
    ItMSet iterMSetA = pairA.first;
    for(iterMSetA; iterMSetA!=pairA.second; ++iterMSetA) {
        cout<< *iterMSetA<< ",";
    }
    cout<< endl;
    
    
    return 0;
}

