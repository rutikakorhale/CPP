
// Digit 
#include<iostream.h>
using namespace std;
class Digit
{
    private:
           int iNo;
           int iSerach;
    public:
    Digit(int X, int Y)
    {
        iNo = X;
        iSerach = Y;
    }
    bool SearchDigit()
    {
        int iDigit = 0;
        int iTemp = iNo;
        if((iNo < 0)||(iSerach < 0))
        {
            iNo = -iNo;
        }
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == iSerach)
            {
                 break;
            }
            iTemp = iTemp /10;
            
        }
        if(iDigit == iSerach)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }       
};
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue1;
    cout<<"Enter Number You want Search"<<"\n";
    cin>>iValue2;
    Digit dobj(iValue1,iValue2);
    bRet = dobj.SearchDigit();
    if(bRet == true)
    {
        cout<<"Number is Present"<<"\n";
    }
    else
    {
        cout<<"Number is not Present"<<"\n";
    }
    return  0;

}