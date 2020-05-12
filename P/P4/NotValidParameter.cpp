/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NotValidParameter.cpp
 * Author: jgr97
 * 
 * Created on 4 de marzo de 2019, 23:29
 */

#include "NotValidParameter.h"

NotValidParameter::NotValidParameter(string file, string function, string description)
                                    : file(file), function(function), description(description){
}

string NotValidParameter::whatHappen(){
    return ((string)file+": "+function+": "+description);
}

