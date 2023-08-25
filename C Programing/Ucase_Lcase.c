#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("it's an upper case character\n");
    }
    if (ch>='a' && ch<='z')
    {
        printf("it's an lower case character\n");
    }
    return 0;
}