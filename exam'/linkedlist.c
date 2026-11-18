#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node*next;

};
struct Node *start=Null;
void create_ll()
{
    struct node *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insert()
{
    struct Node *newnode;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = start;
    start = newnode;

    printf("Node insert .\n");
}
void delete()
{
    struct Node *ptr, *preptr;

    if (start == NULL)
    {
        printf("List is empty.\n");

    }

    ptr = start;
    preptr=ptr;

    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = NULL;
    free(ptr);
    printf("node deleted successfully.\n");
}
void display()
{
    struct Node *ptr;

    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    ptr = start;

    printf("Linked List are: ");

    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

int main()
{
    int ch;
    while(1)
    {
    printf("1. insert\n");
    printf("2. delete\n"");
    printf("3 .display\n");
    printf("4 . exit\n");

    printf("Enter your choice");
    scanf("%d",&ch);

    switch (ch)
    {
        case 1:
        insert();
        break;

        case 2:
        delete();
        break;

        case 3:
        display();
        break;

        case 4:
        exit();
        break;

    }


    }
