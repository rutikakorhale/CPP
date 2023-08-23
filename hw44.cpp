
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
    int CountDigit()
    {
        int iDigit = 0;
        int iCount  = 0;
        int iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 8)
            {

                break;
            }
            iTemp = iTemp/10;
            
        }
        if(iDigit == 8)
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
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    iRet = dobj.CountDigit();
    if(iRet == true)
    {
        cout<<"8 digit is present"<<"\n";
    }
    else
    {
        cout<<"8 is not present"<<"\n";
    }
    return  0;

}