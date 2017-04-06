/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteCommand.cpp
 * Author: eddy
 * 
 * Created on March 28, 2017, 9:00 AM
 */

#include "ConcreteCommand.h"

ConcreteCommand::ConcreteCommand(Receiver* receiver): Command(receiver) {
}

ConcreteCommand::~ConcreteCommand() {
}

void ConcreteCommand::Execute(void) {
    if(p_receiver) {
        p_receiver->Action();
    }
}

