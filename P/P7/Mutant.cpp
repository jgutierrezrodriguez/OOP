/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mutant.cpp
 * Author: jgr97
 * 
 * Created on 6 de abril de 2019, 19:46
 */

#include "Mutant.h"
#include <stdexcept>
#include <sstream>

Mutant::Mutant(string _name, string _aka, int _birtdate, string _nationality) :
realName(_name), aka(_aka), birtdate(_birtdate), nationality(_nationality){
}

Mutant::Mutant(const Mutant& orig) :
realName(orig.realName), aka(orig.aka), birtdate(orig.birtdate), nationality(orig.nationality){
}

Mutant::~Mutant() {
    for(int i=0; i<numPowers;i++){
        delete powers[i];
    }
}

string Mutant::getRealName() const{
    return realName;
}

string Mutant::getAka() const{
    return aka;
}

int Mutant::getBirtdate() const{
    return birtdate;
}

string Mutant::getNationality() const{
    return nationality;
}

int Mutant::getNumPowers() const{
    return numPowers;
}

Power* Mutant::getPower(int pos){
    if ((pos < 0) || (pos >= numPowers)) {
        throw std::invalid_argument("MutantTeam::getMutant: wrong value");
    }

    return powers[pos];
}

void Mutant::setRealName(string _name){
    realName=_name;
    
}

void Mutant::setAka(string _aka){
    aka=_aka;
    
}

void Mutant::setBirtdate(int _birtdate){
    birtdate=_birtdate;

}

void Mutant::setNationality(string _nationality){
    
    nationality=nationality;

}

string Mutant::toCSV() const{
    std::stringstream aux;
    
    aux << realName << ";"
            << aka << ";"
            << birtdate << ";"
            << nationality;

    return aux.str();
}

Mutant& Mutant::operator=(const Mutant& orig) {
    if (this != &orig) {
        realName = orig.realName;
        aka = orig.aka;
        birtdate = orig.birtdate;
        nationality = orig.nationality;

    }

    return  *this;
}

void Mutant::addPower(string name, string description, string affectsTo, float destructiveCapacity){
    
    if (numPowers == MAX_POWERS) {
        throw std::length_error("Mutant::addPower: A mutant can't have more than 10 powers.");
    }
    
    powers[numPowers] = new Power(name, description, affectsTo, destructiveCapacity);
    numPowers++;
}

Power* Mutant::deletePower(int pos){
    
    if ((pos < 0) || (pos >= numPowers)) {
        throw std::invalid_argument("Mutant::deletePower: wrong value");
    }
    
    Power* aux;
    
    aux = powers[pos];
    powers[pos] = NULL;

    if (numPowers > 1) {
        powers[pos] = powers[numPowers - 1];
        powers[numPowers - 1] = 0;
    }

    numPowers--;

    return  aux;
}

float Mutant::totalDestructiveCapacity(){
    float total=0;
    
    for(int i =0; i<numPowers;i++){
        if(powers[i]->getBeAble()==true)
            total=total+powers[i]->getDestructiveCapacity();
    }
    
    return total;
}

void Mutant::addPhysicalPower(string name, string description, string affectsTo, float destructiveCapacity){
    
    if (numPowers == MAX_POWERS) {
        throw std::length_error("Mutant::addPhysicalPower: A mutant can't have more than 10 powers.");
    }
    
    powers[numPowers]=new PhysicalPower(name, description, affectsTo, destructiveCapacity);
    numPowers++;
}

void Mutant::addPsychicalPower(string name, string description, string affectsTo, float destructiveCapacity){
    
    if (numPowers == MAX_POWERS) {
        throw std::length_error("Mutant::addPsychicalPower: A mutant can't have more than 10 powers.");
    }
    
    powers[numPowers]=new PsychicalPower(name, description, affectsTo, destructiveCapacity);
    numPowers++;
}

void Mutant::addPower(Power& _new){
   if (numPowers == MAX_POWERS) {
        throw std::length_error("Mutant::addPower: A mutant can't have more than 10 powers.");
    }
    
    powers[numPowers]=new Power(_new);
    numPowers++; 
}

void Mutant::addPower(PhysicalPower& _new){
    if (numPowers == MAX_POWERS) {
        throw std::length_error("Mutant::addPower: A mutant can't have more than 10 powers.");
    }
    
    powers[numPowers]=new PhysicalPower(_new);
    numPowers++;
}

void Mutant::addPower( PsychicalPower& _new){
    if (numPowers == MAX_POWERS) {
        throw std::length_error("Mutant::addPower: A mutant can't have more than 10 powers.");
    }
    
    powers[numPowers]= new PsychicalPower(_new);
    numPowers++;
}