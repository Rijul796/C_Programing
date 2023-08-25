#include <stdio.h>
int a,b;
int main()
{
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b); 
    int s=sum(a,b);
    printf("sum is : %d\n",s);
    return 0;
}
int sum(int a,int b)
{
    return a+b ;
}