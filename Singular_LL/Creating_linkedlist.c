#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{

    struct node *head,*newnode,*temp;
    head = NULL;
    int choice=1;
    while(choice)
    {

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next=newnode;
        temp = newnode;
    }
    printf("Enter 1 to continue and 0 to exit");
    scanf("%d",&choice);
    }
    
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    

}
