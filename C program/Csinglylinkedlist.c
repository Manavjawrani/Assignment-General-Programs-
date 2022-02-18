#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void insert ();     
void delete();
void display();  
void search();  
void main ()  
{  
    int choice =0;  
    while(choice != 5)   
    {  
        printf("\n*********Operations on circular linked list*********\n");  
        printf("\n1.Insertion\n2.Deletion\n3.Search for an element\n4.Show\n5.Exit\n");  
        printf("\nEnter your choice: ");         
        scanf("\n%d",&choice);  
        switch(choice)  
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
            search();         
            break;
            }  
            case 4: 
            { 
            display();        
            break;  
            }
            case 5:  
            {
            printf("\nExiting the program\n");   
            break;  
            }
            default:  
            printf("Please enter valid choice!!");  
        }  
    }  
}  
void insert()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else   
    {  
        printf("\nEnter the node data: ");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nElement inserted\n");  
    }  
              
} 
void delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW\n");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nElement deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nElement deleted\n");  
  
    }  
} 
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else  
    {   
        printf("\nEnter element which you want to search: \n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("\nItem found at location %d\n",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nItem found at location %d \n",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            printf("\nItem not found\n");  
        }  
    }     
          
}  
  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nNothing to print");  
    }     
    else  
    {  
        printf("\nPrinting values\n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d\n", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  