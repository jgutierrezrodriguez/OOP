#include "vehicle.h"

void vehicles::kbRead(Vehicle &v){
    
    //Read brand
    cout<<"Brand: ";
    cin>>v.brand;

        
    if( v.brand.length() > 20)
        throw string ( "[kbRead]: The value is over the range (20)" );
        
    if( v.brand.length() < 3)
        throw string ( "[kbRead]: The value is under the range (3)" );
    
    
    //Read model
    cout<<"Model: ";
    cin>>v.model;

        
    if( v.model.length() > 30 )
        throw string ( "[kbRead]: The value is over the range (30)" );
        
    if(v.model.length() < 1)
        throw string ( "[kbRead]: The value is under the range (1)" );
    
    //Read plate
    cout<<"Plate: ";
    cin>>v.plate;

        
    if( v.plate.length() != 6 )
        throw string ( "[kbRead]: The value has not the expectated characters (6)" );   
    
    
    //Read Manufacture year
    cout<<"Manufactured Year: ";
    cin>>v.manufact_year;

    
    //Read price
    cout<<"Price: ";
    cin>>v.price;

        
    if ( v.price <= 0.0 )
        throw string ( "[kbRead]: The value is under 0" );
    
    
    //Read Maximum Weight
    cout<<"Maximum Weight: ";
    cin>>v.maximumWeight;

        
    if ( v.maximumWeight == 0.0 )
        throw string ( "[kbRead]: The value is equal 0" );
        
    if ( v.maximumWeight < 0.0 )
        throw string ( "[kbRead]: The value is under 0" );
    
}

void vehicles::kbRead(Vehicle *v){
   
        
    //Read brand
    cout<<"Brand: ";
    cin>>v->brand;

        
    if( v.brand->length() > 20)
        throw string ( "[kbRead]: The value is over the range (20)" );
        
    if( v.brand->length() < 3)
        throw string ( "[kbRead]: The value is under the range (3)" );
    
    
    //Read model
    cout<<"Model: ";
    cin>>v->model;

        
    if( v.model->length() > 30 )
        throw string ( "[kbRead]: The value is over the range (30)" );
        
    if(v.model->length() < 1)
        throw string ( "[kbRead]: The value is under the range (1)" );
    
    //Read plate
    cout<<"Plate: ";
    cin>>v->plate;

        
    if( v->plate.length() != 6 )
        throw string ( "[kbRead]: The value has not the expectated characters (6)" );   
    
    
    //Read Manufacture year
    cout<<"Manufactured Year: ";
    cin>>v->manufact_year;

    
    //Read price
    cout<<"Price: ";
    cin>>v->price;

        
    if ( v->price <= 0.0 )
        throw string ( "[kbRead]: The value is under 0" );
    
    
    //Read Maximum Weight
    cout<<"Maximum Weight: ";
    cin>>v->maximumWeight;

        
    if ( v->maximumWeight == 0.0 )
        throw string ( "[kbRead]: The value is equal 0" );
        
    if ( v->maximumWeight < 0.0 )
        throw string ( "[kbRead]: The value is under 0" );
    
}

void vehicles::showOnScreen ( Vehicle &v){
    cout<<"\n";
    cout<<"Brand: "<<v.brand<<endl;
    cout<<"Model: "<<v.model<<endl;
    cout<<"Plate: "<<v.plate<<endl;
    cout<<"Manufacture Year: "<<v.manufact_year<<endl;
    cout<<"Price: "<<v.price<<endl;
    cout<<"Maximum Weight: "<<v.maximumWeight<<endl;
}

void vehicles::showOnScreen ( Vehicle *v){
    cout<<"Brand: "<<v->brand<<endl;
    cout<<"Model: "<<v->model<<endl;
    cout<<"Plate: "<<v->plate<<endl;
    cout<<"Manufacture Year: "<<v->manufact_year<<endl;
    cout<<"Price: "<<v->price<<endl;
    cout<<"Maximum Weight: "<<v->maximumWeight<<endl;
}

void vehicles::showNewerYear(Vehicle array[], int size,  int year){

    for(int i=0; i<size; i++){
        if(array[i].manufact_year>=year)
            showOnScreen(array[i]); cout<<endl;
    }
}

int vehicles::fillVector(Vehicle v[], int lenV){
    int num_vehicles=0;
    bool askMore = true;
    int j = 1;
    
    while((num_vehicles!=lenV) && j==1){
        cout<<"Vehicle "<< num_vehicles+1 <<": "<<endl;
        kbRead(v[num_vehicles]);
        num_vehicles++;
        cout<<"\n";
        
        cout<< "Do you want to introduce more vehicles? Introduce 1(YES) or 0(NO)."<<endl;
        cin>> j;
        cout<<"\n";
        if(j==0)
            askMore=false;
    }
    
    return num_vehicles;
}

void vehicles::showOnScreen(Vehicle v[], int lenV){
    if(lenV >= 5){
        int cicles=lenV % 5;
        int rest=lenV-(cicles*5);
        char button;
    
        for(int i =0; i<cicles; i++){
            showOnScreen(v[0 +(i*5)]);
            showOnScreen(v[1 +(i*5)]);
            showOnScreen(v[2 +(i*5)]);
            showOnScreen(v[3 +(i*5)]);
            showOnScreen(v[4 +(i*5)]);
        
            cout<<"Press any button to continue.";
            cin>>button;
        }
    
        for(int i=0;i<rest;i++){
            showOnScreen(v[lenV-rest+i]);
        }
    }
    
    else{
        for(int i = 0; i<lenV; i++){
            showOnScreen(v[i]);
        }
    }
    
}

int vehicles::maxPrice(Vehicle v[], int lenV){
    int maxPriceVehicle = 0;
    
    for(int i = 0; i < lenV; i++){
        if(v[i].price>=v[maxPriceVehicle].price)
            maxPriceVehicle=i;
    }
    
    return maxPriceVehicle;
}

int vehicles::searchByPlate(string plateNumber, Vehicle v[], int lenV){
    int carSearched=-1;
    
    if(plateNumber.length()==6){
        for(int i = 0; i<lenV; i++)
            if(v[i].plate==plateNumber)
                carSearched=i;
        
        if(carSearched==-1)
            throw string ( "[searchByPlate]: plateNmber not found." );
        else
            return carSearched;
    }
    
    else
        throw string ( "[searchByPlate]: plateNmber length is not 6" );
}
