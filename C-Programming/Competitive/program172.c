//check whether 5th & 8th bit is ON or OFF
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010;

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
        printf("5th and 18th bits are ON\n");
    }
    else
    {
        printf("5th and 18th bits are OFF\n");
    }

    return 0;
}
