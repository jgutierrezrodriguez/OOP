/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.h
 * Author: jgr97
 *
 * Created on 19 de febrero de 2019, 13:51
 */

#ifndef DATE_H
#define DATE_H

#include <ctime>

using namespace std;

class Date {
    
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);
    Date(const Date& orig);
    virtual ~Date();
    
    
    int getDay();
    int geyMonth();
    int getYear();
    
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    int operator-(const Date& another);
    bool operator<(const Date& another);
    bool operator==(const Date& another);
    bool operator<=(const Date& another);
    bool operator>=(const Date& another);
    bool operator>(const Date& another);
    bool operator!=(const Date& another); 
    void operator=(const Date& another);


};

#endif /* DATE_H */

