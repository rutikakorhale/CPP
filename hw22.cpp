
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
    int ChKPrime()
    {
        int iCnt = 0;
        bool bFlage = true;
        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                bFlage = false;
                break;
            }
        }
        return bFlage;

    }
};

int main()
{
    int iValue = 0;
    bool bRet = 0;
    cout<<"Enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    bRet = nobj.ChKPrime();
    if(bRet == true)
    {
        cout<<"It is a prime Number"<<"\n";
    }
    else
    {
        cout<<"It is a not a prime Number"<<"\n";
    }
    return 0;

}
