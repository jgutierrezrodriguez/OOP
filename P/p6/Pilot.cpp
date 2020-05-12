/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pilot.cpp
 * Author: jgr97
 * 
 * Created on 19 de marzo de 2019, 12:31
 */

#include "Pilot.h"
#include "StarFighter.h"
int Pilot::numPilots=0;

Pilot::Pilot() {
}

Pilot::Pilot(string _name, string _nat, int _numM, long LMD, string LMI)
            :name(_name), nationality(_nat), numMission(_numM),lastMissionDate(LMD),
        lastMissionIncidences(LMI){
    numPilots++;
    idP=numPilots;
}

Pilot::Pilot(const Pilot& orig) :name(orig.name), nationality(orig.nationality), 
        numMission(orig.numMission),lastMissionDate(orig.lastMissionDate),
        lastMissionIncidences(orig.lastMissionIncidences) {
     numPilots++;
    idP=numPilots;
}

Pilot::~Pilot() {
}

int Pilot::getIdP(){
    return idP;
}

int Pilot::getNumMission(){
    return numMission;
}

int Pilot::getNumPilots(){
    return numPilots;
}

long Pilot::getLastMissionDate(){
    return lastMissionDate;
}

string Pilot::getLastMissionIncidences(){
    return lastMissionIncidences;
}

string Pilot::getName(){
    return name;
}

string Pilot::getNationality(){
    return nationality;
}

Pilot & Pilot::setLastMissionDate(long new_){
    lastMissionDate=new_;
    
    return *this;
}

Pilot & Pilot::setLastMissionIncidences(string new_){
    lastMissionIncidences=new_;
    
    return *this;
}

Pilot & Pilot::setName(string new_){
    name=new_;
    
    return *this;
}

Pilot & Pilot::setNationality(string new_){
    nationality=new_;
    
    return *this;
}

Pilot & Pilot::setNumMission(int new_){
    numMission=new_;
    
    return *this;
}

string Pilot::toCSV(){
    string ret;
    
    ret = to_string(idP)+(string)";"+name+(string)";"+nationality+(string)";"+to_string(numMission)
            +(string)";"+to_string(lastMissionDate)+(string)";"+lastMissionIncidences;
    return ret;
}

Pilot& Pilot::operator = ( const Pilot& another ){
   if ( this != &another )
   {
      name = another.name;
      nationality = another.nationality;
      numMission = another.numMission;
      lastMissionDate = another.lastMissionDate;
      lastMissionIncidences = another.lastMissionIncidences;
   }
   
   return ( *this );
}

Pilot & Pilot::setSF(StarFighter * _vehicle){
    vehicle=_vehicle;
    return ( *this );
}

StarFighter* Pilot::stopNave(){
     StarFighter *aux = vehicle;
     vehicle = NULL;
     return aux;
}

Pilot & Pilot::setDroid(Droid * _auxiliar){
    auxiliar=_auxiliar;
    return ( *this );
}

Droid* Pilot::noMoreHelp(){
    Droid* aux=auxiliar;
    auxiliar=NULL;
    return aux;
}

Report& Pilot::generateReport(){
    Report ret(idP,vehicle->getIdSF(),auxiliar->getIdD(),0,lastMissionIncidences);
    return ret;
}
void Pilot::fromCSV(string inputStr){
    stringstream ss;
    ss.str(inputStr);
    
    getline(ss,name,';');
    getline(ss,nationality,';');
    ss >> numMission;
    ss.ignore(1);   
    ss >>lastMissionDate;
    ss.ignore(1);
    getline(ss,lastMissionIncidences,';');
}
