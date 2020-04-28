#include <iostream>
#include<string>
#include<stdio.h>
#include "ItemType.cpp"
using namespace std;
int main()
{
    string itemname;
    double itemdeposit,itemcostperday;
    cout<<"Enter name:"<<endl;
    getline(cin,itemname);
    cout<<"Enter deposit:"<<endl;
    cin>>itemdeposit;
    cout<<"Enter cost Per Day:"<<endl;
    cin>>itemcostperday;
    ItemType i;
    i.setName(itemname);
    i.setDeposit(itemdeposit);
    i.setCostPerDay(itemcostperday);
    i.display();
     
}

