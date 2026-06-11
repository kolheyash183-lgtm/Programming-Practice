//write a program which accept number from user and display its factors in decresing order

//input : 12
//output : 6 4 3 2 1

//input : 12
//output :1

//input : 10
//output :  5 2 1 

#include<stdio.h>
void FactRev(int iNo)
{
 int i = 0;

    for(i = (iNo / 2); i >= 1; i--)
    {
        if((iNo % i) == 0)
        {
            printf("%d\t",i);
        }
    }

}

int main()
{
    int iValue = 0;
     printf("Enter number");
     scanf("%d",&iValue);

     FactRev(iValue);

     return 0;
}
    
