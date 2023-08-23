
// Digit 
#include<iostream.h>
using namespace std;
class Digit
{
    private:
           float fNo;
        
    public:
    Digit(float X)
    {
        float fNo = X;
    }
    int AvarageDigit()
    {
        int iDigit = 0;
        int iCount = 0;
        int iTemp = 0;
        int iSum = 0;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp /10;
        }    return((float)iSum/float(iCount));        
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"ENter NUmber"<<"\n";
    cin>>iValue;
    Digit dobj(iValue);
    iRet = dobj.AvarageDigit();
    cout<<"Average is "<<iRet<<"\n";
    return  0;
}