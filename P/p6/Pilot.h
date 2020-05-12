/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pilot.h
 * Author: jgr97
 *
 * Created on 19 de marzo de 2019, 12:31
 */

#ifndef PILOT_H
#define PILOT_H

#include <string>
#include <sstream>
#include "Report.h"
#include "Droid.h"
#include "StarFighter.h"
using namespace std;

class Pilot {
private:
    static int numPilots;
    int idP;
    string name;
    string nationality;
    int numMission;
    long lastMissionDate;
    string lastMissionIncidences;
    StarFighter *vehicle=NULL;
    Droid* auxiliar=NULL;
    
public:
    Pilot();
    Pilot(string _name, string _nat, int _numM, long LMD, string LMI);
    Pilot(const Pilot& orig);
    virtual ~Pilot();
    
    int getIdP();
    int getNumPilots();
    string getName();
    string getNationality();
    int getNumMission();
    long getLastMissionDate();
    string getLastMissionIncidences();
    
    Pilot & setName(string new_);
    Pilot & setNationality(string new_);
    Pilot & setNumMission(int new_);
    Pilot & setLastMissionDate(long new_);
    Pilot & setLastMissionIncidences(string new_);
    
    string toCSV();
    Pilot& operator = ( const Pilot& another );
    
    Report& generateReport();
    Pilot & setSF(StarFighter * _vehicle);
    StarFighter* stopNave();
    Pilot & setDroid(Droid * _auxiliar);
    Droid* noMoreHelp();
    
    void fromCSV(string inputStr);
    

};

#endif /* PILOT_H */


