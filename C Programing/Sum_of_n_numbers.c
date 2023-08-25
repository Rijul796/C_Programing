#include <stdio.h>
int main()
{
    int x;
    printf("enter number : ");
    scanf("%d",&x);
    int sum=0;
    for (int i = 0; i <= x; i++)
    {
        sum+=i;
    }
    printf("sum of x numbers is : %d\n",sum);
    return 0;
}