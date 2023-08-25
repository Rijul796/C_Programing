#include<stdio.h>
int main()//perfect square
{
    int a,b;
    printf("enter a and b : ");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        for(int j=a;j<=i;j++)
        {
            if(j*j==i)//1*1 for first loop, 1*1 then 2*2 for second loop in j
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}