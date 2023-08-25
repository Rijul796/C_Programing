#include<stdio.h>
int main()
{
    int x[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            printf(" %d",x[a][b]);
        }
        printf("\n");
    }
    return 0;
}