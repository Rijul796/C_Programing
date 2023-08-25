//sum of 2 matrices 
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter no. of rows: ");
    scanf("%d",&a);
    printf("enter number of columns: ");
    scanf("%d",&b);
    printf("enter elements for first matrix\n");
    int matrix[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("enter elements for second matrix\n");
    int mtrx[a][b];
    for(int x=0;x<a;x++)
    {
        for(int z=0;z<b;z++)
        {
            scanf("%d",&mtrx[x][z]);
        }
    }
    printf("the sum of matrix is : \n");
    int sum[a][b];
    for(int s=0;s<a;s++)
    {
        for(int d=0;d<b;d++)
        {
            sum[s][d]=matrix[s][d]+mtrx[s][d];
            printf(" %d ",sum[s][d]);
        }
        printf("\n");
    }
}