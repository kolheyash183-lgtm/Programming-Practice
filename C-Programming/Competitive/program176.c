//Write a program which accept one number from user and off 7th  bit of that number return modified number
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0xFFFFFFBF;   // ~(1 << 6)
    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Modified number : %u\n",iRet);

    return 0;
}
