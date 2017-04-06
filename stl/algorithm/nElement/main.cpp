/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 10:30 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>

using namespace std;

void print(std::vector<int>& vector) {
    cout<< endl;
    std::vector<int>::iterator iter = vector.begin();
    for(iter; iter!=vector.end(); ++iter) {
        cout<< *iter<< ",";
    }
    cout<< endl;
}

bool funcCompare(int iA, int iB) {
    return iA < iB;
}

/*
 * 
 */
int main(int argc, char** argv) {

    int iA[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num = sizeof(iA) / sizeof(int);
    std::vector<int> vecA(iA, iA+num);
    print(vecA);
    
    std::random_shuffle(vecA.begin(), vecA.end());
    print(vecA);
    
    std::nth_element(vecA.begin(), vecA.begin()+3, vecA.end());
    print(vecA);
    
    std::nth_element(vecA.begin(), vecA.begin()+5, vecA.end(), funcCompare);
    print(vecA);
    
    return 0;
}

