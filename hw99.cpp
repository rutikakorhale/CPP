
#include<iostream.h>
using namespace std;
class Array
{
    private:
           int iSize;
           int *Arr;
    public: 
    Array(int iNo)
    {
        iNo = iSize;
        Arr = new int[iSize];
    } 
    ~Array()
    {
        delete[]Arr;
    }
    void Accept()
    {
        cout<<"Enter Array of Element"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"Array Of Element is"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
    bool SearchNumber()
    {
        int iCnt = 0;
        int iValue = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((Arr[iCnt] == iValue))
            {
                break;
            }

        } 
        if(Arr[iCnt] == iValue)
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
    int iNo = 0;
    int iValue = 0;  
    bool bRet = false;
    cout<<"ENter Array of Element"<<"\n";
    cin>>iNo;
    cout<<"Enter Element You want Search"<<"\n";
    cin>>iValue;
    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    bRet = aobj.SearchNumber();
    if(bRet == true)
    {
        cout<<"Number is Present"<<iValue<<"\n";
    }
    else
    {
        cout<<"Nuumber is not Present"<<iValue<<"\n";
    }

    return 0;
}
