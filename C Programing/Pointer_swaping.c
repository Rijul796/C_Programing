#include<stdio.h>
#include<string.h>
void rev(int *a,int *b);
int main()
{
    int x,y;
    printf("enter value of x and y: ");
    scanf("%d%d",&x,&y);
    printf("value of x is: %d\n value of y is: %d\n",x,y);
    rev(&x,&y);
    printf("value of x is: %d\n value of y is: %d\n",x,y);
    return 0;
}
void rev(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}