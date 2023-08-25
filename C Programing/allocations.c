#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    printf("enter the length of array: ");
    scanf("%d",&n);
    // int *ptr;
    // ptr=(int*) malloc(10*sizeof(int));
    // for (int i = 0; i < 3; i++)
    // {
    //     scanf("%d",&ptr[i]); 
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("output is %d\n",ptr[i]); 
    // }
    
    int *ptr;
    ptr=(int*) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]); 
    } 
    for (int i = 0; i < n; i++)
    {
        printf("output is %d\n",ptr[i]); 
    }
    

    printf("enter the new length of array: ");
    scanf("%d",&n);
    ptr=(int*) realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]); 
    }
    for (int i = 0; i < n; i++)
    {
        printf("output is %d\n",ptr[i]); 
    }
    
    free(ptr);
    return 0;
}