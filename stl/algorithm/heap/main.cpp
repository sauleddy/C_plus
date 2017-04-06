/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 11:09 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>

using namespace std;

typedef std::vector<int>::iterator iterVec;

void print(std::vector<int>& vector) {
    cout<< endl;
    std::vector<int>::iterator iter = vector.begin();
    for(iter; iter!=vector.end(); ++iter) {
        cout<< *iter<< ",";
    }
    cout<< endl;
}

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecA = {1, 3, 5, 2, 10, 30, 15};
    std::make_heap(vecA.begin(), vecA.end());
    print(vecA);
    cout<< vecA.front()<< endl;
    
    std::pop_heap(vecA.begin(), vecA.end());
    cout<< vecA.front()<< endl;
    
    vecA.push_back(99);
    std::push_heap(vecA.begin(), vecA.end());
    cout<< vecA.front()<< endl;
    
    std::sort_heap(vecA.begin(), vecA.end());
    print(vecA);
    
    std::make_heap(vecA.begin(), vecA.end());
    print(vecA);
    
    if(std::is_heap(vecA.begin(), vecA.end()) == true)
        cout<< "heap"<< endl;
    else
        cout<< "not heap<< endl";
    
    return 0;
}

