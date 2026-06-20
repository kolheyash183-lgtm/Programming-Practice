//Accept N numbers from user and return the largest number
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int i = 0;
    int Max = Arr[0];

    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }

    return Max;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p,iSize);

    printf("Largest Number is %d",iRet);

    free(p);

    return 0;
}
