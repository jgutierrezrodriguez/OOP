/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Squad.h
 * Author: jgr97
 *
 * Created on 19 de marzo de 2019, 14:12
 */

#ifndef SQUAD_H
#define SQUAD_H

#include "Pilot.h"
#include <string>
using namespace std;


class Squad {
private:
    Pilot *pilots[50];
    int numPilots=0;
    string name;
    string base;
    
public:
    Squad();
    Squad(string name, string base);
    Squad(const Squad& orig);
    virtual ~Squad();
    
    string getName();
    string getBase();
    Squad& setName(string _name);
    Squad& setBase(string _base);
    
    void addPilot(Pilot &p);
    Pilot & deletePilot(int num);
    
    int avgMissions();
    
    void getNatives(Pilot *pilotsP[], int &num);

};

#endif /* SQUAD_H */

