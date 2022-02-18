#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 5
void enQueue();
void deQueue();
void display();
int MyQueue[SIZE], front=-1,rear=-1,element;
void main()
{
    int choice;
    while(1)
    {
        printf("\n___MAIN MENU___\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enQueue();
            break;
            case 2:
            deQueue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid option selected!\n");;
        }
    }
}
void enQueue()
{
    if((front==0&&rear==SIZE-1)||(front==rear+1))
    printf("\nInsertion cannot be done as the circular queue is full !\n");
    else
    {
        printf("\nEnter the element to be inserted :  ");
        scanf("%d",&element);
        if(rear==SIZE-1&&front!=0)
        rear=-1;
        MyQueue[++rear]=element;
        if(front==-1)
        front=0;

    }
}
void deQueue()
{
    if(front==-1&&rear==-1)
    printf("\n Deletion is not possible as circular queue is empty !");
    else
    {
        printf("\nDeleted element : %d\n",MyQueue[front++]);
        if(front==SIZE)
        front=0;
        if(front-1==rear)
        front=rear=-1;

    }
}
void display()
{
    if(front==-1)
    printf("\nThe circular queue is empty !");
    else
    {
        int i=front;
        printf("\n Elements of circular queue are : \n");
        if(front<=rear)
        {
            while(i<=rear)
            printf("\n%d\n",MyQueue[i++]);
        }
        else
        {
            while(i<=SIZE-1)
            printf("\n%d\n",MyQueue[i++]);
            i=0;
            while(i<=rear)
            printf("\n%d\n",MyQueue[i++]);
        }
    }
}