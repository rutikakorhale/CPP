
#include<iostream.h>
using namespace std;
class Number
{
    private:
           int iBase;
           int iPower;
    public:
    Number(int X, int Y)
    {
        iBase = X;
        iPower= Y;
    }
    int CalCaultePower()
    {
        int iCnt = 0;
        int iResult = 1;
         iCnt = 1;
        while(iCnt <= iPower)
        {
            iResult = iResult*iPower;
            iCnt++;
        }
        return iResult;
    }        
};
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    cout<<"enter Base"<<"\n";
    cin>>iValue1;
    cout<<"Enter Power"<<"\n";
    cin>>iValue2;
    Number nobj(iValue1,iValue2);

    iRet = nobj.CalCaultePower();

    cout<<"power is"<<iRet;


    return 0;
}