//Accept N numbers from user and display all such elemnts which are multiples of 11.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int Length)
{
    int i = 0;

    for(i = 0; i < Length; i++)
    {
        if(Arr[i] % 11 == 0)
        {
            printf("%d\t",Arr[i]);
        }
    }
}

int main()
{
    int Size = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&Size);

    p = (int *)malloc(Size * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",Size);

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Display(p, Size);

    free(p);

    return 0;
}
