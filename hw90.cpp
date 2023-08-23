
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
        Arr = new int [iSize];
    }
    ~Array()
    {
        delete[]Arr;
    }
    void Accept()
    {
        cout<<"Array of Elemnts"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    } 
    void Display()
    {
        cout<<"Array of Elemnts is"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
    int Addtion()
    {
        int iSum = 0;
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum; 

    }

};
int main()
{
    int iNo = 0;
    int iRet = 0;
    cout<<"Enter Array of Elemnet"<<"\n";
    cin>>iNo;
    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.Addtion();
    cout<<"Addtion is"<<iRet<<"\n";

    return 0;
}