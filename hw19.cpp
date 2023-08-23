
// Factor
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

};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    nobj.DisplayFactor();
    cout<<"Summation of Factor is:"<<iRet<<"\n";
    return 0;

}
