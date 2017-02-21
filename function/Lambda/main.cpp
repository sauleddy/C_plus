/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 21, 2017, 2:43 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

typedef int (*func)(int);

int calculate(func f)
{
     return f(10);
}

/*
 * 
 */
int main(int argc, char** argv) {

    /*
     * Code Assistance->C++ Compiler. In C++ Standard select C++11.
     */
    auto f = [](int iInput) { cout<< "Input="<< iInput<< endl; };
    f(10);
    int iRet = calculate( [](int iInput) -> int { return iInput * 2; });
    cout<< "Return="<< iRet<< endl;
    iRet = calculate( [](int iInput) -> int { return iInput + 2; });
    cout<< "Return="<< iRet<< endl;
    
    return 0;
}

