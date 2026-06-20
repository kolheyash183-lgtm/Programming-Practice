//Accept n numbers from user and display all such numbers which contain 3 digits in it
#include <stdio.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;
    int temp = 0;
    int count = 0;

    for(i = 0; i < iLength; i++)
    {
        temp = Arr[i];
        count = 0;

        if(temp < 0)
        {
            temp = -temp;
        }

        while(temp != 0)
        {
            count++;
            temp = temp / 10;
        }

        if(count == 3)
        {
            printf("%d ", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}
