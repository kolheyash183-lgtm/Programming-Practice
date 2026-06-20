//Accept N numbers from user and return product of all odd elements
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int Length)
{
    int i;
    int iProduct = 1;

    for(i = 0; i < Length; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iProduct = iProduct * Arr[i];
        }
    }

    return iProduct;
}

int main()
{
    int Size = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&Size);

    p = (int *)malloc(Size * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, Size);

    printf("Product is : %d", iRet);

    free(p);

    return 0;
}
