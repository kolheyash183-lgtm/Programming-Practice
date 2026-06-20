//Accept N numbers from user and accept one another one another number as NO , return index of last occurence of thet NO.
#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int Length, int No)
{
    int i;
    int Index = -1;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] == No)
        {
            Index = i;
        }
    }

    return Index;
}

int main()
{
    int Size = 0, iCnt = 0, Value = 0, iRet = 0;
    int *p = NULL;

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

    iRet = LastOcc(p, Size, Value);

    printf("Last occurrence is : %d", iRet);

    free(p);

    return 0;
}
