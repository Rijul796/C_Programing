#include<stdio.h>
#include<string.h>
#define x 99.99
int main()
{
    int a=10;
    float b=23.26721;
    printf("%10.2f\n%d\n \a",b,a);//will print a number of total length of 10 digits using spaces on left
    printf("%-10.2f\n%d\n",b,a);//will print a number of total length of 10 digits using spaces on right
    printf("%f \a",x);
    return 0;//% l for long %lf for double and %Lf for long double
}