//Accept N numbers from user and display all such numbers which contains 3 digits in it
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;
    int No = 0;
    int Count = 0;

    for(i = 0; i < iLength; i++)
    {
        No = Arr[i];
        Count = 0;

        if(No < 0)
        {
            No = -No;
        }

        while(No != 0)
        {
            Count++;
            No = No / 10;
        }

        if(Count == 3)
        {
            printf("%d\t", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Digits(p,iSize);

    free(p);

    return 0;
}
