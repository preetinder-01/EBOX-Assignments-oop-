#include <iostream>
#include<string>
#include<stdio.h>
#include "Donor.cpp"
using namespace std;
int main()
{	  
    int n,i;
//    string dname,dgender,dbloodgroup;
//    int dage;
//    float dheight,dweight;
    cout<<"Enter the number of donors:"<<endl;
    cin>>n;
    Donor d[n];
    
    for(i=0;i<n;i++)
    {
       cout<<"Enter the donor details"<<i+1<<endl; 
       cout<<"Enter the Name :"<<endl;
       cin>>d[i].name;
       cout<<"Enter the Age :"<<endl;
       cin>>d[i].age;
       cout<<"Enter the height :"<<endl;
       cin>>d[i].height;
       cout<<"Enter the weight :"<<endl;
       cin>>d[i].weight;
       cout<<"Enter the Gender :"<<endl;
       cin>>d[i].gender;
       cout<<"Enter the Blood Group :"<<endl;
       cin>>d[i].bloodGroup;
       //Fill the code
    }
    cout<<"Donor details in the hospital database :"<<endl;
    for(i=0;i<n;i++){
    cout<<"Donor"<<i+1<<endl;
    d[i].display();
    
    }
    
}
