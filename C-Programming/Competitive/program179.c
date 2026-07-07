///write a program which accept one number from user and toggle 7th and 10th bit of that number return modifid number
#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x240;

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number : %u\n",iRet);

    return 0;
}
