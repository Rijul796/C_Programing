#include<stdio.h>
void max(int *x,int *y);
int main()
{
    int x,y;
    printf("enter the value of x and y: ");
    scanf("%d%d",&x,&y);
    max(&x,&y);
    printf("x is %d and y is %d\n",x,y);
    return 0;
}
void max(int *x,int *y)
{
    if (*x>*y)
    {
        printf("%d is greater\n",*x);
    }
    else
    printf("%d is greater\n",*y);
}