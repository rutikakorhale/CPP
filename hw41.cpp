
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
    int SumDigit()
    {
        int iDigit = 0;
        int iSum  = 0;
        int iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit= iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp/10;
        }
        return iSum;
    }       
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    iRet = dobj.SumDigit();
    cout<<"Digit Sum is"<<iRet<<"\n";
    return  0;

}