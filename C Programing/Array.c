#include<stdio.h>
void num(int array[],int n);
int main()
{
    int x[5]={1,2,3,4,5};
    num(x,5);
    return 0;
}
void num(int array[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  %d",array[i]);
    }
    printf("\n");
}