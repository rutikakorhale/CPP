
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
    void  MaxMin()
    {
        int iCnt = 0;
        int iMax = 0;
        int iMin = 9;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((iMax < Arr[iCnt]))
            {
                iMax = Arr[iCnt];
            }
            if((iMin > Arr[iCnt]))
            {
                iMin = Arr[iCnt];
            }
        }
        cout<<"Minimum Number is"<<iMin<<"\n";
        cout<<"Maximum Number is"<<iMax<<"\n";
        
        

        
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
    aobj.MaxMin();

    return 0;
}
