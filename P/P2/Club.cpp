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

Club::Club(string name, string address) : name(name), address(address){
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
    name=new_name;
}

void Club::setAddress(string new_address){
    address=new_address;
}

