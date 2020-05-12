/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PhysicalPower.cpp
 * Author: jgr97
 * 
 * Created on 7 de abril de 2019, 11:42
 */

#include "PhysicalPower.h"

PhysicalPower::PhysicalPower(string _name, string _description, string _affectsTo, float DC) :
                Power(_name,_description,_affectsTo,DC){
}

PhysicalPower::PhysicalPower(const PhysicalPower& orig) :
                Power(orig){
}

PhysicalPower::~PhysicalPower() {
}

PhysicalPower& PhysicalPower::operator =(PhysicalPower& orig){
     if(this!=&orig)
        this->Power::operator =(orig);
    
    return *this;
}
