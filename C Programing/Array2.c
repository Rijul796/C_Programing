#include<stdio.h>
int main()
{
    int x;
    printf("enter the no. of elements in array: ");
    scanf("%d",&x);
    int array[x];
    for (int i = 0; i < x; i++)
    {
        int a;
        scanf("%d",&a);
        array[i]=a;
    }
    for (int j = 0; j < x; j++)
    {
        printf("array at index %d is %d\n",j,array[j]);
    }
    return 0;
}