//Accept N numbers from user and return differnt between frequency of even number and odd numbers
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, EvenCnt = 0, OddCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            EvenCnt++;
        }
        else
        {
            OddCnt++;
        }
    }

    return EvenCnt - OddCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
