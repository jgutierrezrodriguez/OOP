/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PsychicalPower.h
 * Author: jgr97
 *
 * Created on 7 de abril de 2019, 11:43
 */

#ifndef PSYCHICALPOWER_H
#define PSYCHICALPOWER_H

#include <string>
#include "Power.h"
using namespace std;

class PsychicalPower : public Power{
private:
    float lucidity=0;
    
public:
    PsychicalPower(string _name, string _description, string _affectsTo, float DC, float _lucidity);
    PsychicalPower(const PsychicalPower& orig);
    virtual ~PsychicalPower();
    
    PsychicalPower& operator=(const PsychicalPower &orig);
    
    void setLucidity(float _new);
    float getLucidity();
    
    virtual float getDestructiveCapacity() override;
};

#endif /* PSYCHICALPOWER_H */

