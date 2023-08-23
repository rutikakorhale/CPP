
// Factorial
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
    void DisplayF()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"\t";
        } 
    }       

};
int main()
{
    int iValue = 0;
    cout<<"Enter Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    nobj.DisplayF();
    return 0;
}