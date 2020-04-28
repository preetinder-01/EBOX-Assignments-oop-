#include <iostream>
using namespace std;
#include "EBook.cpp"

int main(void)
{
    string diskType,name,author,publication,paperType;
    int size,price,numOfPages;
    int ch;
    cout<<"Enter the type of book"<<endl;
    cout<<"1.PrintedBook"<<endl;
    cout<<"2.EBook"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            {
                PrintedBook p;
                cout<<"Enter the book name"<<endl;
                cin.ignore();
                getline(cin,name);
                cout<<"Enter the author name"<<endl;
                getline(cin,author);
                cout<<"Enter the price:"<<endl;
                cin>>price;
                cout<<"Enter the publication name:"<<endl;
                cin.ignore();
                getline(cin,publication);
                cout<<"Enter the number of pages of the book"<<endl;
                cin>>numOfPages;
                cout<<"Enter the paper type of the book"<<endl;
                cin.ignore();
                getline(cin,paperType);
                p=PrintedBook(name,author,price,publication,numOfPages,paperType);
                p.displayDetails();
            }break;
        case 2:
            {
                EBook e;
                cout<<"Enter the book name"<<endl;
                cin.ignore();
                getline(cin,name);
                cout<<"Enter the author name"<<endl;
                getline(cin,author);
                cout<<"Enter the price:"<<endl;
                cin>>price;
                cout<<"Enter the publication name:"<<endl;
                cin.ignore();
                getline(cin,publication);
                cout<<"Enter the disk type of the book"<<endl;
                getline(cin,diskType);
                cout<<"Enter the size of the disk"<<endl;
                cin>>size;
                e=EBook(name,author,price,publication,diskType,size);
                e.displayDetails();
                
            }break;
    }
    
    return 0;
}
