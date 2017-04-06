/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteCommand.h
 * Author: eddy
 *
 * Created on March 28, 2017, 9:00 AM
 */

#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

#include "Command.h"

class ConcreteCommand: public Command {
public:
    ConcreteCommand(Receiver* receiver);
    ConcreteCommand(const ConcreteCommand& orig) = delete;
    virtual ~ConcreteCommand();
    
    void Execute(void);
    
private:

};

#endif /* CONCRETECOMMAND_H */

