/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 10:41 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <vector>

using namespace std;

typedef std::vector<int>::iterator iterVec;


/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecA = {0, 1, 2, 3, 3, 3, 4, 5, 6, 7};
    
    std::pair<iterVec, iterVec> bound = std::equal_range(vecA.begin(), vecA.end(), 3);
    std::for_each(bound.first, bound.second, [](int iA) {cout<< iA<< endl;});
    
    if(std::binary_search(vecA.begin(), vecA.end(), 10) == true)
        cout<< "find"<< endl;
    else
        cout<< "cannot find"<< endl;
    
    return 0;
}

