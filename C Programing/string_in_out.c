#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="hello";
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    char st[30];
    gets(st);//or fgets(st,30,stdin)
    puts(st);
    char s1[50];
    char s2[50];
    gets(s1);
    printf("enter s2 ");
    gets(s2);
    puts(strcat(s1,s2));
    strcpy(str,strcat(s1,s2));
    puts(str);
    return 0;
}