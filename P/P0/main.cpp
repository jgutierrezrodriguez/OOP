
/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 7 de febrero de 2019, 17:15
 */

#include <cstdlib>
#include <string>
#include "string.h"
#include <iostream>

using namespace std;


/** @brief Session 1 Program.

    
    @author Javier Gutierrez Rodriguez
    @date February 2019
    */

/**
    Vehicle Struct:
 */

struct Vehicle {
    string brand;   ///< Name of the brand
    string model;   ///< Name of the model 
    string plate;   ///< Plate of the vehicle 
    int manufact_year;  ///< Manufacture Year
    float price=-1.0;   ///< Price of the Vehicle
    
};


/**
    @brief Asks the user for the information of a vehicle, and assign the values to the struct.
    @param Struct vehicle passed by reference.
 */
void kbRead(Vehicle &v){
    
    while ( v.brand.length() > 20 || v.brand.length() < 3 ){
        cout<<"Brand: ";
        cin>>v.brand;

        
        if( v.brand.length() > 20 || v.brand.length() < 3 )
            cout<<"Error. Brand has to have between 3 and 20 characters."<<endl;
    }
    
    while ( v.model.length() > 30 || v.model.length() < 1 ){
        cout<<"Model: ";
        cin>>v.model;

        
        if( v.model.length() > 30 || v.model.length() < 1 )
            cout<<"Error. Model has to have between 1 and 30 characters."<<endl;
    }
    
    while( v.plate.length() != 6 ){
        cout<<"Plate: ";
        cin>>v.plate;

        
        if( v.plate.length() != 6 )
            cout<<"Error. Plate has to have 6 characters."<<endl;     
    }
    
    cout<<"Manufactured Year ";
    cin>>v.manufact_year;

    
    while( v.price <= 0.0 ){
        cout<<"Price: ";
        cin>>v.price;

        
        if ( v.price <= 0.0 )
            cout<<"Error. Price has to be greater than zero."<<endl;
    }
}

/**
    @brief Asks the user for the information of a vehicle, and assign the values to the struct.
    @param Struct vehicle passed by pointer.
 */

void kbRead(Vehicle *v){
   
    while ( v->brand.length() > 20 || v->brand.length() < 3 ){
        cout<<"Brand: ";
        cin>>v->brand;
        
        if( v->brand.length() > 20 || v->brand.length() < 3 )
            cout<<"Error. Brand has to have between 3 and 20 characters."<<endl;
    }
    
    while ( v->model.length() > 30 || v->model.length() < 1 ){
        cout<<"Model: ";
        cin>>v->model;
        
        if( v->model.length() > 30 || v->model.length() < 1 )
            cout<<"Error. Model has to have between 1 and 30 characters."<<endl;
    }
    
    while( v->plate.length() != 6 ){
        cout<<"Plate: ";
        cin>>v->plate;
        
        if( v->plate.length() != 6 )
            cout<<"Error. Plate has to have 6 characters."<<endl;     
    }
    
    cout<<"Manufactured Year ";
    cin>>v->manufact_year;
    
    while( v->price <= 0.0 ){
        cout<<"Price: ";
        cin>>v->price;
        
        if ( v->price <= 0.0 )
            cout<<"Error. Price has to be greater than zero."<<endl;
    }
}

/**
    @brief Shows on screen the information related to a vehicle
    @param Struct vehicle passed by reference.
 */

void showOnScreen ( Vehicle &v){
    cout<<"Brand: "<<v.brand<<endl;
    cout<<"Model: "<<v.model<<endl;
    cout<<"Plate: "<<v.plate<<endl;
    cout<<"Manufacture Year: "<<v.manufact_year<<endl;
    cout<<"Price: "<<v.price<<endl;
}

/**
    @brief Shows on screen the information related to a vehicle
    @param Struct vehicle passed by pointer.
 */

void showOnScreen ( Vehicle *v){
    cout<<"Brand: "<<v->brand<<endl;
    cout<<"Model: "<<v->model<<endl;
    cout<<"Plate: "<<v->plate<<endl;
    cout<<"Manufacture Year: "<<v->manufact_year<<endl;
    cout<<"Price: "<<v->price<<endl;
}


void showNewerYear(Vehicle array[], int size,  int year){

    for(int i=0; i<size; i++){
        if(array[i].manufact_year>=year)
            showOnScreen(array[i]); cout<<endl;
    }
}


/**
 @brief Main: 
    - Define a vector with a fixed size (MAX_VEHICLES), and ask the user for a number of vehicles (not greater than the vector size) and their data, and store the data into the vector
    - Show on screen the information of the vehicles
    - Show the data of most expensive vehicle
 */

int main(int argc, char** argv) {

    const int MAX_VEHICLES=100;
    int num_vehicles=101;
    
    while (num_vehicles > MAX_VEHICLES){
        cout<<"Number of vehicles: ";
        cin>>num_vehicles;
        cout<<endl;
    }
 
    Vehicle vector [num_vehicles];
    
    
    cout<<"<----------Read parameters---------->"<<endl;
    for(int i = 0;i<num_vehicles;i++){
        cout<<"Vehicle "<< i+1 <<": "<<endl;
        kbRead(vector[i]);
        cout<<"\n";
        
    }
        
    
    int j=0;
    
    cout<<"<----------Show parameters---------->"<<endl;
    for(int i = 0; i < num_vehicles;i++){
        cout<<"Vehicle "<< i+1 <<": "<<endl;
        showOnScreen(vector[i]); cout<<"\n";
        cout<<"\n";
        
        if(vector[i].price > vector[j].price)
            j=i;
    }
    
    cout<<"\n<----------Most expensive vehicle---------->"<<endl;
    cout<<"Vehicle "<< j+1 <<": "<<endl;
    showOnScreen(vector[j]);
    
    
    int year;
    cout<<"\n<----------Newer vehicle---------->"<<endl;
    cout<<"Manufacture Year: ";
    cin>>year;
    cout<<endl;
    showNewerYear(vector, num_vehicles, year);
    
}

