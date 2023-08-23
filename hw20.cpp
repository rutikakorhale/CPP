
// Factor
#include<iostream.h>
#include<stdbool.h>
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
    int DisplayFactor()
    {
        int iCnt = 0;
        int iSum = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
    bool CheakPerfect()
    {
        int iResult = 0;
        iResult = DisplayFactor();
        if(iResult == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
      

};

int main()
{
    int iValue = 0;
    bool bRet = 0;
    cout<<"Enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    nobj.DisplayFactor();
    nobj.CheakPerfect();
    if(bRet == true)
    {
        cout<<"It is a perfect Number"<<bRet<<"\n";
    }
    else
    {
        cout<<"It is a not a perfect Number"<<bRet<<"\n";
    }
    return 0;

}
