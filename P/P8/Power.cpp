/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Power.cpp
 * Author: jgr97
 * 
 * Created on 6 de abril de 2019, 20:45
 */

#include "Power.h"
#include <stdexcept>
#include <sstream>

Power::Power(string _name, string _description, string _affectsTo, float DC) :
name(_name), description(_description), affectsTo(_affectsTo), destructiveCapacity(DC)
{
}

Power::Power(const Power& orig) :
name(orig.name), description(orig.description), affectsTo(orig.affectsTo), destructiveCapacity(orig.destructiveCapacity)
{
}

Power::~Power() {
}

string Power::getName(){
    return name;
}

string Power::getDescription(){
    return description;
}

string Power::getAffectsTo(){
    return affectsTo;
}

float Power::getDestructiveCapacity(){
    return destructiveCapacity;
}

Power& Power::setName(string _new){
    name=_new;
    
    return (*this);
}

Power& Power::setDescription(string _new){
    description=_new;
    
    return (*this);
}

Power& Power::setAffectsTo(string _new){
    affectsTo=_new;
    
    return (*this);
}

Power& Power::setDestructiveCapacity(float _new){
    destructiveCapacity=_new;
    
    return (*this);
}

string Power::toCSV() const{
    std::stringstream aux;
    
    aux << name << ";"
            << description << ";"
            << affectsTo << ";"
            << destructiveCapacity;

    return aux.str();
}

Power& Power::operator =(const Power& orig){
    
    if(this!=&orig){
        name=orig.name;
        description=orig.description;
        affectsTo=orig.affectsTo;
        destructiveCapacity=orig.destructiveCapacity;
    }
    
    return *this;
}


void Power::disable(){
    beAble=false;
}

void Power::able(){
    beAble=true;
}

bool Power::getBeAble(){
    return beAble;
}