#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    int x;
    printf("enter value of x: ");
    scanf("%d",&x);
    // for(i=0;i<x;i++)
    // {
    //     printf("%d\n",i);
           //i++;//we can use it here also
    // }
    // do
    // {
    //     printf("%d",i);
    //     i++;
    // } while (i<=x);
    while (i<=x)            
    {
        i++;
        if (i==4)
        {
            continue;
        }
        printf("%d",i);
    }
    
    
    return 0;
}