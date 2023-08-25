#include<stdio.h>
int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    if (x=2)
    {
        printf("prime number");
    }
    else if (x>0)
    {

        for (int i = 2; i <x ; i++)
        {
            if (x%i==0)
            {
                printf("this is not a prime number\n");
                break;
            }
            else
            {
                printf("this is a prime number\n");
                break;
            }   
        }     
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}