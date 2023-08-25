#include <stdio.h>
#include <string.h>
// void print(int array[3][3]);
void multiply(int array[3][3], int array2[3][3]);
int main()
{
    int matrix1[3][3], matrix2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value for index %d %d : ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("enter values for matrix2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value for index %d %d : ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // printf("the matrix is:\n");
    // print(matrix1);
    // printf("the second matrix is\n");
    // print(matrix2);
    multiply(matrix1, matrix2);
    return 0;
}
// void print(int array[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d ",array[i][j]);
//         }
//         printf("\n");
//     }
// }
void multiply(int array[3][3], int array2[3][3])
{
    int k;
    int res[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                res[i][j] = res[i][j] + array[i][k] * array2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %3d ", res[i][j]);
        }
        printf("\n");
    }
}