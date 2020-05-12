/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PhysicalPower.h
 * Author: jgr97
 *
 * Created on 7 de abril de 2019, 11:42
 */

#ifndef PHYSICALPOWER_H
#define PHYSICALPOWER_H

#include <string>
#include "Power.h"
using namespace std;

class PhysicalPower : public Power {
public:
    
    PhysicalPower(string _name, string _description, string _affectsTo, float DC);
    PhysicalPower(const PhysicalPower& orig);
    virtual ~PhysicalPower();
    
    PhysicalPower& operator=(PhysicalPower &orig);

};

#endif /* PHYSICALPOWER_H */

