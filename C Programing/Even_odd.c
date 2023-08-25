#include <stdio.h>
int main(){
    int a;
    printf("enter the value of a : ");
    scanf("%d",&a);
    if (a>=0)
    {
        printf("a is a positive number\n");
        if (a%2==0)
        {
            printf("a is even");
        }
        else
        {
            printf("a is odd");
        }
    }
    else
    {
        printf("number is negative");
    }
    return 0;
}

