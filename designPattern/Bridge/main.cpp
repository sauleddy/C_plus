/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 21, 2017, 9:30 AM
 */

#include <cstdlib>
#include "ConcreteImplementator.h"
#include "RefinedAbstraction.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ConcreteImplementator* p_imple1 = new ConcreteImplementator();
    Abstraction* p_Abstration = new RefinedAbstraction(p_imple1);
    
    p_Abstration->operation();
    
    delete p_Abstration;
    delete p_imple1;
    
    return 0;
}

