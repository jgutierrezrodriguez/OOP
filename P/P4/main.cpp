/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 4 de marzo de 2019, 23:26
 */

#include <cstdlib>
#include "Theme.h"
#include "Club.h"
#include "Date.h"
#include "auxMod.h"
#include <ctime>
#include <iostream>
#include "NotValidParameter.h"

using namespace std;

int main(int argc, char** argv) {
    
    Club *arrayClubs[10];
    
    for(int i=0; i<10; i++){
        arrayClubs[i]=new Club();
    }
    
    Theme arrayThemes[3];
    
    Date myBirthday(3,2,1997);
    Date lastChampionsMadrid(26,5,2018);
    Date lastChampionsBarcelona(6,4,2015);
    
    arrayClubs[0]->setAddress((string)"Carretera de Madrid, km. 333 s/n, 23009 Jaen");
    arrayClubs[0]->setName((string)"Kharma");
    
    arrayClubs[1]->setAddress((string)"Calle del Arenal, 11,Madrid");
    arrayClubs[1]->setName((string)"Joy Eslava");
    
    arrayThemes[0].setTitle((string)"Despacito");
    arrayThemes[0].setLength(400);
    arrayThemes[0].setPerformer((string)"Luis Fonsi");
    arrayThemes[0].setLastUse(myBirthday);
    arrayThemes[0].setLastClub(arrayClubs[0]->getName());
    arrayThemes[0].setScore(0);
    
    arrayThemes[1].setTitle((string)"Despacito 2");
    arrayThemes[1].setLength(320);
    arrayThemes[1].setPerformer((string)"Luis Fonsi");
    arrayThemes[1].setLastUse(lastChampionsBarcelona);
    arrayThemes[1].setLastClub(arrayClubs[0]->getName());
    arrayThemes[1].setScore(0);
    
    arrayThemes[2].setTitle((string)"Despacito 3");
    arrayThemes[2].setLength(500);
    arrayThemes[2].setPerformer((string)"Luis Fonsi");
    arrayThemes[2].setLastUse(lastChampionsMadrid);
    arrayThemes[2].setLastClub(arrayClubs[0]->getName());
    arrayThemes[2].setScore(0);
    
    
    cout<<"Muestra la informacion en formato CSS:\n";
    for(int i=0;i<2;i++){
        cout<<"\n";
        cout<<arrayClubs[0]->toCSV()<<endl;
        cout<<arrayClubs[1]->toCSV()<<endl;
        
        cout<<arrayThemes[0].toCSV()<<endl;
        cout<<arrayThemes[1].toCSV()<<endl;
        cout<<arrayThemes[2].toCSV()<<endl;   
    }
    
    cout<<"\nThe shortest length is: "<<arrayThemes[2].getShortestLength();
    
    
    for(int i=0;i<10;i++){
        delete arrayClubs[i];
    }
    
}

