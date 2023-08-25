#include<stdio.h>
#include<string.h>

struct emp
{
    int id;
    char name[50];
}emp1,emp2;

int main()
{
    struct emp x,y;
    x.id=6969;
    strcpy(x.name,"sahil saharan");
    y.id=9696;
    printf("x id is: %d\ny id is: %d\n",x.id,y.id);
    printf("name of x is: %s",x.name);
    return 0;
}