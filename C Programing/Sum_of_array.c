#include<stdio.h>
int sum(int ar[],int x);//int x for length of array
int main()
{
    int x;
    printf("enter number of elements: ");
    scanf("%d",&x);
    int array[x];
    for (int i = 0; i < x; i++)
    {
        int a;
        scanf("%d",&a);
        array[i]=a;
    }
    printf("sum of arrays is: %d",sum(array,x));//calling of function
    return 0;
}
int sum(int ar[],int x)
{
    int sum=0;
    for (int j = 0; j < x; j++)
    {
        sum+=ar[j];
    }
    return sum;
}