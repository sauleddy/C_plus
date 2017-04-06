/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   String.h
 * Author: eddy
 *
 * Created on February 24, 2017, 3:22 PM
 */

#ifndef STRING_H
#define STRING_H

class StringA {
public:
    //StringA(void) = default;
    StringA(void);
    //StringA(const char* str) = delete;
    StringA(const char* str);
    StringA(const StringA& orig);
    virtual ~StringA();
    StringA& operator=(const StringA& orig);
    
    /*
     * return StringA& instead of StringA in order to avoid too many constructor and destructor called 
     */
    //StringA operator=(const StringA& orig);
    
    /*
     * use parameter StringA& instead of StringA in order to avoid too many constructor and destructor called 
     */
    //StringA& operator=(const StringA orig);
    
private:
    char* myString;
};

#endif /* STRING_H */

