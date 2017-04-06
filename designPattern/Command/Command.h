/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Command.h
 * Author: eddy
 *
 * Created on March 28, 2017, 9:00 AM
 */

#ifndef COMMAND_H
#define COMMAND_H

#include "Receiver.h"

class Command {
public:
    Command(Receiver* receiver);
    Command(const Command& orig) = delete;
    virtual ~Command();
    
    virtual void Execute(void) = 0;
    
protected:

    Receiver* p_receiver;
    
};

#endif /* COMMAND_H */

