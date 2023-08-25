//sum of all elements of a matrix
#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the elements: \n");
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("sum of elements of the matrix is :\n");
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=ar[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}