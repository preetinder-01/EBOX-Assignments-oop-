#include <iostream>
#include<string.h>
using namespace std;
class User{
    public:
        string name;
        string userName;
        string password;
        
        User(string name,string userName,string password)
        {
            this->name = name;
            this->userName = userName;
            this->password = password;
        }
        User(){}
        
        
        User * getUserDetails(){
            User *user = new User[5];
            user[0]= User("Abi","Abinaya","abi123");
            user[1]= User("Arun","Arunsoorya","arun456");
            user[2]= User("Sbi","Sbiharan","sbi789");
            user[3]= User("Sidhu","Siddarth","sid123");
            user[4]= User("Vivi","Viveka","vivi456");
            return user;
        }
        
        void setName(string a)
        {
            this->name = a;
        }
        
        void setUserName(string a)
         {
            this->userName = a;
        }
        
        void setPassword(string a)
        {
            this->password = a;
        }
        
        string getName()
        {
            return name;
        }
        
        string getUsername(string a)
        {
            return userName;
        }
        
        string getPassword()
        {
            return password;
        }
        
    void display(string s)
    {
        if(s=="No")
        {
            cout<<"Invalid username/password";
        }
        else
        {
            cout<<"Hiii..."<<s<<" !! Welcome to the event!!!";
        }
    }
        
    friend string validate(string uname,string pword);    
        
};
