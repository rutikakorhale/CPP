#include<iostream.h>
using namespace std;
class Number
{
    private:
           int iNo1;
           int iNo2;
    public:       
    Number(int X, int Y)
    {
          iNo1 = X;
          iNo2 = Y;
    }
    int Addition()
    {
        int iResult = 0;
        iResult = iNo1+iNo2;
        return iResult;
    }

};
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    cout<<"Enetr Frist Number"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second Number"<<"\n";
    cin>>iValue2;

    Number nobj(iValue1,iValue2);
    iRet = nobj.Addition();
    cout<<"Addtion is"<<iRet<<"\n";
    return 0;
}

