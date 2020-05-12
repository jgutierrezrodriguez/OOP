/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Power.h
 * Author: jgr97
 *
 * Created on 6 de abril de 2019, 20:45
 */

#ifndef POWER_H
#define POWER_H

#include <string>
using namespace std;

class Power {
private:
    string name = "---";
    string description = "---";
    string affectsTo = "---";
    float destructiveCapacity=0;
    bool beAble=true;

    
public:
    Power()=default;
    Power(string _name, string _description, string _affectsTo, float DC);
    Power(const Power& orig);
    
    virtual ~Power();

    string getName();
    string getDescription();
    string getAffectsTo();
    float getDestructiveCapacity();
    
    Power& setName ( string _new);
    Power& setDescription(string _new);
    Power& setAffectsTo(string _new);
    Power& setDestructiveCapacity(float _new);
    
    void disable();
    void able();
    bool getBeAble();
    
    string toCSV() const;

    Power& operator=(const Power& orig);

};

#endif /* POWER_H */

