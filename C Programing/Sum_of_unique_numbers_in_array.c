#include <stdio.h>
int main() 
{
    int arr[100];
    int n,n1=0,sum=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the number of elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else if(arr[i]!=arr[j]){
                n1=1;
            }
            else if (arr[i]==arr[j]){
                n1=0;
                break;
            }
        }
        if (n1==1){
            sum+=arr[i];
        }
        }

    printf("Sum of unique numbers : %d",sum);
    return 0;
}