//Accwpt number of rows and number of columns from user and display below pattern 
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';

        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
