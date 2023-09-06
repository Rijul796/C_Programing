#include <stdio.h>
#include <string.h>

#define max 5
void insert();
void delete();
void display();

int front = -1, rear = -1;
int q[max];
int main()
{
    int choice;
    do
    {
        printf("\n\t Queue OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------");
        printf("\n\t 1.insert\n\t 2.delete\n\t 3.DISPLAY\n\t 4.EXIT");
        printf("\n Enter the Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            insert();
            break;
        }
        case 2:
        {
            delete();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\n\t EXIT ");
            break;
        }
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
        }
    } while (choice != 4);
    return 0;
}
void insert()
{
    int x;
    if (rear >= max - 1)
    {
        printf("q is full !");
        return;
    }
    if (front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    
    else
    {
        rear++;
        printf("enter value to insert in q: ");
        scanf("%d", &x);
        q[rear] = x;
        printf("value inserted");
    }
}

void delete()
{
    if (front==-1 || front>rear)
    {
        printf("q is underflow !\n");
        return;
    }
    else{
        printf("the deleted element from q is %d",q[front]);
        front++;
    }
    
}

void display(){
    if(rear==-1)
    {
        printf("empty !\n");
    }
    else{
    for (int i = front; i <= rear; i++)
    {
        printf("value in q at index %d is : %d\n",i,q[i]);
    }
    }
}