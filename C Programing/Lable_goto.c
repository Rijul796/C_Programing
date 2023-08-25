#include<stdio.h>
#include<string.h>

int main()
{
    // label:
    // printf("it is a label\n");
    // goto end;
    // printf("hey\n");
    // goto label;
    // end:
    // printf("exit\n");

    for(int i=1;i<=10;i++)
    {
        printf("%d",i);
        for (int j = 0; j < 10; j++)
        {
            int x;
            printf("enter value of x: ");
            scanf("%d",&x);
            if (x==0)
            {
                goto end;
            }   
        }
    }
    end:
    printf("exit");    
    return 0;
}