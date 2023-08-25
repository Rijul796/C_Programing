#include<stdio.h>
int main()
{
    int x[3][3];
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&x[i][j]);
        }
    }
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
        printf(" %d",x[a][b]);
        }
        printf("\n");
    }
    return 0;
}