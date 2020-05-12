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

Theme::Theme(): title (""), performer (""), length(0), score(0), last_club("")
{
}

Theme::Theme(string new_title, string performer, int length, int score, Date lastUse, string club)
                            :   title (new_title), performer (performer), 
                                length(length), score(score),
                                last_use(lastUse), last_club(club)
{
}

Theme::Theme(const Theme& orig) : title(orig.title), performer(orig.performer),
                                  length(orig.length), score(orig.score),
                                  last_use(orig.last_use), last_club(orig.last_club)
{
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


void Theme::setLength(int length){
    this->length=length;
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