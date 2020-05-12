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


int main(int argc, char** argv) {

    Mutant* vectorMutant[5];
    
    Mutant mutant1("Charles Francis Xavier", "Profesor X",10021968,"USA");
    Mutant mutant2("Scott Summers", "Ciclope",11051986,"USA");
    Mutant mutant3("Peter Parker", "SpiderMan",10101992,"USA");
    Mutant mutant4("Robert Louis Drake", "Iceman",26121985,"USA");
    Mutant mutant5("Tony Stark", "IronMan",10021963,"USA");
    
    
    vectorMutant[0]=&mutant1;
    vectorMutant[1]=&mutant2;
    vectorMutant[2]=&mutant3;
    vectorMutant[3]=&mutant4;
    vectorMutant[4]=&mutant5;
            
    MutantTeam team1("X-MEN", "Seattle");
    MutantTeam team2("The Avengers", "New York");
    
    team1.addMutant(vectorMutant[0]);
    team1.addMutant(vectorMutant[1]);
    team1.addMutant(vectorMutant[3]);
    
    team2.addMutant(vectorMutant[2]);
    team2.addMutant(vectorMutant[4]);
    
    
    
    PsychicalPower power1("Telequinesis","Move objects with the mind","Everyone",100);
    vectorMutant[0]->addPower(power1);
    
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
    
    
}


