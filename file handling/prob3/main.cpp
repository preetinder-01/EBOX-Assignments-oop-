#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include<sstream>
#include<list>
using namespace std;
string* splitString(string str)
  {
    string* arr = new string[25];
    int i=0;
    string delimiter = ",";
    size_t pos = 0;
	string token;
	str+=",";
	while ((pos = str.find(delimiter)) != string::npos) 
	{
        token = str.substr(0, pos);
        arr[i]=token;
        str.erase(0, pos + delimiter.length());
        i++;
	}
    return arr; 
  }
int main()
{
 char ch; 
 ifstream fin("readeventdetails.txt"); 
 ofstream fout("writeeventdetails.txt"); 
 while(!fin.eof()) 
 { 
     fin.get(ch); 
     fout << ch; 
 } 
 fin.close(); 
 fout.close(); 

	  return 0;
 }
 
 

