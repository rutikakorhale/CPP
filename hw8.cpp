// filter.
#include<iostream>
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
        if(iNo < 0)
        {
            cout<<"Please Enetr Positive Value"<<"\n";
            return;
        }
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<"Jay Ganesh.."<<"\n";
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