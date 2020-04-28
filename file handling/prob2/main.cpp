#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
#include<list>
#include<iterator>
#include<sstream>
#include"UserBO.cpp"
using namespace std;
int main()
{
    string s;
    int n,i;
    ofstream file("example.txt");
    cout<<"Enter the number of users:\n";
    cin>>n;
    User u[n];
    UserBO a;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the name of user:\n";
        cin>>s;
        u[i].setName(s);
        cout<<"Enter the contact number:\n";
        cin>>s;
        u[i].setContactNumber(s);
        cout<<"Enter the username:\n";
        cin>>s;
        u[i].setUsername(s);
        cout<<"Enter the password:\n";
        cin>>s;
        u[i].setPassword(s);
    }
    a.writeUserdetails(file,u,n);
     cout<<"Datas written in file successfully\n";
        return 0;
}