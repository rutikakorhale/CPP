
#include<iostream.h>
using namespace std;
#define ERR_NOTFOUND -1
class Array
{
    private:
           int iSize;
           int *Arr;
           
    public: 
    Array(int iNo)
    {
        iSize = iNo;
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
    int SearchLastOccurance()
    {
        int iCnt = 0;
        int iValue = 0;
        for(iCnt = iValue; iCnt < 0; iCnt--)
        {
            if((Arr[iCnt] == iValue))
            {
                break;
            }

        } 
        if(iCnt == iSize)
        {
            return ERR_NOTFOUND;
        }
        else
        {
            return iCnt;
        }
        
    }               
};
int main()
{
    int iNo = 0;
    int iValue = 0;  
    int iRet = 0;
    cout<<"Enter Array of Element"<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    cout<<"Enter Number you want Search"<<"\n";
    cin>>iValue;
    aobj.Display();
    
    iRet = aobj.SearchLastOccurance ();
    if(iRet == ERR_NOTFOUND)
    {
        cout<<"there is no such element"<<"\n";
    }
    else
    {
        cout<<"at Occurance Index"<<iRet<<"\n";
    }

    return 0;
}
