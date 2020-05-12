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
#include <iostream>

using namespace std;
class Theme {
    private:
        string title;
        string performer;
        int length;
        int score;


    public:
        //Default constructor
        Theme();
        
        //Parameterized constructor
        Theme(string new_title, string performer, int length, int score);
        
        //Copy constructor
        Theme(const Theme& orig);
        
        //Destructor
        virtual ~Theme();
        
        //Getters
        string getTitle();
        string getPerformer();
        int getLength();
        int getScore();
        
        //Setters
        void setTitle(string title);
        void setPerformer(string performer);
        void setLength(int length);
        void show();

};

#endif /* THEME_H */

