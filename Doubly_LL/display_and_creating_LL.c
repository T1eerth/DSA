#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void main()
{
    struct node *head, *newnode, *temp;
    head = NULL;
    int choice=1 ;
        void create()
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data u want to enter");
            scanf("%d", &newnode->data);
            newnode->next = 0;
            newnode->prev = 0;
            if (head == NULL)
            {
                head = newnode;
                temp = newnode;
            }
            else
            {
                temp->next = newnode;
                newnode->prev = temp;
                temp = newnode;
            }
        }

        void display()
        {
            temp = head;
            while (temp != 0)
            {
                printf("%d ", temp->data);
                temp = temp->next;
            }
        }
        while (choice)
    {   
         printf("Enter 1 to create \nEnter 2 to Display \nEnter 0 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 0:
        {
            choice = 0;
            break;
        }
        default:
        {
            choice = 0;
            break;
        }
        }
    }
}
