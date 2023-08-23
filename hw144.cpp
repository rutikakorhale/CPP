
#include<iostream.h>
using namespace std;

class StringX
{
    private:
           char cname;
    public:
          StringX(char X)
          {
             cname = X;
          }

    bool ChKSmall()
    {
        bool bflage = false;

        if((cname >= 'a')&&(cname <= 'z'))
        {
            bflage = true;
        }
        return bflage;
    }             

};
int main()
{
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter Character\n";
    cin>>ch;

    StringX sobj(ch);
    bRet = sobj.ChKSmall();

   if(bRet == true)
   {
       cout<<"It Is a Small"<<"\n";  
   }
   else
   {
      cout<<"It Is a not Small"<<"\n";
   } 

    return 0;
}