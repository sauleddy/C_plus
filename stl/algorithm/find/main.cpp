/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 9:48 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

typedef std::vector<int>::iterator iterVec;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecA = {11, 5, 31};
    
    //iterVec iterRes = std::find(vecA.begin(), vecA.end(), 5);
    iterVec iterRes = std::find_if(vecA.begin(), vecA.end(), [](int iA){return iA == 31;});
    
    if(iterRes != vecA.end())
        cout<< *iterRes<< endl;
    else
        cout<< "cannot find."<< endl;
    
    
    return 0;
}

