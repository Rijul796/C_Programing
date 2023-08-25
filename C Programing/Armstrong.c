#include <stdio.h>
int main() 
{
    int n,arm=0;
    printf("enter a number: ");
    scanf("%d",&n);
    int num=n,rem;
    while(num>0)
    {
        rem=num%10;
        arm=(rem*rem*rem)+arm;
        num=num/10;
    }
    if(n==arm)
    {
        printf("number is armstrong\n");
    }
    else{printf("not armstrong\n");}
    return 0;
}