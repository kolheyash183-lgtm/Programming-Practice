//Write a program which accept string from user and accept one chracter return index of last occurrence of that charcater
#include<stdio.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = i;
        }

        i++;
        str++;
    }

    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    getchar();

    printf("Enter character : ");
    scanf("%c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d\n",iRet);

    return 0;
}
