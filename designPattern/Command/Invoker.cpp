/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Invoker.cpp
 * Author: eddy
 * 
 * Created on March 28, 2017, 8:59 AM
 */

#include "Invoker.h"

Invoker::Invoker() {
}

Invoker::Invoker(const Invoker& orig) {
}

Invoker::~Invoker() {
}

void Invoker::SetCommand(Command* cmd) {
    this->listCommands.push_back(cmd);
}

void Invoker::DoCommand(void) {
    for(auto iter=listCommands.begin(); iter!=listCommands.end(); ++iter) {
        Command* cmdThis = *iter;
        cmdThis->Execute();
    }
}    

