#include<stdio.h>
#include<stdlib.h>

typedef int bool;
#define true 1
#define false 0


int check(int iNo1)
{
    if((iNo1 % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number");
    scanf("%d/n",&iValue);

    bRet = check(iValue);

    if(bRet == true)
    {
        printf("It is Divisible by 5");
    }
    else
    {
        printf("It is not divisible by 5");
    }

    return EXIT_SUCCESS;
}