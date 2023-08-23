
// pattern priting
#include<iostream.h>
using namespace std;
class pattern
{
    private:
           int iRow;
           int iCol;
    public:
    pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }
    void Display()
    {
        int i =0, j= 0;
        char ch = '\0';
        for(i = 1, ch = 'A'; i <= iRow; i++,ch++)
        {
            for(j = 1; j <= iCol; j++)
            {
                cout<<ch<<"\t";
            }
            cout<<"\n";
        }
        
    }       
};
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    cout<<"ENter Row"<<"\n";
    cin>>iNo1;
    cout<<"Enter Colum"<<"\n";
    cin>>iNo2;
    pattern pobj(iNo1,iNo2);
    pobj.Display();
    return 0;



}

