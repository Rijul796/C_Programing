/*#include <stdio.h>
int max(int a,int b,int c, int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
    return 0;
}
int max(int a,int b,int c, int d)
{
    int max=0;
    if(a>b&&a>c&&a>d)
    {
        max=a;
    }
        if(b>a&&b>c&&b>d)
    {
        max=b;
    }
        if(c>b&&c>a&&c>d)
    {
        max=c;
    }
        if(d>b&&d>a&&d>c)
    {
        max=d;
    }
    return max;
}*/
//program to update value of a to  a - b and b to a+b 
#include <stdio.h>
#include<math.h>
void update(int *a,int *b);
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
void update(int *a,int *b)
{
    int x,y;
    x=abs(*a-*b);
    y=*a+*b;
    *a=x;
    *b=y;
}