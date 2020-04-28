#include<iostream>
#include<string>
using namespace std;
class Purchase
{
    private:
    string userName;
    int countOfItems;
    static int totalCountOfItems,totalAmt;
    float amount;
	public:
	void set()
	{
		cout<<"Enter the Name of the customer :"<<endl;
		cin>>userName;
		cout<<"Enter the No of Items purchased :"<<endl;
		cin>>countOfItems;
		cout<<"Enter the purchase amount :"<<endl;
		cin>>amount;
	}
	string unshow()
	{
		return userName;
	}
	int cotshow()
	{
		return countOfItems;
	}
	float ashow()
	{ 
		return amount;
	}
	void sumtc(Purchase obj);
	void suma(Purchase obj);
		void displaytc();
		void displaya();
};