
// Digit 
#include<iostream.h>
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
    int MaxDigit()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iCount = 0;
        int imax = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit > imax)
            {
                imax = iDigit; 
            }
            iTemp = iTemp /10;
            
        }
        return imax;
    
        
    }       
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    iRet = dobj.MaxDigit();
    cout<<"Maximum of Digit"<<iRet<<"\n";
    return  0;

}