#include<stdio.h>
#include<string.h>
int main()
/*{
    int a,b,temp;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a is %d,b is %d",a,b);
    return 0;
}
{
    int a,b,x;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    x=a+b;
    b=x-b;
    a=x-a;
    printf("a is %d , b is %d",a,b);
}*/
/*
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("before swapping a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping a=%d and b=%d",a,b);
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);
    printf("before swapping a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swapping a=%d and b=%d",a,b);
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    m = a>b && a>c?a:b>a && b>c?b:c;
    m==a?printf("a is greatest"):m==b?printf("b is greatest"):printf("c is greatest");
    char a;
    printf("Enter the alphabet: ");
    scanf("%c",&a);
    switch(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
    case 1:
        printf("%c is vowel",a);
        break;
    default:
        printf("%c is consonant",a);
        break;
    }
    float a,b,c,D,x1,x2;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);
    x1=(-b+(sqrt((b*b)-(4*a*c))))/2*a;
    x2=(-b-(sqrt((b*b)-(4*a*c))))/2*a;
    printf("%.2f %.2f",x1,x2);
    return 0;
}*/
/*
{
    int i,j;
    int a[3][2]={{1,2},{3,4},{5,6}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        printf("%d",a[i][j]);
        printf("\n");
    }
    return 0;
}*/
/*{
    char ch;
    printf("enter a letter: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    printf("vowel");
    break;
    case 'e':
    printf("vowel");
    break;
    case 'i':
    printf("vowel");
    break;
    case 'o':
    printf("vowel");
    break;
    case 'u':
    printf("vowel");
    case 'A':
    printf("vowel");
    break;
    case 'E':
    printf("vowel");
    break;
    case 'I':
    printf("vowel");
    break;
    case 'O':
    printf("vowel");
    break;
    case 'U':
    printf("vowel");
    default:
    printf("letter");
    break;
    }
    return 0;
}
{
    int a;
    int x=0;
    do
    {
        printf("enter value of a: ");
        scanf("%d",&a);
        x=x+a;
        if (a<0)
        {
            break;
        }
        printf("sum is %d\n",x);
    }
    while (a>0);
    return 0;
}*/
/*{
    for(int i=0;i<=10;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}
*/
/*
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        if(i%2==0)
    {
        printf("%d ",i*i);
    }
    else
    {
        printf("%d ",i*i*i);
    }
    }
    return 0;
}*/
/*
{
    int n,m=1,x=6;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            {
            printf("%d ",m);
            m+=1;
            }
        }
        else
        {

            printf("%d ",x);
            x+=1;
        }
    }
    return 0;
}
{
    int n,n1=3,n2=3;
    printf("Enter the umber of terms for the series : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            if (i==1){
                printf("0 ");
            }
            else{
            printf("%d ",n2);
            n2=n2+n1;
            n1=n1+2;
            }
    }
    return 0;
}*/
/*
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<=T;i++)
	{
	int X,Y;
	scanf("%d%d",&X,&Y);
	if(X+Y>6)
	{printf("YES\n");}
	else{printf("NO\n");}
	}
	return 0;
}*/
/*{
    char a[]="bachu";
    printf("the length of str is %d\n",strlen(a));
    char x[100]="BACHU",y[30]=" bander";
    strcat(x,y);
    printf("concat of string is %s\n",x);
    printf("string in lower case is: %s\n",strlwr(x));
    printf("reverse of string is %s\n",strrev(x));
    return 0;
}*/
/*{
    char a[100]="bachu",b[100]="bachu";
    int st;
    st=strcmp(a,b);
    if(st==0)
    {
        printf("the strings are same");
    }
    else{printf("strings are not same");}
    return 0;
}*/
/*{
    char x[100],y[100];
    printf("enter text: ");
    fgets(y,sizeof(y),stdin);
    strcpy(x,y);
    printf("copies text: %s\n",x);
    return 0;
}*/
/*
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int X,Y;
	    scanf("%d%d",&X,&Y);
	    if(X>Y)
	    {
	        printf("A\n");
	    }
	    else if(Y>X)
	    {printf("B\n");
	}}
	return 0;
}*/
/*{	char a;
    printf("Enter the alphabet: ");
    scanf("%c",&a);
    switch((a=='a' || a=='e' || a=='i' || a=='o' || a=='u')||(a=='A' || a=='E' || a=='I' || a=='O' || a=='U'))
    {
    case 1:
        printf("%c is vowel",a);
        break;
    default:
        printf("%c is consonant",a);
        break;
    }
}*/
/*{
    int x;
    int sum=0;
    do
    {
        printf("enter x: ");
        scanf("%d",&x);
        printf("even no is: %d\n",x);
        if (x%2==0)
        {
            sum+=x;
        }
    } while (x%2==0);
    {
        printf("sum of even no you entered is: %d\n",sum);
        printf("odd input\n");
    }
    return 0;
}*/
/*{
    char x;
    printf("ente the value of x: ");
    scanf("%c",&x);
    printf("the value of char is %d",x);
    return 0;
}*/
/*{
    for(int i=65;i<=90;i++)
    {
        printf("ascii value of %d is %c\n",i,i);
    }
    printf("\n");
    return 0;
}*/
/*{
    int x[10];
    for (int j =0;j<9;j++)
    {
        scanf("%d\n",&x[j]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf(" %d",x[i]);
    }
    return 0;
}*/
/*{
    //int array[5]={0,1,2,3,4};
    //printf("%d\n",array[3]);
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*{
    int n,i,j;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for ( j = 0; j <= i-1; j++)
        {
            printf("_");
        }
        for (int x = 0; x <= 2*(n-j); x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

{
    int a,b;
    scanf("%d%d",&a,&b);
    float x,y;
    scanf("%f%f",&x,&y);
    printf("%d %d\n",a+b,a-b);
    printf("%0.1f %0.1f",x+y,x-y);
    return 0;
} 
{
    int num,sum=0;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("the sum of digits of a number is : \n");
    while(num>0)
    {
        int x=num%10;
        sum+=x;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}
{
    int a,b;
    printf("enter a nd b : ");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        for(int j=a;j<=i;j++)
        {
            if(j*j==i)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}

{
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

//to check the plaindrome of a string

{
    char s[100];
    int b=1;
    printf("enter a string: ");
    scanf("%[^\n]s",s);
    int l=strlen(s);
    printf("length of str is : %d\n",l);
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            b=0;
        }
    }
    if(b==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
{
    int n,count=0;
    printf("enter the length of array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    //to check for duplicates
    for(int a=0;a<n;a++)
    {
        for(int b=a+1;b<n;b++)
        {
            if(array[a]==array[b])
            {
                count++;
            }
        }
    }
    printf("no of duplicate elements are : %d",count);
    return 0;
}
{
  int i,n,a[100],temp;

    printf("Enter the number of elements:\n") ;
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Original array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    temp=a[n-1];//right to left
    a[n-1]=a[0];
    a[0]=temp;
    temp=a[0];//left to right
    for(i=0;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;

    printf("\nNew array after rotating by one postion \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
// sorting a array
{
    int i,n,a[100];
    printf("Enter the number of elements:\n") ;
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int temp;
    for (i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("sorted array :\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/
//10 marks coding questions
//to find the number of 500 to 1 notes or coin required
{
    int n;
    int count[8]={0};
    scanf("%d",&n);
    printf("\n");
    if(n>500){
        count[0]=n/500;
        n=n-count[0]*500;//updating value of n
        }
    if(n>100){
    count[1]=n/100;
    n=n-count[1]*100;
    }
    if(n>50){
    count[2]=n/50;
    n=n-count[2]*50;
    }
    if(n>20){
    count[3]=n/20;
    n=n-count[3]*20;
    }
    if(n>10){
    count[4]=n/10;
    n=n-count[4]*10;
    }    
    if(n>5){
    count[5]=n/5;
    n=n-count[5]*5;
    }
    if(n>2){
    count[6]=n/2;
    n=n-count[6]*2;
    }
    if(n>1){
    count[7]=n/1;
    //n=n-count[7]*1;
    }
    printf("500=%d\n100=%d\n50=%d\n20=%d\n10=%d\n5=%d\n2=%d\n1=%d\n",count[0],count[1],count[2],count[3],count[4],count[5],count[6],count[7]);
    return 0;
}