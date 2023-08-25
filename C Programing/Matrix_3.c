#include<stdio.h>
#include<string.h>

int main()
{
    // int x;
    // int marks[5];
    // for (int i = 0; i < 5; i++)
    // {

    //     printf("enter value of marks of %d: ",i+1);
    //     scanf("%d",&x);
    //     marks[i]=x;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The marks of %d is: %d\n",i+1,marks[i]);
    // }
    
    int array[3][3],x;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value at index %d , %d: \n",i,j);
            scanf("%d",&x);
            array[i][j]=x;
        }
        
    }

        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d  ",array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}