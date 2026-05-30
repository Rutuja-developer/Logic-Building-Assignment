#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)

{
    if(iNo == 0)
    {
        return TRUE;
    }

while(iNo > 0)
{
    int iDigit = iNo % 10;

    if(iDigit == 0)
    {
        return TRUE;
    }
    iNo = iNo / 10;
    
}
return FALSE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter number:");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("it contains Zero");
    }
    else
    {
         printf("it contains no Zero");
    }

    return 0;
}