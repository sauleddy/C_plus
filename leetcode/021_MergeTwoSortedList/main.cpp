/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 9, 2017, 5:02 PM
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

    std::vector<int> vecA = {0, 3, 10, 20, 30};
    std::vector<int> vecB = {5, 8, 20, 25, 50};
    std::vector<int> vecC(vecA.size() + vecB.size());
    std::merge(vecA.begin(), vecA.end(), vecB.begin(), vecB.end(), vecC.begin());
    print(vecC);
    
    std::vector<int> vecD(vecA.size() + vecB.size());
    iterVec iterEnd = std::set_union(vecA.begin(), vecA.end(), vecB.begin(), vecB.end(), vecD.begin());
    vecD.resize(std::distance(vecD.begin(), iterEnd));
    print(vecD);
    
    std::vector<int> vecE(vecA.size() + vecB.size());
    iterEnd = std::set_intersection(vecA.begin(), vecA.end(), vecB.begin(), vecB.end(), vecE.begin());
    vecE.resize(std::distance(vecE.begin(), iterEnd));
    print(vecE);
    
    std::vector<int> vecF(vecA.size() + vecB.size());
    iterEnd = std::set_difference(vecA.begin(), vecA.end(), vecB.begin(), vecB.end(), vecF.begin());
    vecF.resize(std::distance(vecF.begin(), iterEnd));
    print(vecF);
    
    std::vector<int> vecG(vecA.size() + vecB.size());
    iterEnd = std::set_symmetric_difference(vecA.begin(), vecA.end(), vecB.begin(), vecB.end(), vecG.begin());
    vecG.resize(std::distance(vecG.begin(), iterEnd));
    print(vecG);
    
    return 0;
}

