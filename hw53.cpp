
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
    int ReverseDigit()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iCount = 0;
        int iReverse = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iReverse = (iReverse*10)+iDigit;
            iTemp = iTemp /10;
            
        
         } return iReverse;
    
        
    }       
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    iRet = dobj.ReverseDigit();
    cout<<"Frequency of Even Digit is"<<iRet<<"\n";
    return  0;

}