#include <iostream>
using namespace std;
#include "Truck.cpp"

int main(void)
{
    string model,manufacturer,gearType,fuelType,size;
    int year,cargoCapacity;
    Truck t;
    cout<<"Enter the model of the vehicle"<<endl;
    cin>>model;
    cout<<"Enter the manufactured year"<<endl;
    cin>>year;
    cout<<"Enter the name of the manufacturer"<<endl;
    cin.ignore();
    getline(cin,manufacturer);
    cout<<"Enter the gear type of the four wheeler"<<endl;
    cin>>gearType;
    cout<<"Enter the fuel type of the four wheeler"<<endl;
    cin>>fuelType;
    cout<<"Enter the cargo capacity of the truck"<<endl;
    cin>>cargoCapacity;
    cout<<"Enter the size of the truck"<<endl;
    cin>>size;
    t=Truck(model,year,manufacturer,gearType,fuelType,cargoCapacity,size);
    t.displayDetails();

    return 0;
}
