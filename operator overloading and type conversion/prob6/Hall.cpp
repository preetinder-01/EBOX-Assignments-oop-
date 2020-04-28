#include <iostream>

using namespace std;

class Hall 
{
   public:
   int* arr;
   int size;
   Hall(int a)
   {
      size=a;
      arr=new int[a];
   }
   int operator [](int i)
   {
       if(i<size)
       {
       return arr[i];
       
       }
       else
       {cout<<"Hall "<<i<<" does not exist\n";
       return 0;}
      
   }
   
};
