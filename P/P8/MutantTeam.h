/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MutantTeam.h
 * Author: jgr97
 *
 * Created on 6 de abril de 2019, 20:10
 */

#ifndef MUTANTTEAM_H
#define MUTANTTEAM_H

#include <string>
#include "Mutant.h"
using namespace std;

class MutantTeam {
    public:
      static const int _MAX_MEMBERS_ = 10;
    
    private:
      string name = "---";
      string base = "---";
      Mutant* members[_MAX_MEMBERS_];
      int numMembers = 0;
    
    

   public:
      MutantTeam();
      MutantTeam ( string _name, string _base );
      MutantTeam ( const MutantTeam& orig );
      virtual ~MutantTeam ( );
      
      string getBase ( ) const;
      string getName ( ) const;
      int getNumMembers ( ) const;
      
      MutantTeam& setName ( string _name );      
      MutantTeam& setBase ( string _base );
      

      string toCSV ();
      MutantTeam& operator= ( const MutantTeam& orig );

      void addMutant ( Mutant *m );
      
      
      Mutant* getMutant ( int pos );
      Mutant* MutantOUT(int pos);



};

#endif /* MUTANTTEAM_H */

