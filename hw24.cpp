
// power
#include<iostream.h>
using namespace std;
class Number
{
    private:
           int iBase1;
           int iPower2;
    public:
    Number(int X, int Y)
    {
        iBase1 = X;
        iPower2 = Y;
    }
    int ChKPower()
    {
        int iCnt = 0;
        int iResult = 1;
        for(iCnt = 1; iCnt <= iPower2; iCnt++)
        {
            iResult = iResult*iCnt;
        }
        return iResult;
        
    }

};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    cout<<"Enter Base"<<"\n";
    cin>>iValue1;
    cout<<"Enter Power"<<"\n";
    cin>>iValue2;
    Number nobj(iValue1,iValue2);
    iRet = nobj.ChKPower();
    cout<<"Power is"<<iRet<<"\n";
    return 0;

}
