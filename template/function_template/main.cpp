/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 21, 2017, 9:58 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

template<typename T1>
//T1 do_something(const T1& a, const T1& b) {
T1 do_something(const T1& a, const T1& b) {
    return a + b;
}

/*
 * 
 */
int main(int argc, char** argv) {
    cout<< do_something(1, 2)<< endl;
    cout<< do_something(1.3, 2.5)<< endl;
    
    return 0;
}

