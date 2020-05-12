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

PsychicalPower::PsychicalPower(string _name, string _description, string _affectsTo, float DC) :
                Power(_name,_description,_affectsTo,DC){
}

PsychicalPower::PsychicalPower(const PsychicalPower& orig) :
Power(orig){   
}

PsychicalPower::~PsychicalPower() {
}

PsychicalPower& PsychicalPower::operator =(const PsychicalPower& orig){
    if(this!=&orig)
        this->Power::operator =(orig);
    
    return *this;
}

