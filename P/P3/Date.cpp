/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Date.cpp
 * Author: jgr97
 * 
 * Created on 19 de febrero de 2019, 13:51
 */

#include "Date.h"
#include <string>

Date::Date() {
    time_t t=time(0);
    tm* now= localtime(&t);
    
    year=now->tm_year + 1900;
    month=now->tm_mon + 1;
    day=now->tm_mday;
}

Date::Date(int day, int month, int year) : day(day), month(month), year(year){
}

Date::Date(const Date& orig) : day(orig.day), month(orig.month), year(orig.year){
}

Date::~Date() {
}

int Date::getDay(){
    return day;
}

int Date::getYear(){
    return year;
}

int Date::geyMonth(){
    return month;
}

void Date::setDay(int day){
    this->day=day;
}

void Date::setMonth(int month){
    this->month=month;
}

void Date::setYear(int year){
    this->year=year;
}

int Date::operator -(const Date& another){
    
    int n_days=year*365+month*30+day;
    int n_days_another=another.year*365+another.month*30+another.day;
    
    if((n_days-n_days_another)<0)
        throw string ("Error: Date: operator-: The result is less than 0.");
    
    return(n_days-n_days_another);
}

bool Date::operator <(const Date& another){
    
    int n_days=year*365+month*30+day;
    int n_days_another=another.year*365+another.month*30+another.day;
    
    if(n_days<n_days_another)
        return true;
    else
        return false;
    
}

bool Date::operator ==(const Date& another){
    
    int n_days=year*365+month*30+day;
    int n_days_another=another.year*365+another.month*30+another.day;
    
    if(n_days==n_days_another)
        return true;
    else
        return false;
}

bool Date::operator <=(const Date& another){
    if(*this<another || *this==another)
        return true;
    else
        return false;
}

bool Date::operator >=(const Date& another){
    if(*this<another)
        return false;
    else
        return true;
}

bool Date::operator >(const Date& another){
    if(*this<another)
        return false;
    else
        return true;
}

bool Date::operator !=(const Date& another){
    if(*this==another)
        return false;
    else
        return true;
}

void Date::operator =(const Date& another){
    day=another.day;
    month=another.month;
    year=another.year;
}