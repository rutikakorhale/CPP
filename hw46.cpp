
// Digit 
#include<iostream.h>
#include<stdbool.h>
using namespace std;
class Digit
{
    private:
           int iNo;
    public:
    Digit(int X)
    {
        iNo = X;
    }
    bool CountDigit()
    {
        int iDigit = 0;
        bool bFalge = false;
        int iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 8)
            {
                bFalge = true;  
                break;
            }
            iTemp = iTemp /10;
            
        }
        return bFalge;
        
    }       
};
int main()
{
    int iValue = 0;
    bool bRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    bRet = dobj.CountDigit();
    if(bRet == true)
    {
        cout<<"8 digit is present"<<"\n";
    }
    else
    {
        cout<<"8 is not present"<<"\n";
    }
    return  0;

}