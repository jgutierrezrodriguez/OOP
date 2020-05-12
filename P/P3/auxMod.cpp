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
    cout<<"Last club: "<<t.getLastClub()<<endl;
    cout<<"Last use: "<<t.getLastUse().getDay()
            <<"/"<<t.getLastUse().geyMonth()
            <<"/"<<t.getLastUse().getYear()<<endl;
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

void AuxMod::showPreviousThemes(Theme array[], int n_array, Date date){
    
    for(int i=0;i<n_array;i++){
        if(array[i].getLastUse()<date){
            showTheme(array[i]);
            cout<<"\n";
        }
    }
}

void AuxMod::insertTheme(Theme array[],int &n_array, Theme& song){
    bool position_found=false;
    int position;
    int i=0;
    
    while(position_found==false){
        if(array[i]<song)
            i++;
        else{
            position=i;
            position_found=true;
        }
    }
    if(position!=n_array){
        n_array++;
        
        Theme aux;
        
        for(int j=n_array-2;j>position;j--){
            aux=array[j];
            array[j+1]=aux;
        }
        
        array[position+1]=array[position];
        array[position]=song;
    }
    else{
        n_array++;
        array[n_array-1]=song;
    }
}

