
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
    void DisplayEven()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                cout<<Arr[iCnt];
            }
        }
    }               
};
int main()
{
    int iNo = 0;
    cout<<"ENter Array of Element"<<"\n";
    cin>>iNo;
    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    aobj.DisplayEven();

    return 0;
}
