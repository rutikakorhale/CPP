

#include<iostream.h>
using namespace std;


          int StrlenVowelX(char *Str)
          {
              int iCount = 0;

              while(*Str != '\0')
              {
                if((*Str == 'a')||(*Str == 'e')||(*Str == 'i')||(*Str == 'o')||(*Str == 'u'))
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
    
    iRet = StrlenVowelX(Arr);

    cout<<"Length Is"<<iRet;

    return 0;
}