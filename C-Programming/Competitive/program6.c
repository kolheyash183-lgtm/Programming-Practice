#include<stdio.h>
void Display(int iNo)
{
    int iCnt =0;
    //Wreite Updater
    while(iCnt < iNo)
    {
        printf("*\n");
        iCnt++;

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scnaf("%d",&iValue);

    Display(iValue);

    return 0;
}
