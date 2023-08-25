#include <stdio.h>
#include <string.h>
int ispalindrome(int n);
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if (ispalindrome(num))
    {
        printf("this is a palindrome number");
    }
    else
    {
        printf("this is not a palindrome");
    }
    return 0;
}
int ispalindrome(int n)
{
    int rev=0;
    int x=n;
    while (n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if (x==rev)     
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}