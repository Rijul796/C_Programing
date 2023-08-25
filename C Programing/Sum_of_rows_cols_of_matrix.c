#include <stdio.h>
#include <string.h>
/*
int main(){
    char arr[100];
    int l,i,vowelcount=0,consonant=0;
    printf("Enter the string : ");
    scanf("%[^\n]s",arr);
    l=strlen(arr);
    for(i=0;i<l;i++){
        if (arr[i]==' ')
        {
            continue;
        }
        if(arr[i]=='a' || arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        {
            vowelcount++;
        }
        else
        {
            consonant++;
        }
    }
    printf("vowels : %d\nconsonant : %d",vowelcount,consonant);
    return 0;
}*/
/*
int main(){
    char sen[100];
    int l,n;
    int count=1;
    printf("Enter a string : ");
    scanf("%[^\n]s",sen);
    char* ptr=sen;
    while(*ptr!='\0'){
        if(*ptr==' '){
            count++;}
        ptr++;
        }
    printf("no of words are : %d",count);
    return 0;
}
int main(){
    char sen[100];
    int cv=0,cc=0,cd=0,cs=0;
    printf("Enter the string : ");
    scanf("%[^\n]s",sen);
    char* ptr=sen;
    while(*ptr!='\0'){
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' ||*ptr=='o'||*ptr=='u' || *ptr=='A' ||*ptr=='E'|| *ptr=='I'||*ptr=='O'||*ptr=='U'){
            cv++;
        }
        else{
            cc++;
        }
        if (*ptr==' '){
        cs++;}
        if(*ptr>='0' && *ptr <='9'){
        cd++;}
        ptr++;
    }
    printf("count of vowel : %d\ncount of consonant : %d\ncount of space : %d\ncount of digit : %d",cv,cc,cs,cd);
    return 0;
}*/
int main(){
    int m,n,sumrow=0,sumcol=0;
    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the elements : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The given matrix is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //sum of rows
    for(int i=0;i<m;i++){
        sumrow=0;
        for(int j=0;j<n;j++){
            sumrow+=arr[i][j];
        }
        printf("the sum of %dth row is : %d\n",i+1,sumrow);
    }
    //sum of cols
        for(int j=0;j<n;j++){
            sumcol=0;
            for(int k=0;k<m;k++){
                sumcol+=arr[k][j];
            }printf("the sum of %dth col is : %d\n",j+1,sumcol);
    } 
    return 0;
}