#include <cstring>
#include<iostream>
#include<string>
#include "Item.cpp"  
using namespace std;
int main()
{  int choice;    
    char ch='y';    
	cout<<"\nMenu:";
	cout<<"\n1.Electronics";
	cout<<"\n2.Others";
	cout<<"\nEnter your choice:\n";
    cin>>choice;
    switch(choice) {
	case 1:
        {   cout<<"Enter details of the item"<<endl;
            string id, name;
            cout<<"Enter item id:"<<endl;
            cin>>id;
            cout<<"Enter the item name:"<<endl;
            cin>>name;
            Item i;
            i.setItemId(id);
            i.setItemName(name);
            cout<<"Item details"<<endl;
            i.display(); }
	break;
	case 2:
	{   cout<<"Enter details of the item"<<endl;
            string id, name, type, vendor,a;
            cout<<"Enter item id:"<<endl;
            cin>>id;
            cout<<"Enter the item name:"<<endl;
            cin>>name;
            cout<<"Enter the item type:"<<endl;
            getline(cin,a);
            getline(cin,type);
            cout<<"Enter the item vendor:"<<endl;
            getline(cin,vendor);
            Item i(id,name,type,vendor);
            cout<<"Item details"<<endl;
            i.display();
        }
  break;
	default:
		cout<<"Invalid choice";
		break;	}
		return 0;  }   
         