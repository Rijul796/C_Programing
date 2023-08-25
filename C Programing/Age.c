#include <stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are a adult\n");
    }
    else if (age<20 && age>18)
    {
        printf("age is <20\n");
    }
    else if(age>30)
    {
        printf("age>30 \n");
    }
    else
    {
        printf("you are under age\n"); 
    }
    printf("thanks");
    return 0;
}