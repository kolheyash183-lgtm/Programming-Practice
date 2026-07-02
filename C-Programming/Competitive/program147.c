//Accept character from user . if character is small display its corresoponding capital chracter , and if it small then display its coorresponding capiytal in other cases display  as it is.

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n", ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n", ch + 32);
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
