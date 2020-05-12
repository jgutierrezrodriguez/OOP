/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PsychicalPower.cpp
 * Author: jgr97
 * 
 * Created on 7 de abril de 2019, 11:43
 */

#include "PsychicalPower.h"

PsychicalPower::PsychicalPower(string _name, string _description, string _affectsTo, float DC, float _lucidity) :
                Power(_name,_description,_affectsTo,DC),lucidity(_lucidity){
}

PsychicalPower::PsychicalPower(const PsychicalPower& orig) {
    this->Power::operator =(orig);
    lucidity=orig.lucidity;
}

PsychicalPower::~PsychicalPower() {
}

PsychicalPower& PsychicalPower::operator =(const PsychicalPower& orig){
    if(this!=&orig){
        this->Power::operator =(orig);
        lucidity=orig.lucidity;
    }
    return *this;
}

void PsychicalPower::setLucidity(float _new){
    if ((_new < 0) || (_new > 1)) {
        //throw std::invalid_argument("PsychicalPower::setLucidity: value out of range.");
    }
    
    lucidity=_new;
}

float PsychicalPower::getLucidity(){
    return lucidity;
}

float PsychicalPower::getDestructiveCapacity(){
    return (this->Power::getDestructiveCapacity() * lucidity);
}