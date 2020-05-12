/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "auxMod.h"

void AuxMod::showTheme(Theme t){
    cout<<"Title :"<<t.getTitle()<<endl;
    cout<<"Performer :"<<t.getPerformer()<<endl;
    cout<<"Length :"<<t.getLength()<<endl;
    cout<<"Score :"<<t.getScore()<<endl;
}

void AuxMod::showClub(Club c){
    cout<<"Name :"<<c.getName()<<endl;
    cout<<"Addressr :"<<c.getAddress()<<endl;
}

void AuxMod::showDate(Date d){
    cout<<"Year :"<<d.getYear()<<endl;
    cout<<"Month :"<<d.geyMonth()<<endl;
    cout<<"Day :"<<d.getDay()<<endl;
}

void AuxMod::modifyClub(Club &c){
    
    string newName;
    string newAddress;
    
    cout<<"Introduce a name for the club: ";
    cin>>newName;
    
    cout<<"Introduce a address for the club: ";
    cin>>newAddress;
    
    c.setName(newName);
    c.setAddress(newAddress);
    
    cout<<"Club modified!!!"<<endl;
}