//matrix multiplication
#include<stdio.h>

void multi(int matrix[][2], int mtrx[][2], int a, int b);

int main()
{
    int a, b;
    printf("Enter no. of rows: ");
    scanf("%d", &a);
    printf("Enter no. of columns: ");
    scanf("%d", &b);

    int matrix[a][b];
    printf("Enter the elements of the first matrix: \n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int mtrx[a][b];
    printf("Enter the elements of the second matrix: \n");
    for(int x = 0; x < a; x++)
    {
        for(int z = 0; z < b; z++)
        {
            scanf("%d", &mtrx[x][z]);
        }
    }

    multi(matrix, mtrx, a, b);
    return 0;
}

void multi(int matrix[][2], int mtrx[][2], int a, int b)
{
    int result[a][b];
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            result[i][j] = 0;
            for(int k = 0; k < b; k++)
            {
                result[i][j] += matrix[i][k] * mtrx[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
/*
#include<stdio.h>
int main()
{
    int matrix1[2][2],matrix2[2][2];
    printf("enter elements for ist matrix1\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter elements for matrix2\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("multiplication of matrices is: \n");
    int sum[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j]=0;
            for(int k=0;k<2;k++)
            {
                sum[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
   
}*/