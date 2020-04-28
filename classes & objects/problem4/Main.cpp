#include <iostream>
#include<string>
#include<stdio.h>
#include "Purchase.cpp"
using namespace std;

  int Purchase::totalAmt=0;
     int Purchase::totalCountOfItems=0;
     void Purchase::sumtc(Purchase obj)
     {
	 	totalCountOfItems=totalCountOfItems+obj.countOfItems;
	  }
	  void Purchase::suma(Purchase ob)
	  {
	  	totalAmt=totalAmt+ob.amount;
	   }
	   void Purchase::displaytc()
	   {
	   	cout<<"Total Number of Items sold :"<<totalCountOfItems<<endl;
	   }
	   void Purchase::displaya()
	   {
	   	cout<<"Total Amount Received :"<<totalAmt<<endl;
	   }
int main()
{
    int a,b,i;
	cout<<"Enter the Number of customers :"<<endl;
	cin>>a;
	Purchase d[a];
	Purchase h;
	for(i=0;i<a;i++)
	{
		d[i].set();
	}
	cout<<"Purchase Details :"<<endl;
        for(i=0;i<a;i++)
	{
		cout<<"Customer "<<i+1<<" :"<<d[i].unshow()<<endl;
		cout<<"No of Items purchased :"<<d[i].cotshow()<<endl;
		cout<<"Purchase amount :"<<d[i].ashow()<<endl;
	}
		for(i=0;i<a;i++)
		{
			d[i].sumtc(d[i]);
		}
		for(i=0;i<a;i++)
		{
			d[i].suma(d[i]);
		}
		h.displaya();
		h.displaytc();
}
