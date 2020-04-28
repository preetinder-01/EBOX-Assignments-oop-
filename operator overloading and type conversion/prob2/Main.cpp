#include<iostream>
#include "Time.cpp"
using namespace std;
Time & operator+(Time &t1,Time &t2) 
{
    //Time t;
    t1.hours += t2.hours;
    t1.minutes += t2.minutes;
    t1.seconds += t2.seconds;
    if(t1.seconds>59)
    {t1.minutes++;
    t1.seconds -= 60;}
    if(t1.minutes>59)
    {t1.hours++;
    t1.minutes-= 60;}
    if(t1.hours>23)
    t1.hours -= 24;

    return t1;
}
int main()
{
       Time t,t1,t2;
        int hr,min,sec;
        cout<<"Enter the first time:\n";
        cin>>hr;
        cin>>min;
        cin>>sec;
        t1.setHours(hr);
        t1.setMinutes(min);
        t1.setSeconds(sec);
        cout<<"Enter the second time:\n";
        cin>>hr;
        cin>>min;
        cin>>sec;
        t2.setHours(hr);
        t2.setMinutes(min);
        t2.setSeconds(sec);
         t = t1+t2; 
        cout<<"The sum of given time is:\n";
        if(t.getHours()<10)
        cout<<"0"<<t.getHours()<<":";
        else
        cout<<t.getHours()<<":";
        if(t.getMinutes()<10)
        cout<<"0"<<t.getMinutes()<<":";
        else
        cout<<t.getMinutes()<<":";
        if(t.getSeconds()<10)
        cout<<"0"<<t.getSeconds();
        else
        cout<<t.getSeconds();
return 0;
}
