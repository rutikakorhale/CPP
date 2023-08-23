
// pattern priting
#include<iostream.h>
using namespace std;
class pattern
{
    private:
           int iRow;
           int jCol;
    public:
    pattern(int X, int Y)
    {
        iRow = X;
        jCol = Y;
    }
    void Display()
    {
        int i =0, j= 0;
        char ch = '\0';
        if(iRow != jCol)
        {
            cout<<"Invalid Input"<<"\n";
            return ;
        }
    
        for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= jCol ; j++)
            {
                if((i <= j))
                {
                    cout<<"*"<<"\t";
                }
                else
                {
                    cout<<" "<<"\t";
                }
            }
            cout<<"\n";
            for(i = iRow; i >= 1; i--)
            {
                for(j = jCol; j >= 1; j--)
                {
                    if((i >= j))
                    {
                        cout<<"*"<<"\t";
                    }
                    else
                    {
                        cout<<" "<<"\t";
                    }
                }
                cout<<"\n";
            }
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

