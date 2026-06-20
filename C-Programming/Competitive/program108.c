//Accept number from user and display below pattern

#include<stdio.h>
void Pattern(int iNo)
{
    for(int i = 1; i <= iNo ; i++)
    {
    printf("%d\t*\t",i);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number of elements ");
    scanf("%d %d ",&iValue);

    Pattern(iValue);

    return 0;
}
