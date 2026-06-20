//Accept N numbers from user and accept one accept one another number as NO, check whetheer NO is present or not.
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int Length, int No)
{
    int i;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] == No)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int Size = 0, iCnt = 0, Value = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&Size);

    printf("Enter the number : ");
    scanf("%d",&Value);

    p = (int *)malloc(Size * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, Size, Value);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}
