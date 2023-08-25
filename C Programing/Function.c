#include <stdio.h>
void i();
void f();
int main()
{
    char x;
    printf("enter i or f : ");
    scanf("%c",&x);
    if (x=='i')
    {
        i();
    }
    if (x=='f')
    {
        f();
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
void i()
{
    printf("hello \n");
}
void f()
{
    printf("hi\n");
}