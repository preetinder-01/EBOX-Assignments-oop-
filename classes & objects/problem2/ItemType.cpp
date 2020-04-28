
#include <iostream>
#include<stdio.h>
#include<string>
//#include<cstdlib>
using namespace std;
class ItemType
{
	private:a
std::string name;
double deposit;
double costPerDay;
public:

    void setName(string itemname)
	{
       name =itemname;
	}
    string getName()
    {
     return name;
    }
     
    void setDeposit(double x)
    {
        deposit= x;
    }
    
    double getDeposit()
    {
        return deposit;
    }
    
    void setCostPerDay(double c)
    {
        costPerDay = c;
    }
     double getCostPerDay()
    {
        return costPerDay;
    }
void display()
{
cout<<"Itemtype details:"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Deposit: "<<getDeposit()<<endl;
cout<<"Cost Per Day: "<<getCostPerDay()<<endl;
}
};
