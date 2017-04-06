/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteClass.h
 * Author: eddy
 *
 * Created on March 27, 2017, 10:02 AM
 */

#ifndef CONCRETECLASS_H
#define CONCRETECLASS_H

#include "AbtractClass.h"

class ConcreteClass: public AbtractClass {
public:
    ConcreteClass();
    ConcreteClass(const ConcreteClass& orig) = delete;
    virtual ~ConcreteClass();

protected:
    
    void BeginDownload(string srcFile, string destFile);
    void DoDownloadFile(string srcFile, string destFile);
    void EndDownload(string srcFile, string destFile);
   
private:

};

#endif /* CONCRETECLASS_H */

