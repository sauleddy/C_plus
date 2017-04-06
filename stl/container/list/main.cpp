/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 1:49 PM
 */

#include <cstdlib>
#include <list>
#include <iostream>
#include <set>

using namespace std;

void print(std::list<int>& list) {
    cout<< endl;
    std::list<int>::iterator iter = list.begin();
    for(iter; iter!=list.end(); ++iter) {
        cout<< *iter<< ",";
    }
    cout<< endl;
}

bool compare_index(const int t1, const int t2){  
    return t1 > t2; 
}

/*
 * 
 */
int main(int argc, char** argv) {

    std::list<int> listA;
    listA.push_back(2);
    listA.push_back(2);
    listA.push_back(1);
    listA.push_back(5);
    listA.push_back(3);
    print(listA);
    listA.unique();
    print(listA);
    
    //listA.sort(compare_index);
    //print(listA);
    
    std::list<int> listB(++listA.begin(), listA.end());
    print(listB);
    
    return 0;
}

