//Accept character from user . if it is capital then display all the character from the input chraacters till Z . if input chracter  is small then print all the chracters in reverse order till A . in other cases return directly

#include<stdio.h>

void Display(char ch)
{
    char c = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(c = ch; c <= 'Z'; c++)
        {
            printf("%c\t",c);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(c = ch; c >= 'a'; c--)
        {
            printf("%c\t",c);
        }
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
