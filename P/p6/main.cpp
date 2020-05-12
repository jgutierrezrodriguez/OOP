/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 19 de marzo de 2019, 12:25
 */

#include <cstdlib>
#include <iostream>
#include "Pilot.h"
#include "Droid.h"
#include "Report.h"
#include "StarFighter.h"
#include "Squad.h"
#include "Piece.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string pilotsData[5] = {"Dameron Poe;Jakku;20;123456;---", 
                             "Anakin Skywalker;Jakku;30;126756;Derribados 3 cazas enemigos", 
                             "Han Solo;Corellia;50;126786;Impacto en motor izquierdo", 
                             "Chewbacca;Alderaan;10;136786;---", 
                             "Leia Organa;Alderaan;60;126336;Derribados 10 cazas enemigos"};
    
    Pilot pilot[5];
    
    for(int i=0;i<5;i++){
         pilot[i].fromCSV(pilotsData[i]);
    }
    
    Squad squad1 ((string)"StellarPolice",(string)"Jakku");
    Squad squad2 ((string)"EarthrPolice",(string)"Alderaan");
    
    squad1.addPilot(pilot[0]);
    squad1.addPilot(pilot[1]);
    
    
    squad2.addPilot(pilot[2]);
    squad2.addPilot(pilot[3]);
    squad2.addPilot(pilot[4]);
    
    cout<<"Squad 1: "<<squad1.getName()<<"\tAvg number of missions: "<<squad1.avgMissions()<<endl;
    cout<<"Squad 2: "<<squad2.getName()<<"\tAvg number of missions: "<<squad2.avgMissions()<<endl;
    
    StarFighter nave1((string)"Kuat Systems",(string)"Delta 7-1",1);
    StarFighter nave2((string)"Incom Corporation",(string)"T-65B X-wing",1);
    
    Piece piece1((string)"Piece1",(float)15.7,(string)"");
    Piece piece2((string)"Piece2",(float)9.8,(string)"");
    Piece piece3((string)"Piece3",(float)8.8,(string)"");
    Piece piece4((string)"Piece4",(float)10,(string)"");
    Piece piece5((string)"Piece5",(float)21.8,(string)"");
    Piece piece6((string)"Piece6",(float)3,(string)"");
    
    nave1.addPiece(piece1);
    nave1.addPiece(piece2);
    nave1.addPiece(piece3);
    
    nave2.addPiece(piece4);
    nave2.addPiece(piece5);
    nave2.addPiece(piece6);
    
    cout<<"\nNave1: "<<nave1.getBrand()<<"Weight: "<<nave1.calculateWeight()<<endl;
    cout<<"Nave2: "<<nave2.getBrand()<<"Weight: "<<nave2.calculateWeight()<<endl;
    
    
    Pilot * pilotsP1[50];
    int numP1=0;
    
    Pilot * pilotsP2[50];
    int numP2=0;
    
    squad1.getNatives(pilotsP1,numP1);
    squad2.getNatives(pilotsP2,numP2);
    
    cout<<"\nNave 1 Base: "<<squad1.getBase()<<"\tName of natives: ";
    for(int i=0;i<numP1;i++){
        cout << pilotsP1[i]->getName()<<" ";
    }
    cout<<"\nNave 2 Base: "<<squad2.getBase()<<"\tName of natives: ";
    for(int i=0;i<numP2;i++){
        cout << pilotsP2[i]->getName()<<" ";
    }
}

