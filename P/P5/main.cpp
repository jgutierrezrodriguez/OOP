/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 11 de marzo de 2019, 19:30
 */

#include <cstdlib>
#include "Report.h"
#include "Pilot.h"
#include "StarFighter.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  string pilotsData[5] = {"Dameron Poe;Jakku;100;123456;---", 
                             "Anakin Skywalker;Tatooine;133;126756;Derribados 3 cazas enemigos", 
                             "Han Solo;Corellia;247;126786;Impacto en motor izquierdo", 
                             "Chewbacca;Kashyyk;115;136786;---", 
                             "Leia Organa;Alderaan;3;126336;Derribados 10 cazas enemigos"};
   string navesData[5] = {"Kuat Systems;Delta-7;1", 
                           "Kuat Systems;Delta-7B;1", 
                           "Incom Corporation;T-65B X-wing;1", 
                           "Koensayr Manufacturing;Y-wing;2", 
                           "Kuat Systems;A-wing;1"};
   string droidsData[5] = {"Industrial Automation;R2-D2", 
                             "Industrial Automation;R2-KT", 
                             "AccuTronics;R3-D3", 
                             "AccuTronics;R3-KT", 
                             "Arakyd Industries;C3PO"};

   Pilot pilot[5];
   StarFighter nave[5];
   Droid droid[5];
   
   for(int i=0;i<5;i++){
       pilot[i].fromCSV(pilotsData[i]);
       nave[i].fromCSV(navesData[i]);
       droid[i].fromCSV(droidsData[i]);
   }
   
   pilot[1].setDroid(droid[3]).setSF(&nave[2]);
   pilot[2].setDroid(droid[1]).setSF(&nave[4]);
   pilot[3].setDroid(droid[2]).setSF(&nave[1]);
   
   Report lmPilot1=pilot[1].generateReport();
   Report lmPilot2=pilot[2].generateReport();
   
   cout<<lmPilot1.toCSV()<<endl;
   cout<<lmPilot2.toCSV()<<endl;
    
   return 0;
}

