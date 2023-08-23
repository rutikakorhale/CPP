
// Factorial
#include<iostream.h>
using namespace std;
typedef unsigned long int ULONG;
class Number
{
    private:
           int iNo;
    public:
    Number(int X)
    {
        iNo = X;
    } 
    ULONG Factorial()
    {
        int iCnt = 0;
        int iResult = 1;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iResult = iResult*iCnt;
        } 
        return iResult;
    }
         

};
int main()
{
    int iValue = 0;
    ULONG iRet = 0;
    cout<<"Enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    iRet = nobj.Factorial();
    cout<<"Factorial is"<<iRet;
    return 0;
}