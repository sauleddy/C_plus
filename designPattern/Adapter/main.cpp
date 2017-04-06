/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 20, 2017, 9:07 AM
 */

#include <cstdlib>
#include <iostream>
#include "Adapter.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Target* p_Target = new Adapter();
    p_Target->request();
    
    delete p_Target;
    
    return 0;
}

