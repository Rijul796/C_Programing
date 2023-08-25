#include <stdio.h>
int main()
{
    int x ;
    printf("enter x : ");
    scanf("%d",&x);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=",x,i);
        printf("%d\n",x*i);
    }
 /*   for (int i = 10; i >= 1; i--)
    {
        printf("%d*%d=",x,i);
        printf("%d\n",x*i);
    }
    return 0;*/
}