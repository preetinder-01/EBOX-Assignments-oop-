#include<iostream>

#include "Item.cpp"
using namespace std;

int main()

{
   Item i1,i2;
   bool b;
   string name;
   double cost;
   cout<<"Enter the item 1\n";
   getline(cin,name);
   i1.setName(name);
   cout<<"Cost of that item\n"; 
   cin>>cost;
   i1.setCost(cost);
   cout<<"Enter the item 2\n";
   cin.ignore();
   getline(cin,name);
   i2.setName(name);
   cout<<"Cost of that item\n"; 
   cin>>cost;
   i2.setCost(cost);
  b= i1>=i2;
  if(b==0)
  cout<<i2.getName()<<" is costlier or equal to "<<i1.getName();
  else
  cout<<i1.getName()<<" is costlier or equal to "<<i2.getName();
}
	
