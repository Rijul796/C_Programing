#include<stdio.h>
float circle(float r);
float rec(float l,float b);
float sq(float s);
int main()
{
    float r=10;
    printf("the area of circle is: %f\n",circle(r));
    float l=20;
    float b=10;
    printf("area of rectangle is: %f\n",rec(l,b));
    float s=10;
    printf("are of square is: %f\n",sq(s));
    return 0;
}
float circle(float r)
{
    return 3.14*r*r;
}
float rec(float l,float b)
{
    return l*b;
}
float sq(float s)
{
    return s*s;
}