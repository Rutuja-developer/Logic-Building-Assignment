//even factorial of given number.
//Input : 5
//Output : 8    (4*2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 ==0)
        {
            iFact = iFact * iCnt;
        }
        
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}
