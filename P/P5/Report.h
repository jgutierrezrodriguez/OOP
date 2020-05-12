/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Report.h
 * Author: jgr97
 *
 * Created on 11 de marzo de 2019, 20:34
 */

#ifndef REPORT_H
#define REPORT_H

#include <string>
using namespace std;

class Report {
private:
    static long numReports;
    int idR;
    int idPilot;
    int idSF;
    int idDroid;
    long StellarDate;
    string info;
    
    
public:
    Report();
    Report(int idP, int idSF_, int idDroi, long SD, string infor);
    Report(const Report& orig);
    virtual ~Report();
    
    long getNumReports();
    int getIdR();
    int getIdPilot();
    long getStellarDate();
    string getInfo();
    
    Report& setIdPilot(int new_);
    Report& setStellarDate(long new_);
    Report& setInfo(string new_);

    string toCSV();
    Report& operator = ( const Report& another );

};

#endif /* REPORT_H */

