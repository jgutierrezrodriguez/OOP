/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 18 de febrero de 2019, 18:46
 */

#include <cstdlib>
#include "Theme.h"
#include "Club.h"
#include "Date.h"
#include "auxMod.h"
#include <ctime>
#include <iostream>

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    
    Theme arrayThemes[20];
    
    Club HouseOfTheDJ((string)"My House", (string)"Andujar, Jaen");
    Club *pMyHouse=&HouseOfTheDJ;
    
    Club *arrayClubs[10];
    
    for(int i=0; i<10; i++){
        arrayClubs[i]=new Club();
    }
    
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
    arrayThemes[0].setLastClub(HouseOfTheDJ.getName());
    arrayThemes[0].setScore(10);
    
    arrayThemes[1].setTitle((string)"Despacito 2");
    arrayThemes[1].setLength(400);
    arrayThemes[1].setPerformer((string)"Luis Fonsi");
    arrayThemes[1].setLastUse(lastChampionsBarcelona);
    arrayThemes[1].setLastClub(arrayClubs[0]->getName());
    arrayThemes[1].setScore(20);
    
    arrayThemes[2].setTitle((string)"Despacito 3");
    arrayThemes[2].setLength(400);
    arrayThemes[2].setPerformer((string)"Luis Fonsi");
    arrayThemes[2].setLastUse(lastChampionsMadrid);
    arrayThemes[2].setLastClub(arrayClubs[1]->getName());
    arrayThemes[2].setScore(30);
    
    Date date(1,6,2016);
    cout<<"Themes used before than 1/6/2016:\n"<<endl;
    AuxMod::showPreviousThemes(arrayThemes,3,date);
    
    if(arrayThemes[2]<arrayThemes[1])
        cout <<"Despacito 3 is worse than Despacito 2\n";
    else
        cout <<"Despacito 3 is greater than Despacito 2\n";
    
    Theme song ((string)"Despacito 4", (string) "Luis Fonsi", 400, 15, date, (string)"club");
    
    int n_array=3;
    
    AuxMod::insertTheme(arrayThemes,n_array,song);
    
    for(int i=0; i<n_array;i++){
        cout<<"\n";
        AuxMod::showTheme(arrayThemes[i]);
    }
    
    for(int i=0;i<10;i++){
        delete arrayClubs[i];
    }
}

