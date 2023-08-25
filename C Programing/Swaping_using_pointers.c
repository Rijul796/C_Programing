#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("value of x is %d & y is %d\n",x,y);
    return 0;
}
void swap(int *a,int *b)
{
    int t=0;
    t=*a;//call by refrence
    *a=*b;
    *b=t;
    printf("value of a is: %d & b is : %d\n",*a,*b);
}