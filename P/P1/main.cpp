
/* 
 * File:   main.cpp
 * Author: jgr97
 *
 * Created on 11 de febrero de 2019, 18:01
 */

#include <cstdlib>
#include "vehicle.h"

using namespace std;
using namespace vehicles;

int main(int argc, char** argv) {
    
    int num_vehicles=0;
    
    while ( num_vehicles<=0){
        cout<<"Number of vehicles: ";
        cin>>num_vehicles;
        cout<<endl;
    }
 
    Vehicle * vector = new Vehicle[num_vehicles];
    
    try{
    cout<<"<----------Read parameters---------->"<<endl;
    
        num_vehicles=fillVector(vector,num_vehicles);
    }
    catch(const string &e){
        // Catches the exception and shows the information about it
        cout << "EXCEPTION: " << e <<endl;
    }
    cout<<"<----------Show parameters---------->"<<endl;
    showOnScreen(vector,num_vehicles);
    
    cout<<"\n<----------Most expensive vehicle---------->"<<endl;
    int j = maxPrice(vector,num_vehicles);
    cout<<"Vehicle "<< j+1 <<": "<<endl;
    showOnScreen(vector[j]);
    
    
    string plate;
    cout<<"\n<----------Search a Vehicle and modify it---------->"<<endl;
    cout<<"Plate: ";
    cin>>plate;
    cout<<endl;
    
    try{
        int searchedCar=searchByPlate(plate,vector,num_vehicles);
        showOnScreen(vector[searchedCar]);
        
        float new_price;
        cout<<"\nModify his price: ";
        cin >>new_price;

        vector[searchedCar].price=new_price;

        showOnScreen(vector[searchedCar]);
    }
    catch(const string &e){
        cout << "EXCEPTION: " << e <<endl; 
    }
    
    
    
    
    delete [] vector;
}

