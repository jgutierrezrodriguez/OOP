/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Squad.cpp
 * Author: jgr97
 * 
 * Created on 19 de marzo de 2019, 14:12
 */

#include "Squad.h"
#include <iostream>

Squad::Squad() {
}

Squad::Squad(string name, string base) : name(name), base(base){    
}

Squad::Squad(const Squad& orig) : name(orig.name), base(orig.base) {
}

Squad::~Squad() {
}


string Squad::getName(){
    return name;
}

string Squad::getBase(){
    return base;
}

Squad & Squad::setBase(string _base){
    base=_base;
    
    return (*this);
}

Squad & Squad::setName(string _name){
    name=_name;
    
    return (*this);
}

void Squad::addPilot(Pilot& p){
    pilots[numPilots]=&p;
    numPilots++;
}

Pilot & Squad::deletePilot(int num){
    Pilot *aux = pilots[num];
    delete pilots[num];
    
    return *aux;
}

int Squad::avgMissions(){
    int total=0;
    for(int i=0;i<numPilots;i++)
        total=total+pilots[i]->getNumMission();
    
    return (total/numPilots);
}

void Squad::getNatives(Pilot* pilotsP[], int& num){
    num=0;
    for(int i=0; i<numPilots;i++){
        if(pilots[i]->getNationality()==base){
            pilotsP[num]=pilots[i];
            num++;
        }                    
    }
}