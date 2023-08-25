#include<stdio.h>
#include<string.h>

typedef struct data
{
    int id;
    char name[50] ;
    float salary;
};
void print(struct data a);
int main()
{
    struct data emp1,emp2;
    emp1.id=1001;
    strcpy(emp1.name,"Mohit");
    emp1.salary=80000;
    // printf("id of emp1 is %d\n",emp1.id);
    // printf("name of emp1 is %s\n",emp1.name);
    // printf("salary of emp1 is %0.2f\n",emp1.salary);
    emp2.id=1002;
    strcpy(emp2.name,"Rohit");
    emp2.salary=85000;
    // printf("id of emp2 is %d\n",emp2.id);
    // printf("name of emp2 is %s\n",emp2.name);
    // printf("salary of emp2 is %0.2f\n",emp2.salary);
    print(emp1);
    print(emp2);
    return 0;
}
void print(struct data a)
{
    printf("details are\n");
    printf("id of emp1 is %d\n",a.id);
    printf("name of emp1 is %s\n",a.name);
    printf("salary of emp1 is %0.2f\n",a.salary);

}
