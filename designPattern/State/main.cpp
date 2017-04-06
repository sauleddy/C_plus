/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 24, 2017, 9:38 AM
 */

#include <cstdlib>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Strategy* p_A = new ConcreteStrategyA();
    Strategy* p_B = new ConcreteStrategyB();
    
    Context p_Context(p_B);
    p_Context.ContextInterface();
    p_Context.ChangeStrategy(p_A);
    p_Context.ContextInterface();
    
    delete p_A;
    delete p_B;
    
    return 0;
}

