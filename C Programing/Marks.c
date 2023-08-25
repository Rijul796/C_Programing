#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks 0 to 100 \n");
    printf("enter marks : ");
    scanf("%d",&marks);
    if(marks>30 && marks<=100)
    {
        printf("pass \n");
    }
    if (marks<30 && marks>=0)
    {
        printf("try again in next sem \n");
    }
    else if (marks<0 || marks>100)
    {
        printf("invalid input \n");
    }
    return 0;
}