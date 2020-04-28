#include<iostream>
using namespace std;
#include "FourWheeler.h"
#include "Vehicle.h"

class Truck: public FourWheeler, public Vehicle{
    private:
    int cargoCapacity;
    string size;
    
    public:
    Truck(){}
    Truck(string model, int year, string manufacturer, string gearType, string fuelType, int cargoCapacity, string size):FourWheeler(gearType, fuelType),Vehicle(model, year, manufacturer)
    {
        this->cargoCapacity=cargoCapacity;
        this->size=size;
    }
    
    void displayDetails()
    {
        cout<<"Truck Details"<<endl;
        cout<<"Model : "<<model<<endl;
        cout<<"Year : "<<year<<endl;
        cout<<"Manufacturer : "<<manufacturer<<endl; 
        cout<<"Gear Type : "<<gearType<<endl;
        cout<<"Fuel Type : "<<fuelType<<endl;
        cout<<"Cargo Capacity : "<<cargoCapacity<<" "<<"MT"<<endl;
        cout<<"Size : "<<size<<endl;
    }
};

