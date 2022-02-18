#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int val;
    struct node *next;
    struct node *prev;    
};
typedef struct node n;
 
n* create_node(int);
void add_node();
void insert_at_first();
void insert_at_end();
void delete_node_position();
void search();
void display();
 
n *new, *ptr, *prev;
n *first = NULL, *last = NULL;
int number = 0;
 
void main()
{
    int ch;
 
    printf("\nMain menu\n");
    printf("\n1.Insert at beginning \n2.Insert at end\n3.Delete node at position\n4.Search\n5.Display\n6.Exit ");
 
    while (1)
    {
 
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1 :
        {
         insert_at_first();
         break;
        }
        case 2 :
        {
        insert_at_end();
         break;
        }
        case 3 :
        {
        delete_node_position();
         break;
        }
        case 4 :
        {
        search();
         break;
        }
        case 5 :
        {
        display();
        break;
        }
        case 6 :
            exit(0);
        case 7 :
        {
         add_node();
        break;
        }
        default:
            printf("\nInvalid choice");                
        }
    }
}
n* create_node(int info)
{
    number++;
    new = (n *)malloc(sizeof(n));
    new->val = info;
    new->next = NULL;
    new->prev = NULL;
    return new;
}
void add_node()
{
 
    int info;
 
    printf("\nEnter the value you would like to add:");
    scanf("%d", &info);
    new = create_node(info);
 
    if (first == last && first == NULL)
    {
 
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        last->next = new;
        new->prev = last;
        last = new;
        last->next = first;
        first->prev = last;
    }
}
void insert_at_first()
{
 
    int info;
 
    printf("\nEnter the value to be inserted at first:");
    scanf("%d",&info);
    new = create_node(info);
 
    if (first == last && first == NULL)
    {    
        printf("\nNode inserted\n");
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        new->next = first;
        first->prev = new;
        first = new;
        first->prev = last;
        last->next = first;
        printf("\nThe value is inserted at begining");
    }
}

void insert_at_end()
{
    int info;  
    printf("\nEnter the value that has to be inserted at last:");
    scanf("%d", &info);
    new = create_node(info);
 
    if (first == last && first == NULL)
    {
        printf("\ninitially the list is empty and now new node is inserted but at first");
        first = last = new;
        first->next = last->next = NULL;    
        first->prev = last->prev = NULL;
    }
    else
    {
        last->next = new;
        new->prev = last;
        last = new;
        first->prev = last;
        last->next = first;
    }
}
void delete_node_position()
{    
    int pos, count = 0, i;
    n *temp, *prevnode;
 
    printf("\nEnter the position which you wanted to delete:");
    scanf("%d", &pos);
 
    if (first == last && first == NULL)
        printf("\nEmpty linked list you cant delete");
 
    else
    {
        if (number < pos)
            printf("\nNode cant be deleted\n");
 
        else
        {
            for (ptr = first,i = 1;i <= number;i++)
            {
                prevnode = ptr;
                ptr = ptr->next;
                if (pos == 1)
                {    
                    number--;
                    last->next = prevnode->next;
                    ptr->prev = prevnode->prev;
                    first = ptr;
                    printf("%d Node is deleted", prevnode->val);
                    free(prevnode);
                    break;        
                }
                else if (i == pos - 1)
                {    
                    number--;
                    prevnode->next = ptr->next;
                    ptr->next->prev = prevnode;
                    printf("%dNode is deleted", ptr->val);
                    free(ptr);
                    break;
                }
            }
        }
    }
}
void search()
{
    int count = 0, key, i, f = 0;
 
    printf("\nEnter the value to be searched:");
    scanf("%d", &key);
 
    if (first == last && first == NULL)
        printf("\nList is empty no elemnets in list to search\n");
    else
    {
        for (ptr = first,i = 0;i < number;i++,ptr = ptr->next)
        {
            count++;
            if (ptr->val == key)
            {
                printf("\nThe value is found at position at %d\n", count);
                f = 1;
            }    
        }
        if (f == 0)
            printf("\nThe value is not found in linkedlist\n");
    }
}
void display()
{
    int i;
    if (first == last && first == NULL)
        printf("\nList is empty no elements to print\n");
    else
    {    
        printf("\n%d Printing the values:", number);
        for (ptr = first, i = 0;i < number;i++,ptr = ptr->next)
            printf("\n %d", ptr->val);
    }
}
