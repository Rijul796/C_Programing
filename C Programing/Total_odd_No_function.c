#include<stdio.h>
void count(int x[],int n);
int main()
{
    int a[5]={1,2,3,4,5};
    count(a,5);
    return 0;
}
void count(int x[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]%2!=0)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
}