//Writw a program which accept distance in kilometer and convert into meter.(1.kilometer = 1000 meter)

//Input : 5
//Output : 5000

//Input : 12
//Output : 12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distane in meter is:%d\n",iRet);

    return 0;


}
