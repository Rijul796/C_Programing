#include<stdio.h>
#include<string.h>
//extern int var = value; is used to access a var value in a function from outside the function 
int global=69;//it will be stored in data segment in memory
int main()
{
    int a,b;//bss segment
    static int c=6;//it will be stored in data segment in memory
    int local=96;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    printf("global var is %d and value of local var is %d\n",global,local);
    printf("value of static int c is %d",c);
    return 0;
}
