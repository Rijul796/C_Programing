#include<stdio.h>
#include<string.h>

typedef struct company
{
    char name[50];
    int id;
}cpy;
int main()
{
    cpy a ;
    a.id=12;
    strcpy(a.name,"bachu");
    printf("size of str is: %d\n",sizeof(a));
    printf("id of a is: %d and name of a is: %s",a.id,a.name);
    return 0;
}
// typedf keywords gives a meaningful name to pre defined datatype 
//it can be used with struct to increase the readibility it can also be used with pointer