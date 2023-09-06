#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[100];
int top = -1;

void push(char a,int len)
{
    if(top==len-1)
    {
        printf("Overflow");
        return;
    }
    top++;
    stack[top] = a;

}

char pop()
{
    if(top==-1)
    {
        printf("Underflow");
        exit(0);
    }
    top--;
    return stack[top+1];
}

int main()
{
    char str[100];
    printf("Enter the string to be reversed: ");
    gets(str);
    int len = strlen(str);
    for(int i = 0;i<len;i++)
    {
        push(str[i],len);
    }
    for(int i = 0;i<len;i++)
    {
        str[i] = pop();
    }
    printf("The reversed string is: ");
    puts(str);
}