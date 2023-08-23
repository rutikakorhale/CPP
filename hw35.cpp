
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
    void DisplayB()
    {
        int iCnt = 0;
         iCnt = iNo;
        while(iCnt >= 1)
        {
            cout<<iCnt<<"\n";
            iCnt--;
        }
    }        
};
int main()
{
    int iValue = 0;
    cout<<"enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);

    nobj.DisplayB();

    return 0;
}