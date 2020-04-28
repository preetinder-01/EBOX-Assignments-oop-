#include <iostream>
#include<fstream> 
#include<string.h>
using namespace std; 

int main()
{
   int now=0,nol=0;
     FILE *fr;
     char s[20],ch;
     cout<<"Enter the file name :\n";
     cin>>s;
     fr=fopen(s,"r");
     ch=fgetc(fr);
     while(ch!=EOF)
     {
          if(ch==' ')
               now++;
          if(ch=='\n')
          {
               nol++;
               now++;
          }
          ch=fgetc(fr);
     }
     fclose(fr);
     cout<<"Number of words in file : "<<now<<endl;
     cout<<"Numbers of lines in the file : "<<nol;

     return 0;
}