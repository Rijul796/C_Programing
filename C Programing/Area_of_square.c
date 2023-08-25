#include <stdio.h>
// comment
int main()
{
    printf("code to calculate the area of a square \n");
    int x,y;// taking two variables
    printf("enter length : ");
    scanf("%d",&x);// taking input for x as integer
    printf("enter breadth : ");
    scanf("%d",&y);
    printf("the area of square is : %d \n",x*y);// taking output for area
    int r;
    float py=3.14;
    printf("enter the radius if circle : ");
    scanf("%d",&r);
    printf("the area of circle is : %f",py*r*r);// taking output as float
    return 0;
}
