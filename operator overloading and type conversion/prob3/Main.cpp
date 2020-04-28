#include <iostream>
#include <stdio.h>
#include "Hall.cpp"
using namespace std;
Hall Hall::operator++(int i)
{   
    price=price;
    return *this;
    
}
Hall Hall::operator--(int i)
{   
    price = price- price/10;
    return *this;
    
}
Hall& Hall::operator++()
{
    price = price+ price/20;
    return *this;
}
int main (){
    Hall h, h1;
    string hallName;
    double price;
    int choice;
    cout<<"Enter the hall name\n";
    getline(cin,hallName);
    cout<<"List of event types\n";
    cout<<"1.Wedding\n";
    cout<<"2.Birthday\n";
    cout<<"3.Social Events\n";
    cout<<"Select the event type\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter the price\n";
            cin>>price;
            h.setHallName(hallName);
            h.setEventType("Wedding");
            h.setPrice(price);
            h1=++h;
           break;
        case 2:
            cout<<"Enter the price\n";
            cin>>price;
            h.setHallName(hallName);
            h.setEventType("Birthday");
            h.setPrice(price);
            h1 =h++;
            break;
        case 3:
            cout<<"Enter the price\n";
            cin>>price;
            h.setHallName(hallName);
            h.setEventType("Social Event");
            h.setPrice(price);
            h1=h--;
            break;
        default:
            cout<<"Invalid Event Type\n";
            break;
            
    }
    if(choice==1||choice==2||choice==3)
    {cout<<"Hall name : "<<h.getHallName()<<endl;
    cout<<"Event Type : "<<h.getEventType()<<endl;
    cout<<"Price : ";
    printf("%.2f",h.getPrice());
    }
    
}