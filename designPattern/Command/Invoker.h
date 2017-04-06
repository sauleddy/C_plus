/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Invoker.h
 * Author: eddy
 *
 * Created on March 28, 2017, 8:59 AM
 */

#ifndef INVOKER_H
#define INVOKER_H

#include <list>
#include "Command.h"

class Invoker {
public:
    Invoker();
    Invoker(const Invoker& orig);
    virtual ~Invoker();
    
    void SetCommand(Command* cmd);
    void DoCommand(void);
    
private:

    std::list<Command*> listCommands;
    
};

#endif /* INVOKER_H */

