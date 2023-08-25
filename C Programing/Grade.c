#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);
    if (marks<30 && marks>=0)
    {
        printf("grade is c \n");
    }
    if (marks>=30 && marks<=70)
    {
        printf("grade is b \n");
    }
    if (marks>70 && marks <=90)
    {
        printf("grade is a \n");
    }
    if(marks>90 && marks<=100)
    {
        printf("grade id a+ \n");
    }
    return 0;
}