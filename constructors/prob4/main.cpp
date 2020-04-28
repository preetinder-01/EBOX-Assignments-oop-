#include <iostream>
#include<string.h>
#include "User.cpp"
using namespace std;
string validate(string uname,string pword){
    User u1;
    string valid = "No";
    User *u = u1.getUserDetails();
    for(int i = 0; i<5; i++)
    {
        if(uname == u->userName && pword == u->password)
        valid = u->name;
    }
    
    return valid;
}    
    
int main() {
    User u1;
    
    string name, uname, password;
    cout<<"Enter name:"<<endl;
    cin>>name;
    u1.setName(name);
    
    cout<<"Enter the username:"<<endl;
    cin>>uname;
    u1.setUserName(uname);
    
    cout<<"Enter the password:"<<endl;
    cin>>password;
    u1.setPassword(password);
    
    string valid = validate(uname,password);
    
    u1.display(valid);
}
