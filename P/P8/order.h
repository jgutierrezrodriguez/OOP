/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   order.h
 * Author: jgr97
 *
 * Created on 16 de abril de 2019, 13:29
 */

#ifndef ORDER_H
#define ORDER_H

template<typename T>
void change(T &a, T &b) {
    T c=a;
    a=b;
    b=c;
}

template<typename T>
void order( T* vector[], int num) {
    int minorPos;
    
    for (int i = 0; i < num; i++) {
        minorPos=i;
        for (int j = i+1; j < num; j++) {
            if (*vector[j] < *vector[minorPos])
                minorPos=j;
        }
        change(*vector[i],*vector[minorPos]);
    }
}

#endif /* ORDER_H */

