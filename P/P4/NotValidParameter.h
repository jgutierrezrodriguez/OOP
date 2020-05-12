/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NotValidParameter.h
 * Author: jgr97
 *
 * Created on 4 de marzo de 2019, 23:29
 */

#ifndef NOTVALIDPARAMETER_H
#define NOTVALIDPARAMETER_H

#include <string>
#include "NotValidParameter.h"
using namespace std;

class NotValidParameter {
private:
    string file;
    string function;
    string description;
    
public:
    NotValidParameter(string file, string function, string description);
    
    string whatHappen();


};

#endif /* NOTVALIDPARAMETER_H */

