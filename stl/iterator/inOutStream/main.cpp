/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 10:22 AM
 */

#include <cstdlib>
#include <iostream>
#include <iterator>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::istream_iterator<int> InputInt(cin);
    int num1 = *InputInt;
    InputInt++;
    int num2 = *InputInt;
    
    cout<< "num1:"<< num1<< ", num2:"<< num2<< endl;
    
    std::ostream_iterator<int> OutputInt(cout);
    *OutputInt = num1 + num2;
    
    
    return 0;
}

