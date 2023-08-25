#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rn(int n);
int main()
{
    int n;
    int s=0;
    for (int i = 0; i < 3; i++)
    {
    printf("enter 1 for rock , 2 fir paper and 3 for cisor\n");
    scanf("%d",&n);
    int x=rn(3);
    if (n==x)
    {
        s+=0;
    }
    else if((n==2 && x==1)||(n==1 && x==3))
    {
        s+=1;
    }
    }
    printf("your score is %d",s);
    return 0;
}
int rn(int n)
{
    srand(time(NULL));
    return rand()%n;
}