
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
    int Minimum()
    {
        int iCnt = 0;
        int iMin = 9;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((iMin > Arr[iCnt]))
            {
                iMin = Arr[iCnt];
            }
            
        }
        return iMin;
        
    }               
};
int main()
{
    int iNo = 0;
    int iRet = 0;
    cout<<"ENter Array of Element"<<"\n";
    cin>>iNo;
    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Minimum();

    cout<<"Minimun Number is"<<iRet<<"\n";

    return 0;
}
