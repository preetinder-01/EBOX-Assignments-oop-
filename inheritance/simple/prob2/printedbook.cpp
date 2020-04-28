#include<iostream>
using namespace std;
#include "Book.h"
class PrintedBook: public Book{
    private:
    int numOfPages;
    string paperType;
    
    public:
    PrintedBook(){}
    PrintedBook(string name,string author,int price,string publication,int numOfPages,string paperType):Book(name,author,price,publication)
    {
        this->numOfPages=numOfPages;
        this->paperType=paperType;
    }
    
    void displayDetails()
    {
       cout<<"Printed Book Details"<<endl;
       cout<<"Name : "<<name<<endl;
       cout<<"Author : "<<author<<endl;
       cout<<"Price : "<<price<<endl;
       cout<<"Publication : "<<publication<<endl;
       cout<<"Number Of Pages : "<<numOfPages<<endl;
       cout<<"Paper Type : "<<paperType<<endl;

    }
};
