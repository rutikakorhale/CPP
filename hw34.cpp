
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
    void Display()
    {
        int iCnt = 0;
         iCnt = 1;
        while(iCnt <= iNo)
        {
            cout<<iCnt<<"\n";
            iCnt++;
        }
    }        
};
int main()
{
    int iValue = 0;
    cout<<"enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);

    nobj.Display();

    return 0;
}