//Write a program which accept number from user and display its multiplication of factors

//input : 12
//output : 144   (1* 2* 3* 4* 6)

//input : 13
//output : 1      (1)

//input : 10
//output : 10  (1* 2* 5)

#include<stdio.h>
int MultiFact(int iNo)
{
    int i = 0;
    int iMultiFact = 1;

    for(i = 1; i <= (iNo / 2); i++)
    {
        if((iNo % i) == 0)
        {
            iMultiFact = iMultiFact * i;
        }
    }

    return iMultiFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;

}
