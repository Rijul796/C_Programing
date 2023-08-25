#include <stdio.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    num<50 ? printf("num is less than 50") : printf("num is greater than 50");
    return 0;
}