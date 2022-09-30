#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *newnode, *head, *temp;
    head = NULL;
    int i = 1;
    int pos;
    int count = 0;
    int choice = 1;

    void display()
    {
        printf("Your list is :\n");
        temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }

    void insert_at_pos()
    {
        temp = head;
        while (temp != 0)
        {
            count++;
            temp = temp->next;
        }
        printf("Enter the position u want to enter the element");
        scanf("%d", &pos);
        if (pos > count)
        {
            printf("Please enter the valid input");
        }
        else
        {
            temp = head;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void delete_from_beg()
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        temp = head;
        head = head->next;
        free(temp);
    }

    void delete_from_end()
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        temp = head;
        while (temp != 0)
        {
            temp = temp->next;
        }
        free(temp);
    }

    void delete_from_pos()
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        struct node *nextnode;
        int pos, i = 1;
        temp = head;
        printf("Enter the position you want to delete");
        scanf("%d", &pos);
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }

    void insert_at_end()

    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data u want to insert");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    while (choice)
    {
        printf("Enter 1 to Continue \nEnter 2 to insert at a location \nEnter 3 to Display \nEnter 4 for Delete from the beginning \nEnter 5 to delete from end \nEnter 6 to delete from a position \nEnter 0 to Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (head == NULL)
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data");
                scanf("%d", &newnode->data);
                newnode->next = NULL;
                head = newnode;
                temp = newnode;
            }
            else
            {
                insert_at_end();
            }
            break;
        case 2:
            insert_at_pos();
            break;
        case 3:
            display();
            break;
        case 4:
            delete_from_end();
            break;
        case 5:
            delete_from_end();
            break;
        case 6:
            delete_from_pos();
            break;
        case 0:
            choice = 0;
            break;
        default:
            choice = 0;
            break;
        }
    }
}