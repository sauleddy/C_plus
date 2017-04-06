/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 8, 2017, 4:31 PM
 */

#include <iostream>
#include <cstdlib>
#include <stdarg.h>

using namespace std;

void func(int num, ...) {
    va_list pl;
    va_start(pl, num);
    for(int i=0; i<num; ++i) {
        double dValue = va_arg(pl, double);
        cout<< dValue<< ","<< endl;
    }
    va_end(pl);
}

/*void func(..., int num) {
    va_list pl;
    va_start(pl, num);
    for(int i=0; i<num; ++i) {
        double dValue = va_arg(pl, double);
        cout<< dValue<< ","<< endl;
    }
    va_end(pl);
}*/


/*
 * 
 */
int main(int argc, char** argv) {

    func(3, 1.1, 2.2, 3.3);
    
    return 0;
}

