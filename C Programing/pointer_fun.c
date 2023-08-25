#include<stdio.h>//calling by refrence
void fn(int a,int b,int *sum,int *pro,int *avg);
int main()
{
    int x,y,sum,pro,avg;
    printf("enter the value of x and y: ");
    scanf("%d%d",&x,&y);
    fn(x,y,&sum,&pro,&avg);
    printf("sum is %d , product is %d , average is %d ",sum,pro,avg);
    return 0;
}
void fn(int a,int b,int *sum,int *pro,int *avg)
{
    *sum=a+b;
    *pro=a*b;
    *avg=(a+b)/2;
}