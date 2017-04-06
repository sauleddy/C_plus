/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbtractClass.h
 * Author: eddy
 *
 * Created on March 27, 2017, 10:02 AM
 */

#ifndef ABTRACTCLASS_H
#define ABTRACTCLASS_H

#include <iostream>

using namespace std;

class AbtractClass {
public:
    AbtractClass();
    AbtractClass(const AbtractClass& orig) = delete;
    virtual ~AbtractClass();
    
    void DownloadFile(string srcFile, string destFile);

protected:
    
    virtual void BeginDownload(string srcFile, string destFile) = 0;
    virtual void DoDownloadFile(string srcFile, string destFile) = 0;
    virtual void EndDownload(string srcFile, string destFile) = 0;
    
private:

};

#endif /* ABTRACTCLASS_H */

