#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fptr;
    fptr=fopen("abc.txt","r");
    fprintf(fptr,"hello world!");
    char read[100];
    if(fptr!=NULL)
    {
        while (fgets(read,100,fptr))
        {
            printf("%s",read);
        }
    }
    else{
        printf("unale to open file");
    }
    return 0;
}