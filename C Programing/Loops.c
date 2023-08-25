#include <stdio.h>
int main()
{
  for (int i = 0; i <= 5; i += 1)
  {
    printf("hey\n");
  }
  for (int i = 1; i <= 100; i += 1)
  {
    printf("%d\n", i);
  }
  for (int i = 0; i <= 10; i++)
  {
    printf("%d\n", i);
  }
  return 0;
}
/*#include <stdio.h>
int main()
{
  for (int i = 5; i <=50; i+=2)
  {
    printf("%d\n",i);
  }
  for (int i = 5; i <= 50; i++)
  {
    if (i%2!=0)
    {
      printf("%d\n",i);
    }
  }
  return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int i=0;
    while (i<=10)
    {
        printf("%d\n",i);
        printf("hey \n");
        i++;
    }
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int x;
    printf("enter the value of x : ");
    scanf("%d",&x);
    for (int i = 0; i < x; i++)
    {
        printf("hey %d\n",i);
    }
    int i=1;
    while (i<=x)
    {
        printf("while%d\n",i);
        i++;
    }
    return 0;
}*/