#include<stdio.h>
#include<string.h>//to use string functions
int main()
{
    char st[100];
    printf("enter st string: ");
    fgets(st,100,stdin);//for input of string
    puts(st);//for output
    int sum=0;
    for (int i = 0; st[i] != '\0'; i++)
    {
        sum+=1;
    }
    printf("length of string is %d\n",sum);
    int len;
    len=strlen(st);//for length of string
    printf("length using strlen fxn: %d\n",len);
    char str[100];
    printf("enter str string: ");
    fgets(str,100,stdin);
    puts(str);
    strcat(st,str);//concatinate st with str in st
    puts(st);
    strcpy(st,str);//to copy string
    printf("copied string is: ");
    puts(st);
    return 0;
}