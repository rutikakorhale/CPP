
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
    int MinDigit()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iCount = 0;
        int imin = 9;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit < imin)
            {
                imin = iDigit; 
            }
            iTemp = iTemp /10;
            
        }
        return imin;
    
        
    }       
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    iRet = dobj.MinDigit();
    cout<<"Minmmum of Digit"<<iRet<<"\n";
    return  0;

}