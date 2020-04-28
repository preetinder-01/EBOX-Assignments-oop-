#include <iostream>
#include "Distance.cpp"
using namespace std;
int main()
{
    int feet,inches;
    Distance d,d1,d2;
    cout<<"Enter feet and inches of distance 1:"<<endl;
     int f, i;
     cin>>f;
     cin>>i;
     d1.setFeet(f);
     d1.setInches(i);
     cout<<"Enter feet and inches of distance 2:"<<endl;
     cin>>f;
     cin>>i;
     d2.setFeet(f);
     d2.setInches(i);
     
     d=d1+d2;
     d.display();
    return 0;
}
