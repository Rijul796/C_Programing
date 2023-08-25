/*#include<stdio.h>
int ch(char str[]);
int main()
{
    char str[100];
    printf("enter a string: ");
    fgets(str,100,stdin);
    printf("entered strind is: ");
    puts(str);
    printf("total characters in string are: %d",ch(str));
    return 0;
}
int ch(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;
} */
/*#include<stdio.h>
int main() {
	int x[4];
	for(int i=0;i<4;i++)
	{
	    int y;
	    scanf("%d",&y);
	    x[i]=y;
	}
	int count=0;
	for(int j=0;j<4;j++)
	{
	    if(x[j]>=10)
	    count+=1;
	}
	printf("%d",count);
	return 0;
}*/
#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)//5
	{
	    int m,count=0;
	    scanf("enter length of array: %d",&m);
        int x[m];
	    for(int j=0;j<m;j++)//3
	    {
	        int a;
	        scanf("%d",&a);
	        x[j]=a;
            if (x[j]>=1000)
            {
                count=count+1;
            }
        }
        printf("%d\n",count);
	}
	return 0;
}