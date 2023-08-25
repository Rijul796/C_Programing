#include <stdio.h>
/*int sum1(int a);
int main() 
{
  int num;
  printf("enter num: ");
  scanf("%d",&num);
  printf("sum is %d",sum1(num));
  return 0;
}
int sum1(int a)
{
  if(a!=0)
  return a+sum1(a-1);
  else
  return a;
}*/
/*
int sum(int x,int y);
int main()
{
  int a,b;
  printf("enter a and b: ");
  scanf("%d%d",&a,&b);
  printf("sum of no. is %d",sum(a,b));
  return 0;
}
int sum(int x,int y)
{
  int s=0;
  s=x+y;
  return s;
}*/
/*int main()
{
  int n;
  printf("enter length of array: ");
  scanf("%d",&n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    int c;
    scanf("%d",&c);
    a[i]=c;
  }
  
  int x=n;
  int b[x];
  for(int i=0;i<x;i++)
  {
    b[i]=a[i];
  }
  printf("copied array is: \n");
  for (int i = 0; i < x; i++)
  {
    printf("%d\n",b[i]);
  }
  return 0;
}*/
int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    while(n>0)
    {
      int m=n%10;//gives the rem last digit of n
      printf("rem is %d\n",m);
      sum+=m;
      n=n/10;//gives the remaining digits
      printf("qtnt is %d\n",n);
    }
    printf("%d",sum);
    return 0;
}