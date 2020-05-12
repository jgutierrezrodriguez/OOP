/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Theme.h
 * Author: jgr97
 *
 * Created on 18 de febrero de 2019, 20:05
 */

#ifndef THEME_H
#define THEME_H

#include <string>
#include <sstream> 
#include <iostream>
#include "Date.h"
#include "NotValidParameter.h"

using namespace std;
class Theme {
    private:
        string title;
        string performer;
        int length;
        int score;
        Date last_use;
        string last_club;
        string idTheme;
        static int numThemes;
        static int shortestLength;


    public:
        //Default constructor
        Theme();
        
        //Parameterized constructor
        Theme(string new_title, string performer, int length, int score, Date lastUse, string club);
        
        //Copy constructor
        Theme(const Theme& orig);
        
        //Destructor
        virtual ~Theme();
        
        //Getters
        string getTitle();
        string getPerformer();
        int getLength();
        int getScore();
        string getLastClub();
        Date getLastUse();
        string getId();
        int getShortestLength();
        
        
        //Setters
        void setTitle(string title);
        void setPerformer(string performer);
        void setLength(int length);
        void setLastUse(Date date);
        void setLastClub(string name);
        void setScore(int score);
        
        //Operators
        bool operator< (const Theme &anotherTheme );
        void operator= (const Theme &anotherTheme );
        
        void increaseScore(int additionalScore);
        string toCSV();
        

};

#endif /* THEME_H */

