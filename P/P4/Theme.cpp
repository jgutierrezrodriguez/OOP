/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Theme.cpp
 * Author: jgr97
 * 
 * Created on 18 de febrero de 2019, 20:05
 */

#include "Theme.h"

const string file="Theme.h";
int Theme::numThemes=0;
int Theme::shortestLength=3000000;

Theme::Theme(): title (""), performer (""), length(0), score(0), last_club("")
{   
    numThemes++;
    idTheme=to_string(numThemes);
    
}

Theme::Theme(string new_title, string performer, int length, int score, Date lastUse, string club)
                            :   title (new_title), performer (performer), 
                                length(length), score(score),
                                last_use(lastUse), last_club(club)
{
    if(length<shortestLength)
      shortestLength=length;
    
    
    numThemes++;
    idTheme=to_string(numThemes);
}

Theme::Theme(const Theme& orig) : title(orig.title), performer(orig.performer),
                                  length(orig.length), score(orig.score),
                                  last_use(orig.last_use), last_club(orig.last_club)
{
    if(length<shortestLength)
       shortestLength=length;
    
    
    numThemes++;
    idTheme=to_string(numThemes);
}

Theme::~Theme() {
}


string Theme::getTitle(){
    return title;
}

string Theme::getPerformer(){
    return performer;
}

int Theme::getLength(){
    return length;
}

int Theme::getScore(){
    return score;
}

string Theme::getLastClub(){
    return last_club;
}

Date Theme::getLastUse(){
    return last_use;
}

string Theme::getId(){
    return idTheme;
}

int Theme::getShortestLength(){
    return shortestLength;
}


void Theme::setLength(int length){
    this->length=length;
    
    if(length<shortestLength)
       shortestLength=length;
    
}

void Theme::setPerformer(string performer){
    this->performer=performer;
}

void Theme::setTitle(string title) {
    this->title=title;
}

void Theme::setLastUse(Date date){
    last_use=date;
}

void Theme::setLastClub(string name){
    last_club=name;
}

void Theme::setScore(int score){
    this->score=score;
}

bool Theme::operator <(const Theme& anotherTheme){
    if(score!=anotherTheme.score){
        if(score<anotherTheme.score)
            return true;
        else
            return false;
    }
    else{
        if(last_use>anotherTheme.last_use)
            return true;
        else
            return false;
    }
}

void Theme::operator =(const Theme& anotherTheme){
    title=anotherTheme.title;
    performer=anotherTheme.performer;
    length=anotherTheme.length;
    score=anotherTheme.score;
    last_use=anotherTheme.last_use;
    last_club=anotherTheme.last_club;
}

void Theme::increaseScore(int additionalScore){
    const string function="increaseScore";
    
    if(additionalScore<-10){
        const string description="The amount of points to be added is lower than -10";
        throw NotValidParameter(file,function,description);
    }
    
    else if(additionalScore<-10){
        const string description="The amount of points to be added is greater than 10";
        throw NotValidParameter(file,function,description);
    }
    
    score=score+additionalScore;
}

string Theme::toCSV(){
    string to_csv=idTheme+(string)";"+title+(string)";"+performer+(string)";"+
            to_string(length)+(string)";"+to_string(score)+(string)";"+last_club+
            (string)"Last use:"+last_use.toCSV();
    return to_csv;
}