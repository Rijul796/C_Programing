#include<stdio.h>
#include<string.h>
void fun(int arr[]);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    fun(arr);
    printf("value if arr 7 is %d",arr[7]);
    return 0;
}
void fun(int arr[])
{
    for (int i = 0; i < 8; i++)
    {
        printf("value in array at place %d is: %d\n",i,arr[i]);
    }
    arr[7]=69;
}