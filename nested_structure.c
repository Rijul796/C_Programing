#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[30];
};
struct college{
    int code;
    char name[20];
    struct student str;
};

void print(struct college abc);

int main()
{
    struct college abc;
    strcpy(abc.str.name,"rahul");
    abc.code=100;
    strcpy(abc.name,"chitkara");
    abc.str.roll=1011;
    print(abc);
    return 0;
}
void print(struct college abc)
{
    printf("name of student in college is: %s\n",abc.str.name);
    printf("roll no of student in college is %d\n",abc.str.roll);
    printf("nae of college is %s\n",abc.name);
    printf("college code is %d\n",abc.code);
}