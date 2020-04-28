#include <iostream>
#include "Hall.cpp"
using namespace std;
int main() 
{
  int n,i,k;
  string s;
  cout<<"Enter total number of halls\n";
  cin>>n;
  Hall h(n);
  for(i=0;i<n;i++)
  {
      cout<<"Post your rating for hall "<<i<<endl;
      cin>>h.arr[i];
  }
  
  start:
      cout<<"Enter the hall index to find its rating\n";
      cin>>k;
      i = h[k];
     if(i==0)
      {cout<<"Rating for hall "<<k<<" is 0\n";
        }
     else
     {
        cout<<"Rating for hall "<<k<<" is "<<i<<endl;
     }
      cout<<"Do you want to continue(yes/no):\n";
      cin>>s;
      if(s=="yes")
      {
          goto start;
      }
      
  
   return 0;
}

