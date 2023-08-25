#include<stdio.h>
void copy(int *a,int *b,int n);
void arr(int *a,int n);
int main()
{
  int x;
  printf("enter length of array: ");
  scanf("%d",&x);
  int a[x];
  for (int i = 0; i < x; i++)
  {
    int c;
    scanf("%d",&c);
    a[i]=c;
  }
  arr(a,x);
  copy(a,a,x);
  return 0;
}
void arr(int *a,int n)
{
    printf("first array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void copy(int *a,int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("second array is: \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n",b[j]);
    }
}