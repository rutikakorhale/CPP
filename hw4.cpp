
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
    bool Divisible()
    {
        if(((iNo % 3) == 0) && ((iNo % 5 ) == 0))
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
    bool bRet = 0;

    cout<<"Enetr Number"<<"\n";
    cin>>iValue;
    Number nobj(iValue);
    bRet = nobj.Divisible();
    if(bRet == true)
    {
        cout<<"%d it is Divisible by 3 and 5"<<iValue<<"\n";
    }
    else
    {
        cout<<"%d it is not Divisible by 3 and 5"<<iValue<<"\n";
    }
    

    return 0;

}

