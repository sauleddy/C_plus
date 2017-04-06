/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 28, 2017, 8:55 AM
 */

#include <cstdlib>

#include "ConcreteCommand.h"
#include "Receiver.h"
#include "Invoker.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Receiver* p_receiver = new Receiver();
    ConcreteCommand* cmd = new ConcreteCommand(p_receiver);
    
    Invoker* p_Invoker = new Invoker();
    p_Invoker->SetCommand(cmd);
    p_Invoker->DoCommand();
    
    delete cmd;
    delete p_receiver;
    
    return 0;
}

