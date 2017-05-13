/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 9, 2017, 9:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout<< sizeof('c')<< endl;
    cout<< sizeof(double)<< endl;
    // cout<< sizeof(void)<< endl;
    string str1 = "1234567890";
    cout<< sizeof(str1)<< endl;
    
    return 0;
}

