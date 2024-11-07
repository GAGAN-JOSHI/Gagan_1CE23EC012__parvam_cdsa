#include<stdio.h>
#include<Ctype.h>
int main()
{
    char ch;
    printf("Enter:");
    scanf("%c",ch);
    if( is alpha(ch))
    {
        ch=ch^32;
        printf("converted character:%c\n",ch);
    }
    else
    {
        print("Invalid input\n");
    }
    return 0;
}