//Accept N numbers from user and accept Range , Display all elements from that range.
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int Length, int iStart, int iEnd)
{
    int i;

    for(i = 0; i < Length; i++)
    {
        if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
        {
            printf("%d\t", Arr[i]);
        }
    }
}

int main()
{
    int Size = 0, iCnt = 0;
    int Value1 = 0, Value2 = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&Size);

    printf("Enter starting point : ");
    scanf("%d",&Value1);

    printf("Enter ending point : ");
    scanf("%d",&Value2);

    p = (int *)malloc(Size * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Range(p, Size, Value1, Value2);

    free(p);

    return 0;
}
