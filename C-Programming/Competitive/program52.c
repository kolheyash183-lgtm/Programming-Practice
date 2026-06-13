//write a program which accept range from user and display all even numbers in betwwen that range

//Input :  23 35 
//Output :  24  26  28  30  32  34  

//Input :  10 18
//Output : 10  12  14  16  18

#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
    int i = 0;
{
    if((i % 2)== 0)
    for(i = iStart; i < iEnd; i++ )
    {
        printf("%d\t",i++);
    }
}
}
int main()
{
    int iValue1 =0, iValue2 =0;
    
    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf(" Enter Ending point");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);
    return 0;

}

