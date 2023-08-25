#include<stdio.h>
int main()
{
    char name[]="vinod boi";
    for (int i = 0;name[i]!='\0'; i++)
    {
        printf("%c",name[i]);
    }
    printf("\n");
    char str[40];
    printf("enter the string: ");
    scanf("%s",str);//str is used in place of &str
    printf("string is %s",str);
    return 0;
}