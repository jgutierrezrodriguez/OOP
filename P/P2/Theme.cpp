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

Theme::Theme(): title (""), performer (""), length(0), score(0)
{
}

Theme::Theme(string new_title, string performer, int length=0, int score=0) 
                            : title (new_title), performer (performer), length(length), score(score)
{
}

Theme::Theme(const Theme& orig) : title(orig.title), performer(orig.performer),
                                  length(orig.length), score(orig.score)
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


void Theme::setLength(int length){
    this->length=length;
}

void Theme::setPerformer(string performer){
    this->performer=performer;
}

void Theme::setTitle(string title) {
    this->title=title;
}