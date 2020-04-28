#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include "Item.cpp"
using namespace std;
int main()
{
 string name;
    int price;
    string a;
    cout<<"Enter the item details:\n";
    getline(cin,a);
    cin>>price;
    Item *i = new Item(a,price);
    i->display();
    delete i;
    
    
    
}
