/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 6 de abril de 2019, 18:30
 */

#include <iostream>
#include "order.h"
#include "MutantTeam.h"
#include "Mutant.h"
#include "Power.h"
#include <fstream>

using namespace std;


void show( Mutant& m) {
    cout << "MUTANT: " 
              << m.toCSV() << endl;
    cout << "\tPowers : ";
    
    int numPowers=m.getNumPowers();
    
    for(int i =0; i<numPowers;i++){
        cout << m.getPower(i)->toCSV() << " ";
    }

}

void show (Mutant* v[], int lenghtV){
    for(int i =0; i< lenghtV; i++){
        cout<<"\n";
        show(*v[i]);
    }
}

void show( MutantTeam& eq) {
    std::cout << "\nTEAM: " << eq.getName() 
              << " (Base: " << eq.getBase()<< ")" <<std::endl
              << "============================"
              << std::endl;
    
    int numMembers=eq.getNumMembers();
    
    for(int i =0; i<numMembers;i++){
        show(*eq.getMutant(i));cout<<"\n";
    }
}

void stockMutantCSV(Mutant * v[], int lengthV, string fileName){
    
    ofstream f;
    
    f.open ( fileName.c_str() );

    if ( f.good() ) {
        for ( int i=0; i<lengthV; i++ ) {
            f << i+1 << ".- " << v[i]->toCSV() << endl;
        
        }
        f.close();
    } 
    else {
        cerr << "Error while opening the file";
    }
}


template<typename T>
void readCSV(T * v[],int lengthV, string FileName){
    string cad;
    int cont=0;
    
    
    ifstream fe;
    
    
    fe.open( FileName.c_str() );
    if ( fe.good() ) {
        
        while( !fe.eof() && cont<lengthV) {
            getline( fe, cad ); 
            if (cad!="") { // Ignore blank lines
                
                v[cont++]->fromCSV(cad);
            }
        }
        
        fe.close();
    }
}


int main(int argc, char** argv) {

    Mutant* vectorMutant[5];
    
    Mutant mutant1("", " X",0,"");
    Mutant mutant2("", " X",0,"");
    Mutant mutant3("", " X",0,"");
    Mutant mutant4("", " X",0,"");
    Mutant mutant5("", " X",0,"");
    
    vectorMutant[0]=&mutant1;
    vectorMutant[1]=&mutant2;
    vectorMutant[2]=&mutant3;
    vectorMutant[3]=&mutant4;
    vectorMutant[4]=&mutant5;
    
    readCSV(vectorMutant,5,"mutants.csv");
    
    vectorMutant[1]->addPhysicalPower("X-RAY","Energy ray","Everyone whiout specific protecion",90);
    
    vectorMutant[2]->addPower("Aracnid sense","His senses expands","Spiderman",10);
    
    Power power2("Icehands","Can create ice from air","Everyone",60);
    vectorMutant[3]->addPower(power2);
    
    vectorMutant[4]->addPhysicalPower("Money","Can buy everything","Only him",1000);

    show(vectorMutant,5);
    
    
    PsychicalPower power("Asfixia","Don't let breathe","“biological beings",600,0);
    power.setLucidity(0.75);
    
    cout << "\n\n\nProfesorX destructive capacity: "<<vectorMutant[0]->totalDestructiveCapacity();
    
    cout<<"\nProfesorX has a new power.";
    
    vectorMutant[0]->addPower(power);
    
    cout << "\nProfesorX destructive capacity: "<<vectorMutant[0]->totalDestructiveCapacity();

    
    
    
    
    /*
    MutantTeam team1("X-MEN", "Seattle");
    MutantTeam team2("The Avengers", "New York");
    
    team1.addMutant(vectorMutant[0]);
    team1.addMutant(vectorMutant[1]);
    team1.addMutant(vectorMutant[3]);
    
    team2.addMutant(vectorMutant[2]);
    team2.addMutant(vectorMutant[4]);
    
    
    
    //PsychicalPower power1("Telequinesis","Move objects with the mind","Everyone",100);
    //vectorMutant[0]->addPower(power1);
    
    vectorMutant[1]->addPhysicalPower("X-RAY","Energy ray","Everyone whiout specific protecion",90);
    
    vectorMutant[2]->addPower("Aracnid sense","His senses expands","Spiderman",10);
    
    Power power2("Icehands","Can create ice from air","Everyone",60);
    vectorMutant[3]->addPower(power2);
    
    vectorMutant[4]->addPhysicalPower("Money","Can buy everything","Only him",1000);
    
    
    show(team1);
    show(team2);
    
    cout << "\nCiclope destructive capacity: "<<vectorMutant[1]->totalDestructiveCapacity();
    
    cout<<"\nMagneto disable Ciclope's powers.";
    vectorMutant[1]->getPower(0)->disable();
    
    cout << "\nCiclope destructive capacity: "<<vectorMutant[1]->totalDestructiveCapacity();
    
    
    
    stockMutantCSV(vectorMutant,5,"mutants.csv");
    
    */
}


