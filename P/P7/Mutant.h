/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mutant.h
 * Author: jgr97
 *
 * Created on 6 de abril de 2019, 19:46
 */

#ifndef MUTANT_H
#define MUTANT_H

#include <string>
#include "Power.h"
#include "PhysicalPower.h"
#include "PsychicalPower.h"
using namespace std;

class Mutant {
    
public:
      static const int MAX_POWERS=10;  
    
private:
    string realName = "---";
    string aka = "---";
    int birtdate = 0;
    string nationality = "---";
    Power *powers[MAX_POWERS];
    int numPowers=0;
    
public:
    
    
    Mutant()=default;
    Mutant(string _name, string _aka, int _birtdate, string _nationality);
    Mutant(const Mutant& orig);
    virtual ~Mutant();

    string getRealName() const;
    string getAka() const;
    int getBirtdate() const;
    string getNationality() const;
    int getNumPowers() const;
    Power* getPower(int pos);
    
    void setRealName(string _name);
    void setAka( string _aka);
    void setBirtdate (int _birtdate);
    void setNationality(string _nationality);
    
    string toCSV() const;

    Mutant& operator=(const Mutant& orig);
    
        
    void addPower(string name, string description, string affectsTo, float destructiveCapacity);
    Power* deletePower(int pos);
    float totalDestructiveCapacity();
    
    void addPhysicalPower(string name, string description, string affectsTo, float destructiveCapacity);
    void addPsychicalPower(string name, string description, string affectsTo, float destructiveCapacity);
    
    void addPower( Power& _new);
    void addPower( PhysicalPower& _new);
    void addPower( PsychicalPower& _new);

};

#endif /* MUTANT_H */

