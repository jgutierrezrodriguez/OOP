/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   auxMod.h
 * Author: jgr97
 *
 * Created on 19 de febrero de 2019, 18:38
 */

#ifndef AUXMOD_H
#define AUXMOD_H

#include "Club.h"
#include "Date.h"
#include "Theme.h"
#include <string>

using namespace std;

namespace AuxMod{
    void showTheme(Theme t) ;
    
    void showClub(Club c) ;
    
    void showDate(Date d);
    
    void modifyClub (Club &c);
    
    void showPreviousThemes (Theme array[],int n_array, Date date);
    
    void insertTheme(Theme array[],int &n_array, Theme& song);
}
#endif /* AUXMOD_H */

