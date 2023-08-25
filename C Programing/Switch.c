#include <stdio.h>
int main()
{int num;
printf("enter a num b|w 1-5 : ");
scanf("%d",&num);
switch (num)
{
    case 1 : printf("num is 1 \n");
    break;
    case 2 : printf("num is 2 \n");
    break;
    case 3 : printf("num is 3 \n");
    break;
    case 4 : printf("num is 4 \n");
    break;
    case 5 : printf("num is 5 \n");
    break;
    default : printf("enter a valid input ");
}
return 0;
}
/*#include <stdio.h>
int main()
{int num;
int a,b;
printf("enter the value of a: ");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
printf("enter a num b|w 1-4 : ");
scanf("%d",&num);
switch (num)
{
    case 1 : printf("addition of number is %d\n",a+b);
    break;
    case 2 : printf("subtraction of numbers is %d\n",a-b);
    break;
    case 3 : printf("multiplication of numbers is %d\n",a*b);
    break;
    case 4 : printf("division of numbers is %d \n",a/b);
    break;
    default : printf("enter a valid input ");
}
return 0;
}*/