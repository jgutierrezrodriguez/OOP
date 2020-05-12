/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Club.cpp
 * Author: jgr97
 * 
 * Created on 18 de febrero de 2019, 23:48
 */

#include "Club.h"

const string file="Club.h";

Club::Club():name((string)""),address((string)""){   
};

Club::Club(string name_, string address_) : name(name_), address(address_){
    const string function="Parameter constructor";
    if(name_.length()<=3){
        const string description="The name of the club has to have more than 3 characters.";
        throw NotValidParameter(file,function,description);
    }
    if(address_.length()<=3){
        const string description="The address of the club has to have more than 3 characters.";
        throw NotValidParameter(file,function,description);
    }
        
}

Club::Club(const Club& orig) : name(orig.name), address(orig.address) {
}

Club::~Club() {
}

string Club::getName(){
    return name;
}

string Club::getAddress(){
    return address;
}

void Club::setName(string new_name){
    const string function="setName";
    if(new_name.length()<=3){
        const string description="The name of the club has to have more than 3 characters.";
        throw NotValidParameter(file,function,description);
    }
    else
        name=new_name;
}

void Club::setAddress(string new_address){
    const string function="setAddress";
    if(new_address.length()<=3){
        const string description="The address of the club has to have more than 3 characters.";
        throw NotValidParameter(file,function,description);
    }
    else
        address=new_address;
}

string Club::toCSV(){
    string to_csv=name+(string)";"+address;
    return to_csv;
}

