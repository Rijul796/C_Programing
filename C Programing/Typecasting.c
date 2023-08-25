#include<stdio.h>
#include<string.h>

int main()
{
    float a=10.6996;
    int b=99;
    printf("%d\n%f",(int)a,(float)b);

    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    int a=96;
    float b=6.9;
    void *ptr;
    ptr=&a;
    printf("value of a is: %d\n",*((int*)ptr));
    ptr=&b;
    printf("value of b is: %f",*((float*)ptr));
    return 0;
}