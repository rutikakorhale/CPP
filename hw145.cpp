
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

    bool ChKDigit()
    {
        bool bflage = false;

        if((cname >= '0')&&(cname <= '9'))
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
    bRet = sobj.ChKDigit();

   if(bRet == true)
   {
       cout<<"It Is a Digit"<<"\n";  
   }
   else
   {
      cout<<"It Is a not Digit"<<"\n";
   } 

    return 0;
}