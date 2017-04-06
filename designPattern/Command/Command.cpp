/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Command.cpp
 * Author: eddy
 * 
 * Created on March 28, 2017, 9:00 AM
 */

#include "Command.h"

Command::Command(Receiver* receiver): p_receiver(receiver) {
}

Command::~Command() {
}

