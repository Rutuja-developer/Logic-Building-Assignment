//acept number from user and display its table in reverse order.
// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}