

#include<iostream.h>
using namespace std;


          int StrlenX(char *Str)
          {
              int iCount = 0;

              while(*Str != '\0')
              {
                if((*Str == 'z'))
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

    cout<<"Enter String"<<"\n";
    cin>>Arr;
    
    iRet = StrlenX(Arr);

    cout<<"Length Is"<<iRet;

    return 0;
}