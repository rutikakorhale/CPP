
#include<stdio.h>
#define ERROR_NOTFOUND -1;

int fristOccurance(char *str, char *cname)
{
    int ipos = ERROR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cname)
        {
            ipos = *str;
            str++;
            break;
        }
    }

    if(cname == -1)
    {
        return ipos;
    }
    else
    {
        return *str;
    }

}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character you want Search\n");
    scanf(" %c",&ch);

    iRet = fristOccurance(Arr, ch);

    if(iRet == -1)
    {
        printf("It Is not a Frist Occurance %d\n",iRet);
    }
    else
    {
        printf("It Is a Firts Occurance %d\n",iRet);
    }


    return 0;
}