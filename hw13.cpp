
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
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            printf("%d\n",iCnt);
        }
    }      
};
int main()
{
    int iValue = 0;
    cout<<"Enetr Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    nobj.Display();
    return 0;
}