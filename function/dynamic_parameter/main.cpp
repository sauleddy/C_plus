/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 21, 2017, 2:34 PM
 */

#include <cstdlib>
#include <cstdarg>
#include <iostream>

using namespace std;

int integer_sum(int n_args, ...)
{
   int iSum = 0;
   va_list ap;
   va_start(ap, n_args);
   for(int i=0; i<n_args; ++i)
   {
       iSum += va_arg(ap, int);
   }
   va_end(ap);
   return iSum;
}

/*
 * 
 */
int main(int argc, char** argv) {

    int iSum = integer_sum(2, 1, 2 , 5);
    cout<< "iSum="<< iSum<< endl;
    
    return 0;
}

