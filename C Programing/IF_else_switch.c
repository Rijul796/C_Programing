#include<stdio.h>
#include<string.h>

int main()
{
    int a,x=0;
    printf("enter value of a: ");
    scanf("%d",&a);
    if (a>=1)
    {
        x=1;
    }
    else if (a<=-1)
    {
        x=-1;
    }
    else
    x=0;
    switch (x)
    {
    case 0:
        printf("it is zero");
        break;
    case 1:
        printf("it is +ve");
        break;
    case -1:
        printf("it is -ve");
    default:
        printf("invalid");
        break;
    }
    return 0;
}