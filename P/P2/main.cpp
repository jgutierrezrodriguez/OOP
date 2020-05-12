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
    
    Theme song1;
    Theme song2 ((string)"Despacito",(string)"Luis Fonsi",4,100);
    
    Club club1((string)"Kharma",(string)" Carretera de Madrid, km. 333 s/n, 23009 Jaen");
    Club club2(club1);
    
    Date date1;
    Date date2(3,2,1997);
    
    int answer_menu=1;
   /*
    cout<<"Menu: "<<endl;
        cout<<"\t 1.Show the data of the Themes"<<endl;
        cout<<"\t 2.Show the data of the Clubs"<<endl;
        cout<<"\t 3.Show the data of the Dates"<<endl;
        cout<<"\t 4.Modify the data of the second Club"<<endl;
        cout<<"\t 5.End the application"<<endl;
    
    while(answer_menu>=1 &&answer_menu<=4){
        
        cout<<"\nPick one option: ";
        cin>>answer_menu;
        cout<<"\n";
        switch(answer_menu){
            case 1:
                cout<<"Song1: "<<endl;
                AuxMod::showTheme(song1);
                cout<<"\nSong2: "<<endl;
                AuxMod::showTheme(song2);
                break;
            
            case 2:
                cout<<"Club1: "<<endl;
                AuxMod::showClub(club1);
                cout<<"\nClub2: "<<endl;
                AuxMod::showClub(club2);
                break;
                
            case 3:
                cout<<"Date1: "<<endl;
                AuxMod::showDate(date1);
                cout<<"\nDate2: "<<endl;
                AuxMod::showDate(date2);
                break;
                
            case 4:
                AuxMod::modifyClub(club2);
        }
        
        cout<<"\n\n";
    }*/
    
    Date DATE1(4,5,2010);
    Date DATE2(3,4,1997);
    
    try{
        int result1=DATE1-DATE2;
        cout<<"\nResult: "<<result1<<endl;
    }
    catch(const string &e){
        cout<<"EXCEPTION"<<e<<endl;
    }
    
    try{
        int result1=DATE2-DATE1;
        cout<<"\nResult: "<<result1<<endl;
    }
    catch(const string &e){
        cout<<"EXCEPTION"<<e<<endl;
    }
    
    
        
    cout<<"\nBye!!!";
    
}

