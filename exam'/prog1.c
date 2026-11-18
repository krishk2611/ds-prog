#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node*next;

};
struct Node *start=Null;
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
void exit()
{
    printf();
    Scanf();




}
int main()

}
