#include<stdio.h>//calling by value
void swap(int x,int y);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("a is %d & b is %d\n",a,b);
    return 0;
}
void swap(int x,int y)
{
    int z=0;
    z=x;
    x=y;
    y=z;
    printf("x is %d & y is %d\n",x,y);
}