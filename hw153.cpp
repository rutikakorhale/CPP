

#include<iostream.h>
using namespace std;


          int StrlenX(char *Str, char cname)
          {
              int iCount = 0;

              while(*Str != '\0')
              {
                if((*Str == cname))
                {
                   iCount++;
                }
                *Str++;
                 
              } 
              return iCount;                    
         }

int main()
{
    char Arr[10];
    int iRet = 0;
    char ch = '\0';

    cout<<"Enter String"<<"\n";
    cin>>Arr;

    cout<<"Enter Character you Want Search"<<"\n";
    cin>>ch;
    
    iRet = StrlenX(Arr, ch);

    cout<<"Length Is"<<iRet;

    return 0;
}