#include<stdio.h> 
#include<stdlib.h> 
struct node  
{ 
   int data; 
   struct node *next ;   
}; 
struct node *head; 
void insert_front ();  
void insert_rear (); 
void insert_random(); 
void delete_front(); 
void delete_rear(); 
void delete_random(); 
void display();
void search();  
void reverseList();

int main () 
{ 
   int choice =0; 
   while(choice != 10)  
   { 
       printf("\nOperations on Singly Linked List\n"); 
       printf("\n-----------------------------------------------------\n"); 
       printf("\n1.Insertion in front\n2.Insertion in rear\n3.Insertion at specified location\n4.Deletion from front\n5.Deletion from rear\n6.Deletion of node after specified location\n7.Search for an element\n8.Display\n9.Display reversed list\n10.Exit"); 
       printf("\nEnter your choice:");        
       scanf("\n%d",&choice); 
       switch(choice) 
       { 
           case 1:
           { 
           insert_front();     
           break;
           } 
           case 2:
           { 
           insert_rear();        
           break;
           } 
           case 3:
           { 
           insert_random();      
           break;
           } 
           case 4:
           { 
           delete_front();      
           break;
           } 
           case 5: 
           {
           delete_rear();       
           break;
           } 
           case 6: 
           {
           delete_random();         
           break;
           } 
           case 7: 
           {
           search();        
           break;
           } 
           case 8:
           {
          display();      
          break;
           }
          case 9:
          {
          reverseList();
          display();    
          break;
          }
          case 10:
          {
          exit(0);
          break;
          }
          default:
          printf("\nPlease enter valid choice..\n");
      }
  }
              return 0; 
} 
void insert_front() 
{ 
   struct node *ptr; 
   int item; 
   ptr = (struct node *) malloc(sizeof(struct node *)); 
   if(ptr == NULL) 
   { 
       printf("\nOVERFLOW\n"); 
   } 
   else 
   { 
       printf("\nEnter value:");   
       scanf("%d",&item);   
       ptr->data = item; 
       ptr->next = head; 
       head = ptr; 
       printf("\nNode inserted\n"); 
   } 
    
} 
void insert_rear() 
{ 
   struct node *ptr,*temp; 
   int item;    
   ptr = (struct node*)malloc(sizeof(struct node));     
   if(ptr == NULL) 
   { 
       printf("\nOVERFLOW\n");    
   } 
   else 
   { 
       printf("\nEnter value:"); 
       scanf("%d",&item); 
       ptr->data = item; 
       if(head == NULL) 
       { 
           ptr -> next = NULL; 
           head = ptr; 
           printf("\nNode inserted\n"); 
       } 
       else 
       { 
           temp = head; 
           while (temp -> next != NULL) 
           { 
               temp = temp -> next; 
           } 
           temp->next = ptr; 
           ptr->next = NULL; 
           printf("\nNode inserted\n"); 
        
       } 
   } 
} 
void insert_random() 
{ 
   int i,loc,item;  
   struct node *ptr, *temp; 
   ptr = (struct node *) malloc (sizeof(struct node)); 
   if(ptr == NULL) 
   { 
       printf("\nOVERFLOW\n"); 
   } 
   else 
   { 
       printf("\nEnter element value:"); 
       scanf("%d",&item); 
       ptr->data = item; 
       printf("\nEnter the location after which you want to insert:"); 
       scanf("\n%d",&loc); 
       temp=head; 
       for(i=1;i<loc;i++) 
       { 
           temp = temp->next; 
           if(temp == NULL) 
           { 
               printf("\nCan't insert\n"); 
               return; 
           } 
        
       } 
       ptr ->next = temp ->next;  
       temp ->next = ptr;  
       printf("\nNode inserted\n"); 
   } 
} 
void delete_front() 
{ 
   struct node *ptr; 
   if(head == NULL) 
   { 
       printf("\nList is empty\n"); 
   } 
   else  
   { 
       ptr = head; 
       head = ptr->next; 
       free(ptr); 
       printf("\nNode deleted from the begining ...\n"); 
   } 
} 
void delete_rear() 
{ 
   struct node *ptr,*ptr1; 
   if(head == NULL) 
   { 
       printf("\nList is empty"); 
   } 
   else if(head -> next == NULL) 
   { 
       head = NULL; 
       free(head); 
       printf("\nOnly node of the list deleted ...\n"); 
   } 
        
   else 
   { 
       ptr = head;  
       while(ptr->next != NULL) 
       { 
           ptr1 = ptr; 
           ptr = ptr ->next; 
       } 
       ptr1->next = NULL; 
       free(ptr); 
       printf("\nDeleted Node from the last ...\n"); 
   }    
} 
void delete_random() 
{ 
   struct node *ptr,*ptr1; 
   int loc,i;   
   printf("\nEnter the location of the node after which you want to perform deletion:"); 
   scanf("%d",&loc); 
   ptr=head; 
   for(i=0;i<loc;i++) 
   { 
       ptr1 = ptr;      
       ptr = ptr->next; 
            
       if(ptr == NULL) 
       { 
           printf("\nCan't delete\n"); 
           return; 
       } 
   } 
   ptr1 ->next = ptr ->next; 
   free(ptr); 
   printf("\nDeleted node %d ",loc+1); 
} 
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("Item found at location %d ",i+1);  
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
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
 void display() 
{ 
   struct node *ptr; 
   ptr = head;  
   if(ptr == NULL) 
   { 
       printf("\nList is empty\n"); 
   } 
   else 
   { 
       printf("\nPrinting values in the Linked List:");  
       while (ptr!=NULL) 
       { 
           printf("\n%d",ptr->data); 
           ptr = ptr -> next; 
       } 
   } 
}
void reverseList()
{
    struct node *prevnode, *curnode;

    if(head != NULL)
    {
        prevnode = head;
        curnode = head->next;
        head = head->next;

        prevnode->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            curnode->next = prevnode;

            prevnode = curnode;
            curnode = head;
        }

        head = prevnode; 

        printf("\nList is Reversed\n");
    }
}
