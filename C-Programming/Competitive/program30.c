//write a program which accept number from user and display its table in reverse order.

//input:2
//output:20 18 16 14 12 10 8 6 4 2 
//input:5
//output:5 10 15 20 25 30 35 40  45 50

//input:-5
//output:5 10 15 20 25 30 35 40  45 50

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    // Convert negative number to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}
