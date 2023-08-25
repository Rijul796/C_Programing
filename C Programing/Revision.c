#include <stdio.h>
int main()
/*{
  int n;
  printf("enter n :");
  scanf("%d",&n);
  int sum=0;
  for (int i = 0; i <=n ; i++)
  {
    sum+=i;
  }
  printf("sum of n natural no.s is : %d",sum);
  return 0;
}*/
/*#include <stdio.h>
int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if ((a>=b && a<=c)||(a<=b && a>=c))
  {
    printf("second largest num is %d",a);
  }
  if ((b>=c && b<=a)||(b<=c && b>=a))
  {
    printf("second largest num is  %d",b);
  }
  if ((c>b && a<c)||(c>b && a<c))
  {
    printf(" second largest num is %d",c);
  }
  return 0;
}*/
/*#include<stdio.h>
int main()
{
  int num;
  printf("enter a 3 digit number : ");
  scanf("%d",&num);
  int last=num%10;//gives the remainder
  printf("last num is %d\n",last);
  int x=num/10;
  printf("x is : %d\n",x);
  int first =x/10;//gives the div
  printf("first num is : %d\n",first);
  printf("sum of first and last is %d\n",first+last);
  return 0;
}*/
/*#include<stdio.h>
int main()
{
  int x;
  printf("enter value of x: ");
  scanf("%d",&x);
  for (int i = 0; i <= x; i++)
  {
    printf("*\n");
  }
  return 0;
}*/
    /*{
        int n;
        scanf("%d",&n);
        for (int i = 1; i <= n; ++i)//rows
        {
            for (int j=1; j <=n; ++j)//columns
            {
                printf("$");
            }
            printf("\n");
        }
        return 0;
    }*/
 /*#include <stdio.h>
int main()
   {
        int x,y,num;
        printf("enter x: ");
        scanf("%d",&x);
        printf("enter y: ");
        scanf("%d",&y);
        printf("enter num b|w 1-4\n");
        printf("enter num: ");
        scanf("%d",&num);

        switch (num)
        {
        case 1:
            printf("x + y is : %d",x+y);
            break;
        case 2:
            printf("x - y is : %d",x-y);
            break;
        case 3:
            printf("x * y is : %d",x*y);
            break;
        case 4:
            printf("x / y is : %d",x/y);
            break;
        default:
        printf("invalid input");
            break;
        }
    }*/
    /*{
        int a,b;
        scanf("%d,%d",&a,&b);
        switch (a>b)
        {
        case 0:
            printf("a is greater than b\n");
            break;
        case 1:
           printf("b is greater than a\n");
           break;
        default:
            break;
        }
        return 0;
    }*/
    /*{
        int a,b;
        printf("enter a: ");
        scanf("%d",&a);
        switch (a%2==0)
        {
        case 1:
        printf("a is even");
        break;
        case 0:
        printf("a is odd");
        default:
            break;
        }
    }*/
/*{
        int a;
        printf("enter the value of a: ");
        scanf("%d",&a);
        switch (a>0)
        {
        case 1:
        printf("a is positive");
        break;
        case 0:
        switch (a<0)
        {
        case 0:
            printf("a is zero");
            break;
        case 1:
        printf("a is negative");
            break;
        }
        default:
        break;
        }
    }*/
    /*{
        int f;
        printf("enter temp in fahrenheit: ");
        scanf("%d",&f);
        int c=((f-32)*5/9);
        printf("temp in celsius is : %d\n",c);
        if (c>=0 && c<10)
        {
            printf("very cold\n");
        }
        else if (c>=10 && c<20)
        {
            printf("cold\n");
        }
        else if (c>=20 && c<25)
        {
            printf("moderate\n");
        }
        else if (c>=25 && c<35)
        {
            printf("hot\n");
        }
        else if (c>35 && c<=40)
        {
            printf("very hot\n");
        }
        return 0;
    }*/
    /*{
        int f;
        printf("enter temp in fahrenheit: ");
        scanf("%d",&f);
        int c=((f-32)*5/9);
        printf("temp in celsius is : %d\n",c);
        switch (c>=0 && c<10)
        {
        case 1:
            printf("very cold");
            break;
        case 0:
        switch (c>=10 && c<20)
        {
        case 1:
            printf("cold");
            break;
        case 0:
        switch (c>=20 && c<25)
        {
        case 1:
            printf("moderate");
            break;
        case 0:
        switch (c>=25 && c<35)
        {
        case 1:
            printf("hot");
            break;
        case 0:
        switch (c>=30 && c<=40)
        {
        case 1:
        printf("very hot");
            break;}}}
        default:
        break;
        }
        return 0;
    }}*/
    /*{
        int n;
        printf("enter n :");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("WEDNESDAY");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default: printf("error");
        }
    }*/
    /*{
        int n;
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            printf("x");
        }
        printf("\n");

        return 0;
    }*/
/*{
    int n;
    printf("enter the value of n: ");//5
    scanf("%d",&n);
    for(int r=0;r<n;r++)//5 rows
    {
        for(int c=0;c<n;c++)//5 columns 
        {
        printf("$");
        }
        printf("\n");
    }
    return 0;
}*/
/*{
    int n;
    printf("enter the value of n: ");//5
    scanf("%d",&n);
    for(int r=0;r<n;r++)//5 rows
    {
        for(int s=0;s<n-r-1;s++)
        {
        printf("|");
        }
        for(int c=0;c<2*r+1;c++)//5 columns 
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}*/
/*{
    int n ;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int c = 1; c <= n; c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}*/
/*{
    int n ;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int r = 1; r <= n; r++)
    {
        for (int i = 0; i <= n; i++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
}*/
/*{
    int n ;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}*/
/*{
    int n ;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int c = 1; c <=n-i+1 ; c++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}*/
/*{
    int n,s,i,j ;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (i = 0; i <n; i++)
    {
        for(s=0;s<i;s++)
        printf(" ");
        for (j = 0; j <n-i ; j++)
        {
            printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}
  11111
   2222
    333
     44
      5*/
/*#include<stdio.h>
int c;//global variable
int main()
{
    int a,b;//local variable
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
        printf("%d",i);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
} */
/*{
    int x=6969;
    int *ptr=&x;//&x address of variable x
    int y=*ptr;
    printf("%p\n",&x);//address of x
    printf("%p\n",ptr);// value in ptr i.e address stored in pointer
    printf("%p\n",&ptr);// address of ptr
    printf("%p\n",*(&ptr));//value at address of ptr
    printf("%d\n",*(&x));// value at addess of variable x
    printf("%d",y);//value of ptr then value at address of x i.e *(&x)
    return 0;
}*/
/*{
    int x;
    int *ptr;//value in x
    ptr=&x;//address of x is stored in ptr
    *ptr=0;//value 0 is stored in the address of ptr i.e x=0 
    return 0;
}*/
{
    int x=5;
    int *ptr=&x;
    printf("address of pointer is: %p\n",&ptr);
    printf("address of variable x is : %p\n",&x);
    printf("value present/address stored in pointer is : %p\n",*(&ptr));
    printf("value present in x is: %d\n",*(&x));//value present at the address of x
    int **pptr=&ptr;//address of pointer is stored in new pointer
    printf("address of new pointer is: %p\n",&pptr);
    printf("value/address stored in new pointer is: %p\n",*(&pptr));//address of old pointer is stored in new pointer
    printf("to access the value using adress from pptr is : %d",**pptr);
    return 0;
}
