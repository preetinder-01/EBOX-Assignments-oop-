#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
#include<list>
#include<iterator>
#include<sstream>
using namespace std;
class User
{
    string name;
    string username;
    string password;
    string contactnumber;
    public:
    void setName(string name)
    {
        this->name=name;
    }
    void setUsername(string username)
    {
        this->username=username;
    }
    void setPassword(string password)
    {
        this->password=password;
    }
    void setContactNumber(string contactnumber)
    {
        this->contactnumber=contactnumber;
    }
    string getName()
    {
        return name;
    }
    string getUsername()
    {
        return username;
    }
    string getPassword()
    {
        return password;
    }
    string getContactNumber()
    {
        return contactnumber;
    }
    
};
