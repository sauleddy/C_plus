/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 11, 2017, 10:20 PM
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

bool IsOdd (int i) { 
    return ((i%2)==1); 
}

typedef std::vector<int>::iterator iterVec;


/*
 * 
 */
int main(int argc, char** argv) {

    int ia[] = {2, 3, 1 ,3 ,5};
    int arr_size = sizeof(ia) / sizeof(int);
    
    remove_copy_if(ia, ia + arr_size, ostream_iterator<int>(cout, " ")
            , bind2nd(less_equal<int>(), 2));
    cout<< endl;
    
    ostream_iterator<int> ostream(cout, ",");
    ostream = 10;
    ostream = 20;
    cout<< endl;
    
    std::vector<int> vecA;
    vecA.push_back(5);
    vecA.push_back(2);
    vecA.push_back(1);
    vecA.push_back(8);
    vecA.push_back(4);
    std::vector<int> vecB(vecA.size(), 0);
    
    print(vecA);
    
    //iterVec iter = vecA.begin();
    
    remove_copy_if(vecA.begin(), vecA.end(), ostream_iterator<int>(cout, ",")
            , bind(less_equal<int>(), placeholders::_1, 2));
    
    
    remove_copy_if(vecA.begin(), vecA.end(), vecB.begin()
            , bind2nd(less_equal<int>(), 2));
    
    print(vecB);
    
    std::vector<int> vecC(vecA.size(), 0);
    iterVec iterEnd = remove_copy_if(vecA.begin(), vecA.end(), vecC.begin(), IsOdd);
    if(iterEnd != vecC.end())
        vecC.resize(std::distance(vecC.begin(), iterEnd));
    print(vecC);
    
    return 0;
}

