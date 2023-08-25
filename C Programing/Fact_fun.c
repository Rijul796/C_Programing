#include<stdio.h>
#include<string.h>
int factorial(int a);
int main()
{
    int num;
    printf("enter the value of num: ");
    scanf("%d",&num);
    printf("factorial of %d is: %d",num,factorial(num));
    return 0;
}
int factorial(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else
    return (a*factorial(a-1));
}