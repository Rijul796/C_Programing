#include <stdio.h>
int main()
{
    float l,b;
    printf("enter the length of rectangle: ");
    scanf("%f",&l);
    printf("enter the breadth of rectangle: ");
    scanf("%f",&b);
    float r=l/2;
    printf("fencing required %f\n",(2*(l+b)));
    printf("length of rope required is : %f\n",(2*3.14*r));
    printf("carpet required : %f\n",(3.14*r*r));
    return 0;
}