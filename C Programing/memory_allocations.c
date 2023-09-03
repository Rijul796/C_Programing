#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    // ptr=(int *)malloc(n*sizeof(int));//it allocates the n blocks of memory for n no. of intigers
    ptr=(int *)calloc(n,sizeof(int));//it sets the value 0 to all elements by default
    for (int i = 0; i < n; i++)
    {
        printf("enter the element at index %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("enter the element at index %d is  %d\n",i,ptr[i]);
    }
    //reallocation
    printf("enter the size of array: ");
    scanf("%d",&n);
    ptr=(int *)realloc(ptr,sizeof(int));//it changes/update the memory size 
    for (int i = 0; i < n; i++)
    {
        printf("enter the element at index %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("enter the element at index %d is  %d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}