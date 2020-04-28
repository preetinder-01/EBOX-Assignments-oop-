#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
class Item
{
    string name;
    int cost;
public:
    Item()
    {
    }
    Item(string name, int cost)
    {
        this->name = name;
        this->cost = cost;
    }
    void display()
    {
      cout<<"The item details are:\n";
      cout<<"Item name:"<<name<<endl;
      cout<<"Item cost:"<<cost<<endl;
    }
        void * operator new(size_t size)
        {
          cout<<"Overloading new operator\n";
          void * p = ::new Item();
          return p;
        }
 
    void operator delete(void * p)
    {
       cout<<"Overloading delete operator\n";
       free(p);
    }
};
