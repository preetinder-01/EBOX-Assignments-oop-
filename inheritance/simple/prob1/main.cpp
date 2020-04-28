#include <iostream>
using namespace std;
#include "Developer.cpp"
int main(void)
{
    string name,skills,role;
    int empId;
    int experience;
    Developer d;
    cout<<"Enter the name"<<endl;
    getline(cin,name);
    cout<<"Enter the experience"<<endl;
    cin>>experience;
    cout<<"Enter the employee id"<<endl;
    cin>>empId;
    cout<<"Enter the technical skills of the developer"<<endl;
    cin>>skills;
    cout<<"Enter the role of the developer"<<endl;
    cin>>role;
    d=Developer(name,experience,empId,skills,role);
    d.displayDetails();
    return 0;
}
