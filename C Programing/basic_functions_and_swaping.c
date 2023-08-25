#include<stdio.h>
int product(int x,int y);
int main()
{
    int a,b,mul;
    scanf("%d%d",&a,&b);
    mul=product(a,b);
    printf("product of numbers is %d",mul);   
    return 0;
}
int product(int x,int y)
{
    int res;
    res= x*y;
    return res;
}
//#include<stdio.h>
/*int sum(int a,int b);
int main()
{
    int x,y,add;
    scanf("%d%d",&x,&y);
    add=sum(x,y);
    printf("the sum is %d",add);
    return 0;
}
int sum(int a,int b)
{
    int add;
    add=a+b;
    return add;
}*//*
void w(int x ,int y);
int main()
{
    int a,b;
    printf("enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    w(a,b);
    return 0;
}
void w(int x, int y)
{
    printf("no befor swapping are %d,%d\n",x,y);
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("no. after swapping are %d,%d\n",x,y);
}*//*
void table(int n);
int main()
{
    int x;
    printf("enter value of num: ");
    scanf("%d",&x);
    table(x);
    return 0;
}
void table (int n)
{
    for (int i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
}*/
