
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
    int CountDigit()
    {
        int iDigit = 0;
        int iCount  = 0;
        int iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit= iTemp % 10;
            iCount++;
            iTemp = iTemp/10;
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
    iRet = dobj.CountDigit();
    cout<<"Factorial Count is"<<iRet<<"\n";
    return  0;

}