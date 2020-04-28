#include <cstring>
#include<iostream>
#include<string>
#include "ItemTypeBO.cpp"
using namespace std;
int main()
{
    int n ;
    string  ItemName;
    double    ItemDeposit;
    double    CostPerDay;
    
    cout<<"Enter the number of Itemtypes:"<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Invalid Number";
        return 0;
    }
    
    ItemType ob[n];
    ItemTypeBO get;
    
    for(int i =0; i<n; i++)
    {
        string dummy;
        getline(cin, dummy);
        
        cout<<"Enter details of item type "<<i+1<<endl;
        cout<<"Enter the Itemtype name:\n";
        getline(cin, ItemName);
        
        cout<<"Enter the deposit:"<<endl;
        cin>>ItemDeposit;
        
        cout<<"Enter cost per day:"<<endl;
        cin>>CostPerDay;
        
        ob[i] = get.createItemType(ItemName, ItemDeposit, CostPerDay);

    }

    string dummy;
    getline(cin,dummy);
    cout<<"Enter the item name to be searched:\n";
    getline(cin,ItemName);
    
    int x = get.searchItemTypeByName(ob,n,ItemName);
    
    if(x)
    {
        cout<<"ItemType found"<<endl;
    }
    else
    {
        cout<<"ItemType not found"<<endl;
    }
    
    return 0;
}
