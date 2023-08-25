#include<stdio.h>
int main()
{
    int x;
    printf("enter length of array: ");
    scanf("%d",&x);
    int array[x];
    for (int i = 0; i < x; i++)
    {
        int a;
        printf("enter the element for %d place : ",i+1);
        scanf("%d",&a);
        array[i]=a;
    }
    int p;
    printf("Enter the position for deletion: ");
    scanf("%d",&p);
    for(int j=p-1;j<x-1;j++)
    {
        array[j]=array[j];
    }
    for (int n = 0; n < x-1; n++)
    {
        printf("array at position %d is: %d \n",n,array[n]);
    }
    return 0;
}
/*
void del(int array[],int n,int x);
int main()
{
    int n,x;
    printf("enter no of elements in array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        int a;
        printf("enter element at place %d: ",i);
        scanf("%d",&a);
        array[i]=a;
    }
    printf("enter the position ");
    scanf("%d",&x);
    del(array,n,x);
    return 0;
}
void del(int array[],int n,int x)
{
    for(int k=x-1;k<n;k++)
    {
        array[k]=array[k+1];
    }
    for (int w = 0; w < x; w++)
    {
        printf("element at position %d is %d\n",w,array[w]);
    }
}*/
/*
#include<stdio.h>
int main()
{
    int array[100];
    int i,n,max=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
        {
        max=array[i];
        }
    }
    printf("largest number is %d\n",max);
    int min=max;
    for(i=0;i<n;i++)
    {
        if(array[i]<min)
        {
        min=array[i];
        }
    }
    printf("smallest number is %d\n",min);
    return 0;
}*/