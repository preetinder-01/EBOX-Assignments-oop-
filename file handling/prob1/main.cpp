#include <iostream>
#include<fstream> 
using namespace std; 
int main() 
{ 
    char c; 
    string s;
    cout<<"Give filename:\n";
    cin>>s;
    if(s=="input.txt")
    {
        
    
    ifstream fin("input.txt"); 
    if(!fin) 
    {
        cout<<"File Does not Exist";  
        return 0; 
        
    } 
    while(!fin.eof()) 
    { 
        fin.get(c); 
        cout<<c;
        } 
        fin.close();
    }
    else
    cout<<"Error! Incorrect file.\n";
        
}