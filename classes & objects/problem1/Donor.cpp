#include<iostream>
using namespace std;
class Donor
{
    public:
    char name[20];
    int age;
    float height;
    float weight;
    char gender[10];
    char bloodGroup[5];
    
    void display()
    {
       
            cout<<"Donor details are :"<<endl;
            cout<<"Name :"<<name<<endl;
            cout<<"Age :"<<age<<endl;
            cout<<"height :"<<height<<endl;
            cout<<"weight :"<<weight<<endl;
            cout<<"Gender :"<<gender<<endl;
            cout<<"Blood Group :"<<bloodGroup<<endl;
            
        
        //Fill your code here
    }
};