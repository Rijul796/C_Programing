#include<stdio.h>
#include<string.h>
void con(char x[],char y[]);
int main()
{
    char str1[100],str2[100];
    printf("enter string1: ");
    fgets(str1,100,stdin);
    printf("enter string2: ");
    fgets(str2,100,stdin);
    con(str1,str2);
    return 0;
}
void con(char x[],char y[])
{
    strcat(x,y);
    puts(x);
}