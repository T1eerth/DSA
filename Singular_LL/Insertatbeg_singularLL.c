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
    void insert_beg()
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enetr the data u want to insert");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head = newnode;

    }
    while(choice)
    {

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

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
    insert_beg();
    temp = head;
    //printf("%d ",head->data);
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

