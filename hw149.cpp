

#include<iostream.h>
using namespace std;


          int StrlenDigitX(char *Str)
          {
              int iCount = 0;

              while(*Str != '\0')
              {
                if((*Str >= '0')&&(*Str <= '9'))
                {
                   iCount++;
                }
                Str++;
                 
              } 
              return iCount;                    
         }

int main()
{
    char Arr[10];
    int iRet = 0;

    cout<<"Enter String"<<"\n";
    cin>>Arr;
    
    iRet = StrlenDigitX(Arr);

    cout<<"Length Is"<<iRet;

    return 0;
}