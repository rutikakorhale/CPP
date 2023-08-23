
#include<iostream>
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
    bool Cheak()
    {
        if((iNo % 2) == 0)
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
    bool bRet = false;

    cout<<"Enetr Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    bRet = nobj.Cheak();
    if(bRet == true)
    {
        cout<<"It is a Even Number"<<bRet<<"\n";
    }
    else
    {
        cout<<"It is a Odd Number"<<bRet<<"\n";
    }

    return 0;

}

