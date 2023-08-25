#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    if (x>=1)
    {
        printf("+ve");
    }
    else if (x<=-1)
    {
        printf("-ve");
    }
    else
    printf("ZERO");
    return 0;
}