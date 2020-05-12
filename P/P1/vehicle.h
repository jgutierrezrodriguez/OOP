/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vehicle.h
 * Author: jgr97
 *
 * Created on 11 de febrero de 2019, 19:16
 */

#ifndef VEHICLE_H
#define VEHICLE_H

using namespace std;

#include <iostream>
#include <string>

namespace vehicles{
struct Vehicle {
    string brand;   ///< Name of the brand
    string model;   ///< Name of the model 
    string plate;   ///< Plate of the vehicle 
    int manufact_year;  ///< Manufacture Year
    float price=0.0;   ///< Price of the Vehicle
    float maximumWeight=0.0; ///<Maximum Weight of the vehicle
    
};


/**
    @brief Asks the user for the information of a vehicle, and assign the values to the struct.
    @param Struct vehicle passed by reference.
 */
void kbRead(Vehicle &v);
/**
    @brief Asks the user for the information of a vehicle, and assign the values to the struct.
    @param Struct vehicle passed by pointer.
 */

void kbRead(Vehicle *v);

/**
    @brief Shows on screen the information related to a vehicle
    @param Struct vehicle passed by reference.
 */

void showOnScreen ( Vehicle &v);

/**
    @brief Shows on screen the information related to a vehicle
    @param Struct vehicle passed by pointer.
 */

void showOnScreen ( Vehicle *v);

/**
    @brief Shows on screen the information related to a vehicle
    @param Array of vehicles.
    @param Size of the Array
    @param Manufacture year indicated by the user    
 */

void showNewerYear(Vehicle array[], int size,  int year);

/**
    @brief Fills in a vector by asking the user for the data of each vehicle
    @param Array of vehicles.
    @param Length of the Array
    @return Number of vehicles filled.
 */

int fillVector(Vehicle v[], int lenV);

/**
    @brief Shows on screen the list of vehicles (each one on a line apart). Show the vehicles in groups of 5 (the user has to press a key in order to show the next group).
    @param Array of vehicles.
    @param Length of the Array.
 */

void showOnScreen(Vehicle v[], int lenV);

/**
    @brief Finds the most expensive vehicle.
    @param Array of vehicles.
    @param Length of the Array.
    @return Position of the most expensive vehicle.
 */

int maxPrice (Vehicle v[], int lenV);

/**
    @brief Finds the position of the vehicle associate with a plate.
    @param String of the searched plate.
    @param Array of vehicles.
    @param Length of the Array.
    @return Position of the searched vehicle.
 */

int searchByPlate(string plateNumber, Vehicle v[], int lenV);
}
#endif /* VEHICLE_H */

