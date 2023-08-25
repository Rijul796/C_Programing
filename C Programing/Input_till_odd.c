#include <stdio.h>
int main()
{
    int x;
    do
    {
        printf("enter number : ");
        scanf("%d",&x);
        printf("num is %d\n",x);
        if (x%2!=0)
        {
            break;
        }  
    } 
    while (x%2==0);
    {
        printf("you entered a odd number");
    }    
}
