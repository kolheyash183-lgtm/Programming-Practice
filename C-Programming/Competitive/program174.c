//Check whether 7th, 8th & 9th bit is on or off
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0;

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th, 8th and 9th bits are ON\n");
    }
    else
    {
        printf("Required bits are OFF\n");
    }

    return 0;
}
