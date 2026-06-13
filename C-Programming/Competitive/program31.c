//write a program which accept number from user and display below pattern

//input : 5
//output: *  *  *  *  * #  #  #  #  #

//input : 6
//output: * * *  *  *  *  # #  #  #  #  #

//input : 2
//output: *  *   #  # 

#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    } 

    for(int iCnt=1;iCnt <=iNo;iCnt++)
    {
        printf("*\n");
    }
    for(int iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("#\n");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
