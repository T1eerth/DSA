#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *newnode,*head,*temp;
    head = NULL;
    int choice = 1;

    void display()
    {
        printf("Your list is :\n");
        temp = head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }

    void insert_at_end()
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data u want to insert");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = newnode;
        
        
    }

    while(choice)
  {
    printf("Enter 1 to continue and 0 to exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            if (head == NULL)
            {
                newnode = (struct node*)malloc(sizeof(struct node));
                printf("Enter the data");
                scanf("%d",&newnode->data);
                newnode->next=NULL;
                head = newnode;
                temp = newnode;
            }
            else
            {
                insert_at_end();
            }
            break;
        case 0:
            choice =0;
            break;
        default:
            choice = 0;
            break;


    }
    

  }
  
  display();
 
}