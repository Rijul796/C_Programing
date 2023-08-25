#include<stdio.h>
void print(int count);
int main()
{
    print(5);
    return 0;
}
void print(int count)
{
    if(count==0)
    {
        return;
    }
    printf("hello\n");
    print(count-1);
}
/*
void print(int count);
int main()
{
    int x;
    printf("enter the value of x: ");
    scanf("%d",&x);
    print(x);
    return 0;
}
void print(int count)
{
    if(count==0)
    {
        return;
    }
    printf("hello\n");
    print(count-1);
}*/