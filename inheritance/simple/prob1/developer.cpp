#include<iostream>
using namespace std;
#include "Employee.h"
class Developer: public Employee{
    private:
    string skills;
    string role;
    
    public:
    Developer(){}
    
    Developer(string name,int experience,int empId,string skills,string role):Employee(name,experience,empId)
    {
        this->skills=skills;
        this->role=role;
    }
   
    
    void displayDetails()
    {
       cout<<"Employee Details"<<endl;
       cout<<"Name : "<<name<<endl;
       cout<<"Experience : "<<experience<<" "<<"years"<<endl;
       cout<<"Employee Id : "<<empId<<endl;
       cout<<"Technical Skills : "<<skills<<endl;
       cout<<"Role : "<<role<<endl;
    }
};
