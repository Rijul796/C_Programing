#include<stdio.h>
#include<string.h>
void slice(char srt[],int n,int m);
void value(char str[]);
int main()
{
    int n,m;
    char str[100];
    printf("enter a string: ");
    fgets(str,100,stdin);
    puts(str);
    value(str);
    printf("enter the starting index, value of n: ");
    scanf("%d",&n);
    printf("enter the ending index,value of m: ");
    scanf("%d",&m);
    slice(str,n,m);
    return 0;
}
void slice(char str[],int n,int m)
{
    for (int i = n; i <= m; i++)
    {
        printf("%c ",str[i]);
    }
}
void value(char str[])
{
    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("max value of m is: %d\n",count);
}