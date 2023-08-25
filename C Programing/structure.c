#include<stdio.h>
#include<string.h>
struct driver
{
    char name[30];
    char dlno[40];
    char route[50];
    int kms;
};
int main()
{
    struct driver d1;
    printf("enter data of drivers---- \n");
    printf("enter name of driver: ");
    scanf("%s",d1.name);
    printf("enter dlno of driver: ");
    scanf("%s",d1.dlno);
    printf("enter route of driver: ");
    scanf("%s",d1.route);
    printf("enter kms of driver: ");
    scanf("%d",&d1.kms);  
    printf("the details of the driver are----");
    printf("name of driver is: %s\n",d1.name);
    printf("dlno of driver is: %s\n",d1.dlno);
    printf("route of driver is: %s\n",d1.route);   
    printf("kms covered is: %d",d1.kms);
    return 0;
}