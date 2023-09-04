// Stack using array.

#include <stdio.h>
int stack[100], Top, stackSize = 10;

void push(int data)
{
  if (Top >= stackSize - 1)
  {
    printf("Overflow\n");
  }
  else
  {
    Top++;
    stack[Top] = data;
  }
}

void pop()
{
  if (Top <= -1)
  {
    printf("underflow\n");
  }
  else
  {
    Top--;
  }
}

void ispeek()
{
  if(Top<=-1)
  {
    printf("stack is empty\n");
  }
  else{
    printf("%d",stack[Top]);
  }
}

void isempty()
{
  if(Top<=-1)
  {
    printf("yes stack is empty\n");
  }
  else{
    printf("stack is not empty\n");
  }
}

int main()
{
  Top = -1;
  // int x;
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("enter value to push: ");
  //   scanf("%d", &x);
  //   push(x);
  // }

  pop();

  for (int i = 0; i <= Top; i++)
  {
    printf("values are : %d\n", stack[i]);
  }

  ispeek();

  isempty();
  return 0;
}