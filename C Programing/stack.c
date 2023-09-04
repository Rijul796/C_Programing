#include<stdio.h>
//just to understand easily
int main()
{
    int size;
    printf("enter the size of the stack: ");
    scanf("%d",&size);
    int stack_arr[size];
    int top=-1;
    for (int i = 0; i < size; i++)
    {
        int x;
        if (top>=size-1)
        {
            printf("stack overflow\n");
        }
        else
        {
            top++;
            printf("enter value for index %d in stack: ",top);
            scanf("%d",&x);
            stack_arr[top]=x;
        }
    }

    printf("size of top is :  %d\n", top);


    printf("------poping a element-----\n");
    if (top<=-1)
    {
        printf("stack is underflow\n");
    }
    else{
        printf("the popped element is: %d\n",stack_arr[top]);
        top--;
    }
    

    printf("The top most/peak element in the stack is-> ");
    if (top<=-1)
    {
        printf("stack is empty !\n");
    }
    else{
        printf("%d\n",stack_arr[top]);
    }
    
    printf("----to check if stack is empty or not-----\n");
    if(top<=-1)
    {
        printf("yes ! Stack is empty\n");
    }
    else{
        printf("stack is not empty\n");
    }

    printf("printing the values present in the stack after push/pop of elements\n");
    if (top<=-1)
    {
        printf("NULL");
    }
    else
    {
    for (int i = 0; i <= top; i++)//we can also use size instead of top but it is more valid in case of top if we use pop before it
    {
        printf("element in stack at index %d is:  %d\n",i,stack_arr[i]);
    }
    }
    return  0;
}
