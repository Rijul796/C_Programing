#include<stdio.h>
#include<string.h>

int main()
{
    int a=9696;
    int *ptr=&a;
    printf("value in ptr is: %p\n",ptr);
    printf("size of ptr is: %d",sizeof(ptr));
    printf("value of a in ptr is: %d\n",*ptr);
    printf("addrss of a is %p\n",&a);
    int *n=NULL;
    printf("value of ptr n is: %p\n",n);
    ptr++;
    printf("%d",sizeof(ptr++));
    return 0;
}
/*
int main()
{
    int a=8;
    int *ptr=&a;
    printf("value of ptr is: %p\n",ptr);
    printf("value stored in address is : %d\n",*ptr);
    printf("value of block next to ptr is: %p",ptr+1);
    return 0;
} */
/*
#include<stdio.h>
#include<string.h>

int main()
{
    int a=69;
    int *ptr=&a;
    if(ptr != NULL)
    printf("value in the address of a is %d\n",*ptr);
    else
    printf("the ptr is a null pointer");
    return 0;
}*/