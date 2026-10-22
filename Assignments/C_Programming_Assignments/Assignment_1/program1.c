#include<stdio.h>
#include<stdlib.h>

int Divide(int iN01, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return EXIT_FAILURE;
    }

    iAns = iN01 / iNo2;

    return EXIT_SUCCESS;

}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);
    
    printf("Division is %d",iRet);

    return EXIT_SUCCESS;
}
