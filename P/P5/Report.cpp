/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Report.cpp
 * Author: jgr97
 * 
 * Created on 11 de marzo de 2019, 20:34
 */

#include "Report.h"

long Report::numReports=0;

Report::Report() {
}

Report::Report(int idP, int idSF_, int idDroi, long SD, string infor) : idPilot(idP),
        idSF(idSF_), idDroid(idDroi),StellarDate(SD), info(infor){
    numReports++;
    idR=numReports;
}

Report::Report(const Report& orig) : idPilot(orig.idPilot), StellarDate(orig.StellarDate), info(orig.info) {
    numReports++;
    idR=numReports;
}

Report::~Report() {
}

int Report::getIdPilot(){
    return idPilot;
}

int Report::getIdR(){
    return idR;
}

long Report::getNumReports(){
    return numReports;
}

long Report::getStellarDate(){
    return StellarDate;
}

string Report::getInfo(){
    return info;
}

Report& Report::setIdPilot(int new_){
    idPilot=new_;
    
    return *this;
}

Report& Report::setInfo(string new_){
    info=new_;
    
    return *this;
}

Report& Report::setStellarDate(long new_){
    StellarDate=new_;
    
    return *this;
}


string Report::toCSV(){
    string ret;
    
    ret = to_string(idR)+(string)";"+to_string(idPilot)+(string)";"+
            to_string(StellarDate)+(string)";"+info;
    return ret;
}


Report& Report::operator = ( const Report& another )
{
   if ( this != &another )
   {
      idPilot = another.idPilot;
      StellarDate = another.StellarDate;
      info = another.info;
   }
   
   return ( *this );
}