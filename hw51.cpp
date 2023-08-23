
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
    int EvenDigit()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iCount = 0;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if((iDigit % 2) == 0)
            {
                 iCount++;
            }
            iTemp = iTemp /10;
        }
        return iCount;
        
    }       
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    iRet = dobj.EvenDigit();
    cout<<"Frequency of Even Digit is"<<iRet<<"\n";
    return  0;

}