#include<stdio.h>
void num(int n);
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    num(n);
}
void num(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}