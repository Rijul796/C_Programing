#include <stdio.h>
int main(){
    int x;
    printf("enter x: ");
    scanf("%d",&x);
    printf("%d \n",x%2==0);
    //program to check if true or false | int x =1; true
    int y=1;// true
    printf("%d \n",x && y);// excect 0 every +ve no is true
    printf("%d \n", x || y);// or logical operator
    return 0;
}       