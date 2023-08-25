#include<stdio.h>
#include<string.h>

void star(int n);
void star2(int n);
int main()
{
    printf("Program to print star pattern\n");
    int n,x;
    printf("enter value of n: ");
    scanf("%d",&n);
    printf("enter 1 for star and 2 for inverted star");
    scanf("%d",&x);
    if (x==1)
    {
        star(n);
    }
    else if(x==2)
    {
        star2(n);
    }
    else
    {
        printf("invalid input !");
    }
    
    return 0;
}
void star(int n)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void star2(int n)
{
    for (int i = 0; i <=n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}