#include<iostream>
#include<string>
#include "Donor.cpp"
using namespace std;
int main() {
Donor d;
cout<<"Enter the donor details"<<endl;
cout<<"Enter the Name :"<<endl;
cin>>d.name;
cout<<"Enter the Age :"<<endl;
cin>>d.age;
cout<<"Enter the height :"<<endl;
cin>>d.height;
cout<<"Enter the weight :"<<endl;
cin>>d.weight;
cout<<"Enter the No of units donated :"<<endl;
cin>>d.no_of_units_donated;
d.display(); }
