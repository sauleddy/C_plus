/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Logger.h
 * Author: eddy
 *
 * Created on March 17, 2017, 10:10 AM
 */

#ifndef LOGGER_H
#define LOGGER_H

class Logger {
public:
    
    static Logger* getInstance(void);
    static Logger* freeInstance(void);
    
    void show(void);
    
private:
    
    Logger();
    Logger(const Logger& orig);
    virtual ~Logger();
    
    static Logger* p_Instance;
};

#endif /* LOGGER_H */

