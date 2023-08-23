
// Factorial
#include<iostream.h>
using namespace std;
class Number
{
    private:
           int iNo;
    public:
    Number(int X)
    {
        iNo = X;
    } 
    int Factorial()
    {
        int iCnt = 0;
        int iResult = 1;
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            iResult = iResult*iCnt;
        } 
        return iResult;
    }
         

};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    iRet = nobj.Factorial();
    cout<<"Factorial is"<<iRet;
    return 0;
}