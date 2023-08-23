
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

    bool ChKCap()
    {
        bool bflage = false;

        if((cname >= 'A')&&(cname <= 'Z'))
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
    bRet = sobj.ChKCap();

   if(bRet == true)
   {
       cout<<"It Is a Capital"<<"\n";  
   }
   else
   {
      cout<<"It Is a not a Capital"<<"\n";
   } 

    return 0;
}